#include <iostream>
#include <fstream>
#include <chrono>
using namespace std;

int main(){
    string a_100bytes = string(100, 'a');
    ofstream outputFile("../data.txt");
    long long loop_max = 10000000;
    long long loop_no = 0;

    auto start_time = chrono::steady_clock::now();
    while (loop_no<loop_max){ // write to file 10^7 times, 100 byte per time
    outputFile << a_100bytes;
    loop_no++;
    }
    outputFile.close();

    ifstream inputFile("../data.txt");
    char b_100bytes[101]; // 101 because of 100 bytes and null char
    while (loop_no<loop_max){ // write to file 10^7 times, 100 byte per time
    inputFile.read(b_100bytes, sizeof(b_100bytes) - 1);
    loop_no++;
    }
    cout <<b_100bytes << endl;
    auto end_time = chrono::steady_clock::now();
    inputFile.close();

    cout << "Time for hard drive benchmark 1: " << chrono::duration_cast<chrono::nanoseconds>(end_time - start_time).count() << " ns" << endl;
    return 0;
}