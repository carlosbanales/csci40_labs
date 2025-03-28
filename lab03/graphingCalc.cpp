#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int choice;

  cout << "Enter 0, 1, or 2 (0 -> (0.15*x)^2 - 3, 1 -> (0.15*x)^3 + 2, 2 -> 5*sin(0.25*x)): ";
  cin >> choice;
  cout << endl;

  for (int y = 12; y >= -11; y--) {
    for (int x = -38; x <= 39; x++) {
      if ((choice == 0) && (y == round((0.15*x)*(0.15*x) - 3))) {
        cout << "*";
      }
      else if ((choice == 1) && (y == round((0.15*x)*(0.15*x)*(0.15*x) + 2))) {
        cout << "*";
      }
      else if ((choice == 2) && (y == round(5*sin(0.25*x)))) {
        cout << "*";
      }
      else if ((x == 0) && (y == 0)) {
        cout << "+";
      }
      else if (x == 0) {
        cout << "|";
      }
      else if (y == 0) {
        cout << "-";
      }
      else {
        cout << " ";
      }
    }
    cout << endl;
  }
  return 0;
}
