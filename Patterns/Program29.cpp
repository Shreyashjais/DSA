#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void pattern(int n) {
  int limit = n;
  for (int row = 1; row <= n; row++) {
    for (int col1 = 1; col1 <= limit; col1++) {
      cout << col1;
    }
    limit--;
    for (int col2 = 2; col2 <= row; col2++) {
      cout << "*";
    }
     for (int col3 = 2; col3 <= row; col3++) {
      cout << "*";
    }
    for(int col4=n-row+1; col4>=1; col4-- ){
        cout<<col4;
    }
    cout << endl;
  }
}

int main() {
  pattern(5);
  return 0;
}

// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1