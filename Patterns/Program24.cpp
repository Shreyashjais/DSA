#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
    for(int row=1; row<=n;row++){
        for(int space= 1; space<row; space++){
            cout<<" ";
        }
        for(int col= row; col<=n; col++){
            cout<<row;
        }
        cout<<endl;
    }
}

int main() {
    pattern(4);
    return 0;
}


// 1 1 1 1
//   2 2 2
//     3 3
//       4