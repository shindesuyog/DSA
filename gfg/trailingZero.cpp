#include<bits/stdc++.h>
using namespace std;

//brut approach
/*int countzero(int n){
    int fact=1;
    for (int i=1;i<=n;i++ ){
        fact=fact*i;
    }
    cout<<"factorial is "<<fact<<endl;

    int res=0;
    while(fact%10==0){
        res++;
        fact=fact/10;
    }
    cout<<"number of traling zeros "<<res;
    return res;

}
*/
//optimised approach
//we are counting mutiples of 5 to get zeros
int countTrailinngZero(int n){  
    int res=0;
    for(int i=5; i<=n;i=i*5)
        res=res+n/i;
    
    cout<<res;
    return 0;
}

int main(){
    int n=251;
    //countzero(n);
    countTrailinngZero(n);
    return 0;
}