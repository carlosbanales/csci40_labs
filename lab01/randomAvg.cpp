#include <iostream>
#include <cstdlib> // for srand and rand
#include <ctime> // for time
#include <ios> // for fixed
#include <iomanip> // for setprecision
using namespace std;

int main() {
  srand(time(0)); // seed the random number generator

  int num1;
  int num2;
  int num3;
  int num4;
  int num5;
  double numAvg;

  num1 = (rand() % 100) + 1;
  num2 = (rand() % 100) + 1;
  num3 = (rand() % 100) + 1;
  num4 = (rand() % 100) + 1;
  num5 = (rand() % 100) + 1;

  numAvg = (num1 + num2 + num3 + num4 + num5) / 5.0;

  cout << "Random numbers between 1 and 100:" << endl;

  cout << num1 << endl << num2 << endl << num3 << endl << num4 << endl << num5 << endl;

  cout << "Average: " << fixed << setprecision(2) << numAvg << endl;

  return 0;
}
