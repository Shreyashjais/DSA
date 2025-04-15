// Printing sum of even numbers from 1 to n

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void evenSum(int n) {
  int sum=0;
  for (int i = 1; i <= n; i++) {
    if(i%2==0){
      sum=sum+i;
    }
    else{
      continue;
    }
  }
   cout << sum<<endl;
}

int main() {
  int n;
  cout << "Enter value of n";
  cin >> n;
  evenSum(n);
  return 0;
}
