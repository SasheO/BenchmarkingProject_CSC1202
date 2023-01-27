#include <iostream>
#include <fstream>
#include <chrono>
using namespace std;

int main(){
    long long loop_max = 1000000000;
    long long loop_no = 0;
    int sum;
    int quotient;
    int product;

    auto start_time = chrono::steady_clock::now();
    while (loop_no < loop_max) // while loop runs 10^9 times
    {

        for (int i=0; i<10; i++){ // addition, done 10 time per loop
        sum = 1 + 2;
    }

    for (int i=0; i<5; i++){ // multiplication, done 5 time per loop
        product = 1 * 2;
    }
    for (int i=0; i<2; i++){ // division, done 2 time per loop
        quotient = 10 / 100;
    }
    loop_no ++;

    }
    auto end_time = chrono::steady_clock::now();

    cout << "sum byte size:" << sizeof(sum) << endl;
    cout << "product byte size:" << sizeof(product) << endl;
    cout << "quotient byte size:" << sizeof(quotient) << endl;

    cout << "Time for integer operations: " << chrono::duration_cast<chrono::nanoseconds>(end_time - start_time).count() << " ns" << endl;
    return 0;
}