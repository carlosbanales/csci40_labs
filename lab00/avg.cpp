#include <iostream>
#include <string>

using namespace std;

int main(void) {
  int first;
  int second;
  int third;
  int avg;

  cout << "Type the first number: ";
  cin >> first;
  cout << "Type the second number: ";
  cin >> second;
  cout << "Type the third number: ";
  cin >> third;

  avg = (first + second + third)/3;

  cout << "The average is " << avg << "." << endl;

  return 0;
}
