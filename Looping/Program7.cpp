// Printing Table

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void printTable(int n) {
  for (int i = 1; i <= 10; i++) {
    cout << i*n<<endl;
  }
}

int main() {
  int n;
  cout << "Enter value of n";
  cin >> n;
  printTable(n);
  return 0;
}
