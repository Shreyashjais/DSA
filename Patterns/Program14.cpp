#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
    for(int row=1; row<=n;row++){
        char ch= 'A';
        for(int col=1; col<=n;col++){
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


// ABCD
// ABCD
// ABCD
// ABCD
