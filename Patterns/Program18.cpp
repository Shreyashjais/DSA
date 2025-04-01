#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
    char ch ='A';
    for(int row=1; row<=n; row++){
        for(int col=1; col<=row; col++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
    
}
int main() {
    pattern(5);
    return 0;
}

// A
// BC
// DEF
// GHIJ
// KLMNO