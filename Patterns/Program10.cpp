#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
    for(int row=1; row<=n;row++){
        int count=row;
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
// 3 4 5 
// 4 5 6 7 
