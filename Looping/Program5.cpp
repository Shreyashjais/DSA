// Printing sum of numbers from 1 to n

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void printSum(int n) {
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    sum = sum + i;
  }
  cout << sum << endl;
}

int main() {
  int n;
  cout << "Enter value of n";
  cin >> n;
  printSum(n);
  return 0;
}
