#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
  
    for(int row=1; row<=n; row++){
        char ch= 'A'+n-row;
        for(int col=1; col<=row; col++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
       
    }
    
}
int main() {
    pattern(4);
    return 0;
}


//Important

// D
// CD
// BCD
// ABCD
