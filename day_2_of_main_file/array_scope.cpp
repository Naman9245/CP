//scope of a fuction

//output= ander fuction mai ager array mai kuch change layenge ge toh bahar wale fuction mai bhi change 
//aayega kyuki array ka address jaata haii na ki copy 


#include<iostream>
using namespace std;
void counting(int arr[],int n){
    arr[0]=123;
    
    for(int i=0;i<n;i++){
        
        cout<<arr[i]<<" ";
        
    }
    
    cout<<"inside function:"<<endl;
    
}



int main(){
    int num[4]={1,2,3,4};
    
    counting(num,4);
    
    for(int i=0;i<4;i++){
        cout<<num[i]<<" ";
        
        
    }
    cout<<"Outside fuction:"<<" ";
    
}