#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
    for(int row=1; row<=n; row++){
        int space=n-row;
        for(int col=1; col<=space; col++){
            cout<<" ";
            
        }
        for(int col=1; col<=row; col++){
            cout<<"*";
        }
        cout<<endl;
    }
    
}
int main() {
    pattern(5);
    return 0;
}

//  Important
//     *
//    **
//   ***
//  ****
// *****