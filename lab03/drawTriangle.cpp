#include <iostream>
using namespace std;

int main() {
  int size;
  int count;

  cout << "Enter size: ";
  cin >> size;
  cout << endl;
  count = size;

  if (size < 0) {
    cout << "Invalid size." << endl;
    return 0;
  }
  else {
    for (int i = 0; i < size; ++i) {
      for (int j = 0; j < size; ++j) {
        if (j < count - 1) {
          cout << " ";
        }
        else {
          cout << "*";
        }
      }
      --count;
      cout << endl;
    }
  }

  return 0;
}
