#include <iostream>
#include <fstream>
#include <chrono>
using namespace std;

int main(){
    string a_100bytes = string(100, 'a');
    ofstream outputFile("../out.txt"\);
    ifstream inputFile("../data.txt");
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