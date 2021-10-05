#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5]={1,4,5,9,10};
    int n=5;
    for(int i=0;i<=n;i++){
        if(arr[i]<arr[i-1]){
            cout<<"false";
            break;
        }

    }
    cout<<"t";
}