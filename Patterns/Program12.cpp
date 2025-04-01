#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
    for(int row=1; row<=n;row++){
        int value=row;
        for(int col=1; col<=row;col++){
            cout<<value<<" ";
            value--;
        }
        cout<<endl;
    }
}
int main() {
    pattern(4);
    return 0;
}

// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 
