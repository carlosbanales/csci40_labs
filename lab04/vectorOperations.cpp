#include <algorithm>  // hmm, why would Lawton include this for you?
#include <cstdlib>    // for atoi
#include <iostream>
#include <string>  // for stoi, if you'd prefer that over atoi
#include <vector>  // for vector
using namespace std;

int main(int argc, char* argv[]) {
  // The array is taken from the command line arguments
  // It's guaranteed to have at least 2 elements
  // (See the write-up for an example of how this program is run)

  vector<int> v;
  int min;
  int max;
  int minIndex = 0;
  int maxIndex = 0;
  int secondMin;
  int secondMax;

  for (int i = 1; i < argc; i++) {
    v.push_back(atoi(argv[i]));
  }

  min = v.at(0);
  max = 0;

  for (int i = 0; i < v.size(); i++) {
    if (v.at(i) < min) {
      min = v.at(i);
      minIndex = i;
    }
    if (v.at(i) > max) {
      max = v.at(i);
      maxIndex = i;
    }
  }
  
  sort(v.begin(), v.end());

  secondMin = *(v.begin() + 1);
  secondMax = *(v.end() - 2);


  cout << "min: " << min << endl << "max: " << max << endl;
  cout << "min index: " << minIndex << endl <<  "max index: " << maxIndex << endl;
  cout << "second-smallest element: " << secondMin << endl;
  cout << "second-largest element: " << secondMax << endl;

  // FΙXME: read all of the command line arguments (not including the program
  // name) into the vector v

  // The following FIXMEs tell you to print something. Please print each thing
  // using the style from the write-up.
  // FΙXME: find the min element and print it
  // FΙXME: find the max element and print it
  // FΙXME: find the index of the minimum element and print it
  // FΙXME: find the index of the maximum element and print it
  // FΙXME: find & print the second-smallest element (duplicates count as
  // separate elements!);
  // FΙXME: find & print the second-largest element (duplicates count as
  // separate elements!)

  return 0;
}
