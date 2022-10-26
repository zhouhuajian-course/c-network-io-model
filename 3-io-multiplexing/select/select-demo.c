/**
#include <sys/select.h>

int select(int nfds, fd_set *restrict readfds,
   fd_set *restrict writefds, fd_set *restrict errorfds,
   struct timeval *restrict timeout);

select.h可以在/usr/include/sys里面找到

 */
#include <stdio.h>
#include <stdlib.h>
#include <sys/select.h>
#define STDIN 0

int main(void)
{
    fd_set rfds;
    struct timeval tv;
    int retval;

    /* Watch stdin (fd 0) to see when it has input. */

    FD_ZERO(&rfds);
    FD_SET(STDIN, &rfds);

    /* Wait up to five seconds. */

    tv.tv_sec = 5;
    tv.tv_usec = 0;

    retval = select(1, &rfds, NULL, NULL, &tv);
    /* Don't rely on the value of tv now! */

    if (retval == -1)
        perror("select()");
    else if (retval)
        printf("Data is available now.\n");
        /* FD_ISSET(0, &rfds) will be true. */
    else
        printf("No data within five seconds.\n");

    exit(EXIT_SUCCESS);
}