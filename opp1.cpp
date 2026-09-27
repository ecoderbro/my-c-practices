#include <iostream>
using namespace std;

class Human{

    public:

        int age;
        string name;
        string occupation;
    void eat(){
        cout<< "He is eating";
    };
    void sleep(){
        cout<< "He is sleeping";
    };
    void walk(){
        cout<< "He is walking";
    };

};
int main(){
    Human h1;
    h1.age = 12;
    h1.name = "abdullah";
    h1.occupation = "malik";

    Human h2;
    h2.age = 34;
    h2.name = "Ehaab";
    h2.occupation = "Qureahi";
    
    Human h3;
    h3.age = 90;
    h3.name = "ab";
    h3.occupation = "jutt";
    
    cout<< "1st human name\n";
    cout << h1.age<< '\n';
    cout << h1.name<< '\n';
    cout << h1.occupation<< '\n';
    h1.eat();
    cout<< "\n2nd human name\n";
    cout << h2.age<< '\n';
    cout << h2.name<< '\n';
    cout << h2.occupation<< '\n';
    cout<< "3rd human name\n";
    cout << h3.age<< '\n';
    cout << h3.name<< '\n';
    cout << h3.occupation<< '\n';

 return 0;
}