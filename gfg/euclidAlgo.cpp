#include <bits/stdc++.h>
using namespace std;
//optimised euclid

int gcd(int a,int b){
    if (b==0){
        cout<<a;
        return a;

    }
    else return gcd(b,a%b);  //recursive call for gcd function again
}
int main(){
    int a, b;
    cout<<"enter a and b";
    cin>>a>>b;
    gcd(a,b);

}