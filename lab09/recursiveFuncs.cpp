#include <cctype>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

#include "recursiveFuncs.h"
bool isPalindromeRecursive(const string str);

bool isPalindrome(const string str) {
  string copy;

  copy = str;

  for (int i = 0; i < copy.size(); i++) {
    copy.at(i) = tolower(copy.at(i));
  }
  copy.erase(remove(copy.begin(), copy.end(), ' '), copy.end());

  return isPalindromeRecursive(copy);
}

// All function implementations below must use recursion. //

bool isPalindromeRecursive(const string str) {
  string copy;

  copy = str;

  if (copy.size() <= 1)
    return true;

  if (copy.front() != copy.back())
    return false;

  return isPalindromeRecursive(copy.substr(1, copy.size() - 2));
}

int sumDigits(int n) {
  int next_num;
  int last_digit;
  int sum;

  if (n < 10) {
    last_digit = n;
    return last_digit;
  }
  else {
    last_digit = n % 10;
    next_num = n / 10;

    sum = last_digit + sumDigits(next_num);
  }

  return sum;
}

// FΙXME: return the length of the C-string s.
// For example, stringLength("asdf") should return 4.
// The length of an empty string is 0.
// How do you extract a smaller string from s? Hint: remember that s
// is a pointer to the first character in the string.
int stringLength(const char* s) {
  int count = 0;

  if (s != nullptr && *s != '\0') {
    count = stringLength(s + 1);
    count++;
  }
  
  return count;
}
