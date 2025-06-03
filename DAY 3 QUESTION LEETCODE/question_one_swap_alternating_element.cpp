#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
    
}

void swapAlternating(int arr[],int n){
    for(int i=0;i<n;i+=2){
        swap(arr[i],arr[i+1]);
            
        
    }
    cout<<endl;
    
}



int main(){
    int arr[6]={1,2,3,4,5,6};
    
    printArray(arr,6);
    swapAlternating(arr,6);
    printArray(arr,6);
    
    
    
    
    
}