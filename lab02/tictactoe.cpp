#include <iostream>

using namespace std;

int main() {
  char b11, b12, b13, b21, b22, b23, b31, b32, b33;
  char winner = '?';

  cout << "Enter the board (left to right, top to bottom): ";
  cin >> b11 >> b12 >> b13 >> b21 >> b22 >> b23 >> b31 >> b32 >> b33;

  //   b11 | b12 | b13
  //   ----+-----+----
  //   b21 | b22 | b23
  //   ----+-----+----
  //   b31 | b32 | b33

  if ((b11 == b12 && b12 == b13) || (b11 == b22 && b22 == b33) || (b11 == b21 && b21 == b31)) {
    winner = b11;
  }

  if ((b21 == b22 && b22 == b23) || (b12 == b22 && b22 == b32) || (b13 == b22 && b22 == b31)) {
    winner = b22;
  }

  if ((b31 == b32 && b32 == b33) || (b13 == b23 && b23 == b33)) {
    winner = b33;
  }

  if (winner == 'X') {
    cout << "X wins!" << endl;
  }
  else if (winner == 'O') {
    cout << "O wins!" << endl;
  }
  else {
    cout << "It's a tie!" << endl;;
  }
  
  return 0;
}
