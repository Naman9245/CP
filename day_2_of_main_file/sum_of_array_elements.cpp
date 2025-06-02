#include<iostream>
using namespace std;

int sumElements(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];

    }

    return sum;

}

int main(){

    int arr[10]={1,2,76,-98,56,75,78,54};
    
    int size= sizeof(arr) / sizeof(arr[0]);

    //number of elements = total size of array / size of one element

    

    
    int a = sumElements(arr,size);
    cout<<"Sum of all elements in the following array would be: "<<a;

    

    

}