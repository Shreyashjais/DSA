#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
    int count=1;
    for(int row=1; row<=n;row++){
        for(int col=1; col<=row;col++){
            cout<<count <<" ";
            count++;
        }
        cout<<endl;
    }
}
int main() {
    pattern(4);
    return 0;
}


// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
