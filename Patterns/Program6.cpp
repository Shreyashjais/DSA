#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
    for(int row=1; row<=n;row++){
        for(int col=n; col>=1;col--){
            cout<<col;
        }
        cout<<endl;
    }
}
int main() {
    pattern(4);
    return 0;
}


// 4321
// 4321
// 4321
// 4321