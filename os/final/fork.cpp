#include <iostream>
#include <unistd.h>
#include <sys/wait.h>
using namespace std;
int main(){
    cout << "hello world\n"<<(int)getpid()<<"\n";
    int rc=fork();
    if (rc<0){
        exit(1);
    }
    if(rc==0){
        cout << "child pid : " << (int)getpid()<<"\n";
    }
    else {
        int wc=wait(NULL);
        cout << "parent pid : " <<(int)getpid()<<"\n";
        cout << "wc returns pid of children and use sys/wait.h to get it: "<< (int)wc<<"\n";
    }
    return 0;
}
