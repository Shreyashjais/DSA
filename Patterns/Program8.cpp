#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
    for(int row=1; row<=n;row++){
        for(int col=1; col<=row;col++){
            cout<<row;
        }
        cout<<endl;
    }
}
int main() {
    pattern(4);
    return 0;
}


// 1
// 22
// 333
// 4444