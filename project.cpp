#include <iostream>
#include <fstream>
#include <chrono>
using namespace std;

void integer_addition() //function whose execution time is to be measured
{
	long long loop_max = 10000000000;
  long long loop_no = 0;
  int a = 2;
  int b = 4;
  int sum;

  auto start_time = chrono::steady_clock::now();
  while (loop_no < loop_max)
  {
    sum = a + b;
    loop_no ++;
  }
  auto end_time = chrono::steady_clock::now();
  cout << "Elapsed time in seconds: " << chrono::duration_cast<chrono::seconds>(end_time - start_time).count() << " sec" << endl;
}

int main()
{
  integer_addition();
  return 0;
}