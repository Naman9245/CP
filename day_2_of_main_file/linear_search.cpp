#include<iostream>
using namespace std;
bool search(int arr[],int n,int key){

    

    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return 1;
        }
        else{

            return 0;
        }
    }
}


int main(){
    int arr[10]={34,56,27,20,4,10,21};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=5;
    bool found=search(arr,size,5);


    if(found){
        cout<<key<<" is present in the array"<<endl;

    }
    else{
        cout<<key<<" is not present"<<endl;
    }
    

    
    

}