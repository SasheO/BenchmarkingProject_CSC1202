#include <iostream>
#include <fstream>
#include <chrono>
using namespace std;

int main(){
    // TODO: fix this. output given is 1 ms??
    int arr[50000];
    int a;
    int b = 11;

    auto start_time = chrono::steady_clock::now();
    for (int i = 0; i < 100000; i++){ // runs 10^5 times
    for (int j = 0; j < 50000; j++) // loop runs 5 * 10^4 times
    {
        a = arr[j];
    }
    }


    for (int i = 0; i < 100000; i++){ // runs 10^5 times
    for (int j = 0; j < 50000; j++) // loop runs 5 * 10^4 times
    {
        arr[j] = 12;
    }

    }

    auto end_time = chrono::steady_clock::now();
    cout << "Time for memory operations: " << chrono::duration_cast<chrono::nanoseconds>(end_time - start_time).count() << " ns" << endl;


    return 0;
}