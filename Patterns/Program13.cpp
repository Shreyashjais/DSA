#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
      char value= 'A';
    for(int row=1; row<=n;row++){
        for(int col=1; col<=n;col++){
            cout<<value;
        }
        cout<<endl;
         value++;
    }
}
int main() {
    pattern(4);
    return 0;
}

// AAAA
// BBBB
// CCCC
// DDDD
