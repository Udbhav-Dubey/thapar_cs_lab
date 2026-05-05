#include <iostream>
#include <unistd.h>
#include <string.h>
using namespace std;

int main() {
    int fd[2];
    char msg[] = "Hello from Parent";
    char buffer[50];

    pipe(fd);

    if(fork() == 0) {
        // Child process
        read(fd[0], buffer, sizeof(buffer));
        cout << "Child received: " << buffer << endl;
    } else {
        // Parent process
        write(fd[1], msg, strlen(msg) + 1);
    }

    return 0;
}
