#include "rationals.h"

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int GCD(int a, int b) {
  while (b != 0) {
    int newA = b;
    int newB = a % b;
    a = newA;
    b = newB;
  }

  return a;
}

void rationalSimplify(int& numer, int& denom) {
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

void rationalTimes(int numer1, int denom1, int numer2, int denom2, int& resultNumer, int& resultDenom) {
  resultNumer = numer1 * numer2;
  resultDenom = denom1 * denom2;
  rationalSimplify(resultNumer, resultDenom);
}

string rationalPrettyString(int numer, int denom) {
  string fraction;
  string error = "Error";

  if (denom == 0)
    return error;

  rationalSimplify(numer, denom);
  

  fraction = to_string(numer) + " / " + to_string(denom);

  return fraction;
}
