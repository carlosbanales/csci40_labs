#include <algorithm>
#include <cctype>
#include <fstream>
#include <iostream>
using namespace std;

// You'll want to make a function that will convert a string to lowercase
// and remove any non-alphabetic characters that exist around it!
// For example, "the.", "!the", "THE", and "0tHE" should all count as "the"
void fixString(string &s) {
  // FΙXME: implement this function to transform s into a "cleaned-up" version of itself
  // lowercase it
  int i = 0;

  while (i < s.size()) {
    if (!isalpha(s.at(i))) {
      s.erase(i, 1);
    }
    else {
      s.at(i) = tolower(s.at(i));
      i++;
    }
  }
}

int main(int argc, char *argv[]) {
  // FΙXME: open the file whose name is in argv[1] into an ifstream object
  ifstream file;
  file.open(argv[1]);
  // FΙXME: get the string to search for out of argv[2]
  string stringToSearchFor = argv[2];
  fixString(stringToSearchFor);
  int count = 0; // # of times the word appears
  string word;
  while (file >> word) {
    fixString(word);
    if (word == stringToSearchFor) {
      count++;
    }
  }

  file.close();
  // your implementation here (use stringToSearchFor and count)
  // FΙXME: search for the stringToSearchFor in the file and keep track of the count
  
  cout << "\"" << stringToSearchFor << "\""
       << " appears " << count << " times." << endl;

  return 0;
}
