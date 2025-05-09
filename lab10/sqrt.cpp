#include <iostream>
#include <algorithm>
#include <cmath>
#include <stdexcept>
#include "sqrt.h"
using namespace std;

// FΙXME: return true if the two numbers are within 0.000001 of each other
bool approxEqual(double a, double b) { 
  bool isEqual = false;

  isEqual = fabs(a - b) < 0.000001;

  return isEqual;
}

// FΙXME: implement this function by making repeated guesses
// FΙXME: throw a runtime_error if x < 0
double squareRoot(double x) {
  double sqrt;
  double high;
  double low;
  double mid;

  high = x;
  low = 0;

  if (x < 0)
    throw runtime_error("Number must b zero or greater");
  else if (x > 1.0e+18)
    throw runtime_error("Number too large");
  else if (x == 0)
    return 0;
  else if (x < 1)
    high = 1;
  else if (x == 1)
    return 1.0;

  while (!approxEqual(low, high)) {
    mid = low + (high - low) / 2;

    if (approxEqual(low, high)) {
      return mid;
    }

    else if ((mid * mid) > x) {
      high = mid;
    }
    else {
      low = mid;
    }
    // cout << mid << endl;
  }

  return mid;
}
/*
int main() {
  double num = 0;
  double sqrt;

  sqrt = squareRoot(num);

  cout << sqrt << endl;

  return 0;
}*/
