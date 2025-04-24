#include <iostream>
using namespace std;

#include "rotate3.h"

void rotate3(int *a, int *b, int *c) {
  int temp;
  
  if (a != nullptr && b != nullptr && c != nullptr) {
    temp = *a;
    *a = *c;
    *c = temp;
    temp = *b;
    *b = *c;
    *c = temp;
  }
}

// FΙXME: implement the rotate3 function here
// it rotates all numbers to the RIGHT,
// for example:
//   int x = 42, y = 43, z = 44;
//   rotate3(&x, &y, &z);
// after those two lines, y = 42, z = 43, and x = 44
// **If any pointers are null, your function should do nothing**
