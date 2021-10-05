#include<bits/stdc++.h>
using namespace std;

int factotial(int n){
    if (n<=1)
        return 1;

    int ans=n*factotial(n-1);
        return ans;
}

int main(){
    int n;
    cout<<"enter number ";
    cin>>n;

    cout<<"factrial is "<<factotial(n);

}