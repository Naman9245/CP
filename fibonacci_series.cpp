#include<iostream>
using namespace std;
int fibnonacci(int n){
    if (n <= 1) {
        return n; // Base case: return n if it's 0 or 1
    }
    return fibnonacci(n - 1) + fibnonacci(n - 2); // Recursive case: sum of the two preceding numbers
}
int main() {
    int n = 10; // Example input
    cout << "Fibonacci series up to " << n << " terms:" << endl;
    for (int i = 0; i < n; i++) {
        cout << fibnonacci(i) << " "; // Print Fibonacci numbers
    }
    cout << endl;
    return 0; // Indicate successful completion
}