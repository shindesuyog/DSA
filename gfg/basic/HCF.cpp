#include <bits/stdc++.h>
using namespace std;
//brut aproach
/*
int gcd(int a, int b){
    int res=min(a,b);    //min is used to find minimum of a and b
    while(res>0){
        if(a%res==0 && b%res==0){
            break;
        }
        res--;
    }
    cout<<res;
    return res;
}*/

//optimized way (euclid)
int gcd(int a, int b){
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    cout<<a;
    return a;
}
int main(){
    int a,b;
    cout<<"enter a and b";
    cin>>a>>b;
    gcd(a,b);       
}