 #include <bits/stdc++.h>
 using namespace std;

 /*int lcm(int a, int b){
     int res=max(a,b);
     while(true){

        if(res%a==0 && res%b==0)
            cout<<"Lcm is "<<res;
            return res;
        res++;
     }
     cout<<res;
     return res;
 }*/

 //using eulid
 int gcd(int a, int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
 }
int lcm(int a, int b){
    int c= (a*b)/gcd(a,b);
    cout<<"lcm is "<<c;

}
 int main(){
     int a, b;
    cout<<"enter a and b";
    cin>>a>>b;
    lcm(a,b);
 }