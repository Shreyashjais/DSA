#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
    int count=1;
    for(int row=1; row<=n; row++){

        for(int space=row; space<n;space++){
            cout<<" ";
        }
        for(int col=1; col<=row;col++){
            cout<<count;
            count++;
        }
        cout<<endl;
       
    }
}

int main() {
    pattern(4);
    return 0;
}

//    1
//   23
//  456
// 78910