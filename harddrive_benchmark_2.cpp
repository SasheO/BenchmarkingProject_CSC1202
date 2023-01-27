#include <iostream>
#include <fstream>
#include <chrono>
using namespace std;

int main(){
    string a_10000bytes = string(10000, 'a');
    ofstream outputFile("../data.txt");
    ifstream inputFile("../data.txt");
    char b_10000bytes[10001]; // 10001 because of 10000 bytes and null char
    long long loop_max = 100000;
    long long loop_no = 0;

    auto start_time = chrono::steady_clock::now();
    while (loop_no<loop_max){ // write to file 10^5 times, 10000 byte per time
    outputFile << a_10000bytes;
    loop_no++;
    }
    outputFile.close();

    loop_no = 0;

    while (loop_no<loop_max){ // write to file 10^5 times, 10000 byte per time
    inputFile.read(b_10000bytes, sizeof(b_10000bytes) - 1);
    loop_no++;
    }
    auto end_time = chrono::steady_clock::now();
    inputFile.close();

    cout << "Time for hard drive benchmark 2: " << chrono::duration_cast<chrono::nanoseconds>(end_time - start_time).count() << " ns" << endl;

    return 0;
}