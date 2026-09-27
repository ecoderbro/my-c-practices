#include <iostream>
using namespace std;

class dog{
    public: 
        int age;
        string name;
    
    dog(int x, string y){
        age = x;
        name = y;
        cout<< "This doggy name is: "<< name << " and age: "<< age;
    };
    dog(dog &olddog){
        name = olddog.name;
        age = olddog.age;
        cout<< "\nThis dog is copied from the previous named: "<< name << " age: "<< age;
    };
    void nothome(){
        cout<< '\n'<< name << " is not at home!";
    };
    void athome(){
        cout<< '\n'<< name << " is at home!";
    };
};
int main(){
    dog din(  12 ,"Tommy");

    dog d2 = din;
    din.athome();

    return 0;
}