 //wrong ans
 
 #include <bits/stdc++.h>
 using namespace std;

 int main(){
     int n, fib=0, a=1,b=1;
    cout<<"enter number ";
    cin>>n;
    cout<<"1 1 ";

    for(int i=2; i<=n; i++)
    {
        fib=a+b;
        cout<<fib<<" ";
        a=b;
        b=fib;
    }
    
 }