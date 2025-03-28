#include <iostream>

using namespace std;

int main() {
  int input;
  bool none = true;

  cout << "Enter a number: ";
  cin >> input;

  if ((input % 2) == 0) {
    none = false;
    cout << "fuzz";
  }
  if ((input % 3) == 0) {
    none = false;
    cout << "bizz";
  }
  if ((input % 5) == 0) {
    none = false;
    cout << "bazz";
  }
  if (none) {
    cout << input;
  }
  cout << endl;

  return 0;
}
