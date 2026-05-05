#include <iostream>
#include <thread>
#include <chrono>

void printNumbers(int n){
    for (int i=0;i<n;i++){
        std::cout << "Number : " << i  << "\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
}
int main (){
    std::cout << "Main Thread starting \n";
    std::thread worker(printNumbers,5);
    std::cout << "Worker thread launched , main continues\n";
    for (int i=0;i<3;i++){
        std::cout << " Main : " << i << "\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(700));
    }
    std::cout << "Main waitinng for worker ...\n";
    worker.join(); // must join before thread goes out of scope 
    std::cout << "All done !\n";
    return 0;
}
