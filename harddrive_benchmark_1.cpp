#include <iostream>
#include <fstream>
#include <chrono>
using namespace std;

int main(){
    char outplaceholder[100]; // create static array of 100 chars 1 byte each
    char inplaceholder[100]; // create static array of 100 chars 1 byte each
    ofstream outputFile("../out.bin", ios::out | ios::binary);
    ifstream inputFile("../data.bin", ios::out | ios::binary);
    long long loop_max = 10000000;
    long long loop_no = 0;

    auto start_time = chrono::steady_clock::now();
    while (loop_no<loop_max){ // write to file 10^7 times, 100 byte per time
    outputFile.write(outplaceholder, 100);
    inputFile.read(inplaceholder, 100);
    loop_no++;
    }
    auto end_time = chrono::steady_clock::now();
    outputFile.close();
    inputFile.close();

    cout << "Time for hard drive benchmark 1: " << chrono::duration_cast<chrono::nanoseconds>(end_time - start_time).count() << " ns" << endl;
    return 0;
}