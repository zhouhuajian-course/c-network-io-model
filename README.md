# C语言 5种UNIX网络IO模型

```
1. Blocking I/O Model 
2. Nonblocking I/O Model 
3. I/O Multiplexing Model
4. Signal-Driven I/O Model
5. Asynchronous I/O Model 
```

## 1. 阻塞IO

## 2. 非阻塞IO

## 3. IO多路复用

- select  
    https://man7.org/linux/man-pages/man2/select.2.html
    ```c
    typedef struct {
        long int fds_bits[1024];
    } fd_set;
    ```
- poll
- epoll

## 4. 信号驱动IO

## 5. 异步IO

## 其他

https://www.kernel.org/doc/man-pages/