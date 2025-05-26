#include<iostream>
using namespace std;
int pow(int base,int power){
    int ans=1; // Initialize result to 1
    
    
    for (int i=1;i<=power;i++){
        
        ans=base*ans;

        
    }
    return ans;
}

int main(){
    int base,power;
    base=2; // Example base
    power=3; // Example power
    
    int result=pow(base,power);
    cout<<"The result of "<<base<<" raised to the power of "<<power<<" is: "<<result<<endl;
    
}
    
    