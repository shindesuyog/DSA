#include <iostream>
using namespace std;
int numOfJump(int n){
    if(n<=-1)
        return 0;
    if(n==0)
        return 1;
    if(n==1)
        return 1;
    
    int ans = numOfJump(n-1)+numOfJump(n-2)+numOfJump(n-3);
    return ans; 
}


int main(){
    int n;
    cout<<"enter number of stairs ";
    cin>>n;

    cout<<"number of st "<<numOfJump(n);
}