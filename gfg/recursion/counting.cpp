#include<bits/stdc++.h>
using namespace std;
void getCounting(int n) {
//Base Condition
    if(n<=0)
        return ;

//subproblem or recursive call
cout<<n<<endl;
    getCounting(n-1);
        
//Think, How to print the ascending counting ??
}

int main() {
    int n;
    cout<<"please enter "<<endl;
    cin>>n;

    cout<<"counting "<<endl;

    getCounting(n);
}