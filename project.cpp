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
  while (loop_no < loop_max) // while loop runs 10^9 times
  {

     for (int i=0; i<10; i++){ // addition, done 10 time per loop
      sum = a + b;
    }

    for (int i=0; i<5; i++){ // multiplication, done 5 time per loop
      product = a * b;
    }
    for (int i=0; i<2; i++){ // division, done 2 time per loop
      quotient = a / b;
    }
    loop_no ++;
    
  }
  auto end_time = chrono::steady_clock::now();
  cout << "Time for integer operations: " << chrono::duration_cast<chrono::milliseconds>(end_time - start_time).count() << " ms" << endl;
}

void floating_point_operations() //function whose execution time is to be measured
{
	long long loop_max = 1000000000;
  long long loop_no = 0;
  double a = 2.5;
  double b = 15.92;
  double sum;
  double quotient;
  double product;

  auto start_time = chrono::steady_clock::now();
  
  while (loop_no < loop_max) // while loop runs 10^9 times
  {

     for (int i=0; i<10; i++){ // addition, done 10 time per loop
      sum = a + b;
    }

    for (int i=0; i<5; i++){ // multiplication, done 5 time per loop
      product = a * b;
    }
    for (int i=0; i<2; i++){ // division, done 2 time per loop
      quotient = a / b;
    }
    loop_no ++;
    
  }
  
  auto end_time = chrono::steady_clock::now();
  cout << "Time for floating point operations: " << chrono::duration_cast<chrono::milliseconds>(end_time - start_time).count() << " ms" << endl;
}

// TODO: fix this. output given is 1 ms??
void memory_operations(){
  int *ptr;
  int arr[50000];
  ptr = arr; // store the address of the first element of arr in ptr
  long long loop_max = 500000;
  long long loop_no = 0;
  int a;
  int b = 11;

  auto start_time = chrono::steady_clock::now();
  for (int i = 0; i < 100000; i++){ // runs 10^4 times
    while (loop_no < loop_max) // while loop runs 5 * 10^5 times
    {
      a = *ptr; // read from memory

      *ptr = b; // write to memory

      ptr = ptr + 1; // move to the next slot in memory

      loop_no++;
    }

    ptr = arr; // set pointer back to beginning of array in next loop
  
  }

  auto end_time = chrono::steady_clock::now();
  cout << "Time for memory operations: " << chrono::duration_cast<chrono::nanoseconds>(end_time - start_time).count() << " ns" << endl;
  

}

void harddrive_benchmark_1(){

}

void harddrive_benchmark_2(){
  
}

int main()
{
//   integer_operations();
//   floating_point_operations();
  // memory_operations();
  harddrive_benchmark_1();
  // harddrive_benchmark_2();

  return 0;
}