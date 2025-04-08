// Check whether a number is positive, negative or zero.


#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void compare(int a) {
  if (a > 0) {
    cout << "positive";
  } else if (a < 0) {
    cout << "negative";
  } else {
    cout << "It's neutral";
  }
}

int main() {
  int a;
  cout << "Enter value of a";
  cin >> a;

  compare(a);

  return 0;
}