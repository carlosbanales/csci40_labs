#include "rationals.h"

#include <iostream>
#include <cstdlib> // for abs
#include <string> // for to_string
using namespace std;

Rational::Rational(int n, int d) {
  numer = n;
  denom = d;

  simplify();
}

std::string Rational::toPrettyString() const {
  string fraction;
  string error = "Error";

  if (denom == 0)
    return error;

  fraction = to_string(numer) + " / " + to_string(denom);

  return fraction;
}

Rational Rational::operator*(const Rational& other) const {
  return Rational(numer * other.numer, denom * other.denom);
}

Rational Rational::operator+(const Rational& other) const {
  int numerator = numer * other.denom + other.numer * denom;
  int denominator = denom * other.denom;

  return Rational(numerator, denominator);
}

int GCD(int a, int b) {
  while (b != 0) {
    int newA = b;
    int newB = a % b;
    a = newA;
    b = newB;
  }

  return a;
}

void Rational::simplify() {
  bool isNeg;
  int posNumer;
  int posDenom;
  int gcd;

  if (numer < 0 && denom >= 0) {
    isNeg = true;
  }
  else if (numer >= 0 && denom < 0) {
    isNeg = true;
  }
  else {
    isNeg = false;
  }
  posNumer = abs(numer);
  posDenom = abs(denom);

  gcd = GCD(posNumer, posDenom);

  numer = posNumer / gcd;
  denom = posDenom / gcd;

  if (isNeg)
    numer *= -1;
}
