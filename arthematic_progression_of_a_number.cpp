#include<iostream>
using namespace std;
int arthematic_progression(int n){
    int AP=3*n + 7; // Formula for the nth term of an arithmetic progression
    return AP; // Return the nth term
}
int main(){
    int n=3;
    int result = arthematic_progression(n); // Call the function with n=3
    cout << "The " << n << "th term of the arithmetic progression is: " << result << endl; // Output the result

}