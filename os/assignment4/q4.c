#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>    
#include <unistd.h>     
#include <sys/types.h>
#include <sys/stat.h>
#define BUFFER_SIZE 1024
int main() {
    int fd_read, fd_write;
    char buffer[BUFFER_SIZE];
    ssize_t bytes_read;
    fd_read = open("input.txt", O_RDONLY);
    if (fd_read < 0) {
        perror("Error opening input file");
        exit(1);
    }
    fd_write = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd_write < 0) {
        perror("Error opening output file");
        close(fd_read);
        exit(1);
    }
    while ((bytes_read = read(fd_read, buffer, BUFFER_SIZE)) > 0) {
        if (write(fd_write, buffer, bytes_read) != bytes_read) {
            perror("Write error");
            close(fd_read);
            close(fd_write);
            exit(1);
        }
    }
    if (bytes_read < 0) {
        perror("Read error");
    }
    close(fd_read);
    close(fd_write);
    printf("File copied successfully.\n");
    return 0;
}

