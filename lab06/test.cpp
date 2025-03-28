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

void testConstructAndSimplify1();
void testTimes1();
void testPlus1();
void testZeroDenom();
void testLargeNumbers();

int main() {
  // Now, the only way we can test is if we call the toPrettyString function
  testConstructAndSimplify1();
  testTimes1();
  testPlus1();
  testZeroDenom();
  testLargeNumbers();

  return 0;
}

void testConstructAndSimplify1() {
  int numer1 = 2, denom1 = -44;
  Rational r(numer1, denom1);
  assertTrue(r.toPrettyString() == "-1 / 22", "Construct and simplify 2/-44");
}

void testTimes1() {
  Rational r1(2, -44);
  Rational r2(-3, 6);
  Rational result = r1 * r2;
  assertTrue(result.toPrettyString() == "1 / 44", "2/-44 * -3/6");
}

void testPlus1() {
  Rational r1(5, -45);
  Rational r2(-7, 42);
  Rational result = r1 + r2;
  assertTrue(result.toPrettyString() == "-5 / 18", "5/-45 + -7/42");
}

void testZeroDenom() {
  Rational r1(4, 0);
  Rational r2(4, 8);
  Rational result = r1 + r2;
  assertTrue(result.toPrettyString() == "Error", "0 Denominator Test with - ( 4/0, 4/8) \"Error\"");
}

void testLargeNumbers() {
  Rational r1(100000, 99999);
  Rational r2(99999, 100000);
  Rational result = r1 * r2;
  assertTrue(result.toPrettyString() == "1 / 1", "Large int test - 100000/99999 * 99999/100000"); 
}
