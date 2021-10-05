#include<bits/stdc++.h>
using namespace std;

void printNum(int n, string str[]){
    if(n==0)
        return;

    printNum(n/10,str);
    cout<<str[n%10]<<" ";
}

int main(){
    int n;
    cout<<"enter number ";
    cin>>n;

    string str[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

    cout<<"ans is ";
    printNum(n,str);

    return 0;

}