#include<bits/stdc++.h>
using namespace std;

//brut approach 
/*
int expo(int n){
    if(n==0)
        return 1;

    int ans=2*expo(n-1);
    return ans;
}*/

//better approach
int expo(int n){
    if(n==0)
    return 1;

//odd
    int inner_call= exp(n/2);    //recursive call
    if (n&1){                    //n&1 is used for checking for whether a number is odd
        return 2*inner_call*inner_call;
    }
    else{
        return inner_call*inner_call;
    }
}
int main(){
    int n;
    cout<<"enter power ";
    cin>>n;

    cout<<"exo is "<<expo(n);
    //return 0;

}