#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
    for(int row=1; row<=n; row++){
        for(int col=n; col>=row; col--){
            cout<< "*";
        }
        cout<<endl;
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
