#include<iostream>
using namespace std;
bool isPrime(int n){
    
    for (int i =2;i<n;i++){
        if (n%i==0){
            return 0; // Not a prime number

        }
        return 1; // Is a prime number

    }


}
int main(){
    int n=8;
    
    if (isPrime(n)){
        cout<<n<<" is a prime number."<<endl;
    } else {
        cout<<n<<" is not a prime number."<<endl;
    }
}