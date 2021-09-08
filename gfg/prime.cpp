#include<bits/stdc++.h>
using namespace std;
//brut approach       // time complexity is O(n)
/*
int prime(int n){
    int flag=0;
    
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"not prime ";
            flag=1;
            break;
        }
    }
        if(flag==0){
            cout<<"prime";
        }  
}
*/            
//optimised soln      //time complexity is O(_/n)
/*
int prime(int n){
    int flag=0;
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            cout<<"not prime";
            flag=1;
            break;
        }
    }
    if (flag==0){
            cout<<"prime";
        }
}
*/

//more optimised

int prime(int n){
    int flag=0;
    if(n%2==0 || n%3==0){
        cout<<"not prime";
        return 0;
    }
    for(int i=6; i*i<=n; i=i+6){
        if(n%i==0){
            cout<<"not prime";
            flag=1;
            break;
        }
    }
    if (flag==0){
            cout<<"prime";
        }
}

int main(){
    int n;
    cout<<"enter number ";
    cin>>n;
    prime(n);
}