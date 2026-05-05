#include <string>
#include <iostream>
#include <sys/wait.h>
#include <unistd.h>
using namespace std;
int main (){
    cout << "parent pid : "<<getpid()<<"\n";
    int rc=0;
    if (rc<0){
        exit(1);
    }
    else if (rc==0){
        cout << "child with its pid "<<getpid()<<"\n";
        char* myargs[3];
        myargs[0]=(char*)"wc";
        myargs[1]=(char*)"exec1.cpp";
        myargs[2]=NULL;
        execvp("wc",myargs);
    }
    else {
        int wc=wait(NULL);
        cout << "parent pid " << getpid()<<"\n";
    }
    return 0;
}
