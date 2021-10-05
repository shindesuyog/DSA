#include <bits/stdc++.h>
using namespace std;

int prime(int n){
    if(n>=1){
        for(int i=2;i*i<=n;i++){
            while(n%i==0){
                cout<<i;
                n=n/i;
            }
        }
        if(n<=1)
            cout<<n;
    }
}

int main(){
    int n;
    cout<<"enter number ";
    cin>>n;
    prime(n);
}