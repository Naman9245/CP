#include<iostream>
using namespace std;
bool setBit(int n,int k){
    // Check if the k-th bit is set in the binary representation of n
    return (n & (1 << k)) != 0; // Returns true if the k-th bit is set, false otherwise
    
}