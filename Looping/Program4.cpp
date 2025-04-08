// Printing numbers from 1 to n

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void printNumbers(int n) {
  for (int i = 1; i <= n; i++) {
    cout << i<<endl;
  }
}

int main() {
  int n;
  cout << "Enter value of n";
  cin >> n;
  printNumbers(n);
  return 0;
}
