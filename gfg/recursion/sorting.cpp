#include<bits/stdc++.h>
using namespace std;

int sorted(vector<int>arr, int index){

    if(index>=arr.size()){
        return true;
    }

    if(arr[index]<arr[index-1])
    return false;

    return sorted(arr,index+1);
}

int main(){
    int n;
    cout<<"enter size ";
    cin>>n;

    vector<int> arr(n);
    cout<<"enter arr";

    for(int i=0;i<=n;i++)
        cin>>arr[i];


    bool answer = sorted(arr,1);
    
    if(answer)
    cout<<"array is sorted"<<endl;
    else    cout<<"arrary is not sorted";

}