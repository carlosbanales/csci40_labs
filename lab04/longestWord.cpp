#include <iostream>
#include <string>
using namespace std;

int main() {
  // FΙXME: read words from cin, and keep track of which one is the biggest
  int max = 0;
  int len;
  string longestWord;
  string currentWord;
  // the following while loop keeps getting a word from cin and putting it into
  // the currentWord variable--it does this until the "end of file" is reached,
  // at which point the expression (cin >> currentWord) will be "falsy" and stop
  // the loop
  while (cin >> currentWord) {
    len = currentWord.size();
    if (len > max) {
      max = len;
      longestWord = currentWord;
    }
  }

  cout << "The longest word is: " << longestWord << endl;
  // FΙXME: output "The longest word is: ", and then print the longest word (on
  // that same line)

  return 0;
}
