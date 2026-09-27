#include <iostream>
using namespace std;
class test{
    public:
    inline double add(double a){
    return a+a;
}
void display(){
    cout << "This is an inline function example."<< endl;
}
};


int main(){
    test t;
    cout << t.add(5.5) << endl;
    t.display();
    return 0;
}
// In this code, we have defined an inline function add that takes a double as an argument and returns its double.
// The display function is also defined to print a message. In the main function, we create an object of the test class and call the add and display functions.
//The add function will be expanded inline by the compiler, which can improve performance for small functions.