#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
    for(int row=1; row<=n;row++){
        char ch= 'A'+row-1;
        for(int col=1; col<=row;col++){
            cout<<ch;
        }
        cout<<endl;
    }
}
int main() {
    pattern(4);
    return 0;
}

// A
// BB
// CCC
// DDDD