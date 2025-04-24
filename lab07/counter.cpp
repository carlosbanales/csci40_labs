#include "counter.h"

void Counter_construct(Counter *self, int startingValue) {
  (*self).count = startingValue; // same as this self->count
}

void Counter_inc(Counter *self) {
  self->count++;
}

void Counter_reset(Counter *self, int newValue) {
  self->count = newValue;
}

int Counter_getCount(const Counter *self) {
  int cnt = self->count;

  return (cnt);
}
