#include <iostream>
#include <fstream>
using namespace std;

void integer_addition() //function whose execution time is to be measured
{
	long long loop_max = 10000000000;
  long long loop_no = 0;
  int a = 2;
  int b = 4;
  int sum;

  while (loop_no < loop_max)
  {
    sum = a + b;
    loop_no ++;
  }
}

int main()
{

  return 0;
}