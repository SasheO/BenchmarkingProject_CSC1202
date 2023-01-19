#include <iostream>
#include <fstream>
#include <chrono>
using namespace std;

int main(){
    string a_10000bytes = string(10000, 'a');
    ofstream outputFile("../data.txt");
    ifstream inputFile("../data.txt");
    char b_100bytes[10001]; // 101 because of 100 bytes and null char
    long long loop_max = 100000;
    long long loop_no = 0;

    

    cout << "Time for hard drive benchmark 2: " << chrono::duration_cast<chrono::nanoseconds>(end_time - start_time).count() << " ns" << endl;

    return 0;
}