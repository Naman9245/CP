//find the maximun and minimum element from the array?


#include<iostream>
#include<climits>
using namespace std;
int getMax(int arr[],int n){
    int max=INT_MIN;
    for(int i=1;i<=n;i++){
        if(arr[i]>max){
            max=arr[i];
        }

    }
    return max;




}
int getMin(int arr[],int n){
    int min=INT_MAX;
    for(int i=1;i<=n;i++){
        if(arr[i]<min){
            min=arr[i];
        }

    }
    return min;


}


    




int main(){
    int size;
    int num[100];
    cout<<"enter a number till which you want to find the maximun and minimum element:"<<endl;
    cin>>size;
    for(int i=1;i<=size;i++){
        cout<<"Enter a "<<i<<"number:"<<endl;
        cin>>num[i];
    }
    cout<<"The maximum element of the arry:"<<getMax(num,size)<<endl;
    cout<<"The minimum element of the arry:"<<getMin(num,size)<<endl;




}