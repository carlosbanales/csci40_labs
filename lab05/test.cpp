#include <iostream>
#include "rationals.h"
using namespace std;

void assertTrue(bool b, string description) {
  if (!b) {
    cout << "FAILED: " << description << endl;
  } else {
    cout << "PASSED: " << description << endl;
  }
}

void testSimplify1();
void testTimes1();
void testPrettyString1();
void testLargeNumbers();
void testZeroDenom();

int main() {
  // Let's test our library!
  testSimplify1();
  testTimes1();
  testPrettyString1();
  testLargeNumbers();
  testZeroDenom();
  // FΙXME: add 2 more tests--each should call assertTrue once
  // they can be about anything

  return 0;
}

void testSimplify1() {
  int numer1 = 2, denom1 = -44;
  rationalSimplify(numer1, denom1);
  assertTrue(numer1 == -1 && denom1 == 22, "Simplify 2/-44");
}

void testTimes1() {
  int numer1 = 2, denom1 = -44;
  int numer2 = -3, denom2 = 6;
  int numerResult, denomResult; // the rationalTimes function will set these vars
  rationalTimes(numer1, denom1, numer2, denom2, numerResult, denomResult);
  assertTrue(numerResult == 1 && denomResult == 44, "2/-44 * -3/6");
}

void testPrettyString1() {
  int numer1 = 7, denom1 = -49;
  string res = rationalPrettyString(numer1, denom1);
  assertTrue(res == "-1 / 7", "Pretty 7/-49");
}

void testLargeNumbers() {
  int numer1 = 123456788;
  int denom1 = 452523526;
  rationalSimplify(numer1, denom1);
  assertTrue(numer1 == 678334 && denom1 == 2486393, "Large number test: 123456788 / 452523526");
  
}

void testZeroDenom() {
  int num = 4;
  int den = 0;
  string returnStr;

  returnStr = rationalPrettyString(num, den);

  assertTrue(returnStr == "Error", "Zero Denominator check: 4 / 0");
}
