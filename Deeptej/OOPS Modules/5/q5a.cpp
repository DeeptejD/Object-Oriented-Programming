#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  cout << "Enter a string: ";
  string str;
  
  getline(cin, str);

  string s(str);

  reverse(str.begin(), str.end());

  if (str == s) {
    cout << "is palindrome." << endl;
  } else {
    cout << "is not palindrome." << endl;
  }

  return 0;
}