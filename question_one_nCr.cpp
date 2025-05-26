#include<iostream>
using namespace std;
int factorial(int n){
    
    int fact =1;
    for (int i=1;i<=n;i++){
        fact=fact*i;
        
    }
    return fact;
    
}
int nCr(int n,int r){
    int numerator=factorial(n);
    int denominator =factorial(r) *factorial(n-r);
    int answer=numerator/denominator;
    return answer;
    
    
    
}
int main(){
    int ans=nCr(8,2);
    cout<<"nCr would be :"<<ans<<endl;
    
}
