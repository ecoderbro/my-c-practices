#include <iostream>
using namespace std;

int add(int a , int b){
    return a + b;
}
double add(double a , double b){
    return a + b;
}
int main(){
    cout << add(5, 10) << endl; // Calls the int version of add
    cout << add(5.5, 10.5) << endl; // Calls the double version of add
    return 0;
}
// In this code, we have two functions named add, but they have different parameter types (one takes integers and the other takes doubles).
// This is an example of function overloading in C++. The compiler determines which version of the function to call based on the arguments provided.   