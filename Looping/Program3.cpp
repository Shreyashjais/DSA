// Check whether if a number is numeric, in lowercase or uppercase

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

string compare(char a) {
  if (a >= '0' && a <= '9') {
    return "numeric";
  } else if (a >= 'a' && a <= 'z') {
    return "lowercase";
  } else if (a >= 'A' && a <= 'Z') {
    return "uppercase";
  } else {
    return "none of it";
  }
}

int main() {
  char a;
  cout << "Enter value of a";
  cin >> a;
  string ans = compare(a);
  cout << ans;
  return 0;
}
