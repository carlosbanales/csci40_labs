#include <fstream>
#include <iostream>
#include <cstdlib>

#include "etchASketch.h"
using namespace std;

int main(int argc, char *argv[]) {
  if (argc != 2) {
    cout << "Usage: " << argv[0] << " inputFile" << endl;
    exit(1);
  }

  // FΙXME: open up the file whose name is in argv[1]
  ifstream file;
  file.open(argv[1]);
  // FΙXME: create an EtchASketch object
  EtchASketch drawing;
  char c;
  while (file >> c) {
    if (c == 'l')
      drawing.left();
    else if (c == 'r')
      drawing.right();
    else if (c == 'u')
      drawing.up();
    else if (c == 'd')
      drawing.down();
  }
  // FΙXME: read the file, one character at a time, and make our
  // etch-a-sketch move in a given direction:
  // if you read a 'l', make the EtchASketch object move left, 
  // if you read a 'r', make the EtchASketch object move right, etc.
  // if you read an *invalid* character (not one of {l, r, u, d}),
  // skip it and move on to the next char

  // FΙXME: print the pretty drawing that you built up in the EtchASketch object
  cout << drawing.getArtwork();

  return 0;
}
