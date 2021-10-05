#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if (n==1)
        return 1;
    if (n==0)
        return 0;

    int ans= fib(n-2)+fib(n-1);
    return ans;
}

int main(){
    int n;
    cout<<"enter number ";
    cin>>n;

    cout<<"fibonacci is "<<fib(n);
}