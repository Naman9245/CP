#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}

void reverseArray(int arr[],int n){
    int start =0;
    int end=n-1;

    while(start<=end){
        swap(arr[start] , arr[end]);//inbuild function to swap;
        start++;
        end--;

    }
    cout<<endl;


}



int main(){
    int arr[6]={1,35,75,46,43,56};
    int arr1[5]={13,46,43,67,89};

    cout<<"aslie elements jo reverse nhi hue arr main: "<<endl;

    printArray(arr,6);


    reverseArray(arr,6);

    cout<<"aslie elements jo reverse nhi hue arr1 main: "<<endl;


    
    printArray(arr1,5);
    
    reverseArray(arr1,5);
    
    
    cout<<"Elements reverse ho chuke hai arr1:"<<endl;

    printArray(arr1,5);

    cout<<"Elements reverse ho chuke hai arr:"<<endl;

    printArray(arr,6);
    
    
    




}