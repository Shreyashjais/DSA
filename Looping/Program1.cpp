//Largest of two numbers

#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int compare(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }

}


int main(){
    int a,b;
    cout<<"Enter value of a and b";
    cin>>a;
    cin>>b;
    int ans= compare(a,b);
    cout<<ans;
    return 0;
}
