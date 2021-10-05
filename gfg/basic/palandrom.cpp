#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int flag=0;
    int l=s.length()-1;

    for(int i=0; i<l/2;i++){
        if(s[i]==s[l]){
            l--;
            flag=0;
        }
        else{
            flag=1;
        }
    }
    if(flag==1){
        cout<<"not p";
    }
    else{
        cout<<"p";
    }

}