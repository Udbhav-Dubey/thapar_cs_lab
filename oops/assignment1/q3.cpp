#include <iostream>
using namespace std;
int main (){
    int n=5;
    for (int i=0;i<n;i++){
        cout << i << " ";
    }
    int i=0;
    cout << "\n";
    for (;i<n;i++){
        cout << i << " ";
    }
    cout << "\n";
    i=0;
    for (;i<n;){
        cout << i << " ";
        i++;
    }
    cout << "\n";
    i=0;
    for (;;){
        if (i==5){break;}
        cout << i << " ";
        i++;
    }
    cout << "\n";
    i=0;
    while(i<5){
        cout << i << " ";
        i++;
    }
    cout << "\n";
    i=0;
    while(true){
        if (i==5)break;
        cout << i << " ";
        i++;
    }
    cout << "\n";
    i=0;
    do{
        cout << i << " ";
        i++;
    }
    while(i<5);
    cout << "\n";
    i=10;
        do {
            cout << i <<" ";

        } while(i<5);
        cout << "\n";
    return 0;
}
