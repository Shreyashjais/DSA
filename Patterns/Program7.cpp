#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
     int count=1;
    for(int row=1; row<=n;row++){
       
        for(int col=1; col<=n;col++){
            cout<<count;
            count++;
        }
        cout<<endl;
    }
}
int main() {
    pattern(3);
    return 0;
}


// 123
// 456
// 789