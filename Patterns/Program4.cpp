#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
    for(int row=1; row<=n; row++){
        for(int col=1; col<=row; col++){
            cout<<col;
        }
        cout<<endl;
    }
    
}
int main() {
    pattern(5);
    return 0;
}

// 1
// 12
// 123
// 1234
// 12345