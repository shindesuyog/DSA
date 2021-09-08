#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, rev=0;
    cin>>n;                      //456
    int temp=n;
    while (temp!=0){
        int c =temp%10;          //c is to store last digit of number i.e 456%10 =6, then 6 is stored in c
        rev=rev*10+ c;           //0*10+6    = 6
        temp=temp/10;            //456/10=45
    }
    if(rev==n){
        cout<<"pal";
    }
    else{
        cout<<"not pal";
    }

    return 0;
}

//time complexity is O(n)