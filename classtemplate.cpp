
#include <iostream>
using namespace std;
template <typename T1, typename T2>

class Pair{
    public:
    T1 first;
    T2 second;
    Pair (T1 a, T2 b){
        first = a;
        second = b;
    }
    void display(){
        cout << "First: " << first << endl;
        cout << "Second: " << second << endl;
    }
};
int main(){
    Pair p1("Ali", 1000.45);
    p1.display();
    Pair p2(1, "One");
    p2.display();
    return 0;
}
// class templates in C++ allow us to create a blueprint for a class that can work with any data type. 
// In this code, we have defined a class template Pair that takes two type parameters T1 and T2.
// The class has two member variables, first and second, which can be of any type specified when creating an object of the Pair class.
// The display function is used to print the values of first and second. In the main function,
// we create two objects of the Pair class with different data types and call the display function to show their values.
