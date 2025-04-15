#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void pattern(int n){
    for(int row=1; row<=n;row++){
       int space= n-row;
       while(space){
        cout<<" ";
        space--;
       }
       int col1=1;
       while(col1<=row){
        cout<<col1;
        col1++;
       }
       int col2=row-1;
       while(col2){
        cout<<col2;
        col2--;
       }
       cout<<endl;
    }
}

int main() {
    pattern(4);
    return 0;
}


//    1
//   121
//  12321
// 1234321