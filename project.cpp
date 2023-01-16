#include <iostream>
#include <fstream>
#include <chrono>
using namespace std;

void integer_operations() //function whose execution time is to be measured
{
	long long loop_max = 1000000000;
  long long loop_no = 0;
  int a = 2;
  int b = 4;
  int sum;
  int quotient;
  int product;

  auto start_time = chrono::steady_clock::now();
  while (loop_no < loop_max)
  {

     for (int i=0; i<10; i++){ // addition
      sum = a + b;
    }

    for (int i=0; i<5; i++){ // multiplication
      product = a * b;
    }
    for (int i=0; i<; i++){ // division
      quotient = a / b;
    }
    loop_no ++;
    
  }
  auto end_time = chrono::steady_clock::now();
  cout << "Time for integer operations: " << chrono::duration_cast<chrono::seconds>(end_time - start_time).count() << " sec" << endl;
}

int main()
{
  integer_operations();
  return 0;
}