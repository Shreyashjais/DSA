#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
    int count=n;
    for(int row=1; row<=n; row++){
        for(int col=count; col>=1; col--){
            cout<<"*";
        }
    cout<<endl;
        count--;
    }   
}
int main() {
    pattern(5);
    return 0;
}

// *****
// ****
// ***
// **
// *