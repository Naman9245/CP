#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:"<<endl;
    cin>>n;
    switch(n){
        case 1:
        cout<<"bruhhhhhhh yooooo" <<endl;
        continue;// This will cause a compilation error because 'continue' cannot be used in a switch statement
        case 2:
        cout<<"bruhhhhhhh yooooo 2" <<endl;
        continue; // This will also cause a compilation error
        case 3:
        cout<<"bruhhhhhhh yooooo 3" <<endl; 
        break; // Use break to exit the switch statement
        default:    

    }
}
// this code will not compile due to the use of 'continue' in a switch statement.
// 'continue' is used to skip the current iteration of a loop, not within a switch statement.
// To fix this, you can replace 'continue' with 'break' to exit the switch statement properly.
// If you want to repeat the switch statement, you can use a loop structure like 'while' or 'for' around it.
