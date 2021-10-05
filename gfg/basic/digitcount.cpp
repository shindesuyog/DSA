#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, count=0;
    cout<<"enter number";
    cin>>n;

    for(int i=0; n>0; i++){
        n=n/10;
        count++;

    }
    cout<<"count is "<<count;
}