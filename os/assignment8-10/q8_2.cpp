#include <iostream>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <unistd.h>
#include <cstring>
using namespace std;

int main() {
    key_t key = 1234;
    int shmid = shmget(key, 1024, 0666 | IPC_CREAT);

    char* data = (char*) shmat(shmid, NULL, 0);

    if(fork() == 0) {
        // Child
        cout << "Child read: " << data << endl;
    } else {
        // Parent
        strcpy(data, "Hello using Shared Memory");
    }

    return 0;
}
