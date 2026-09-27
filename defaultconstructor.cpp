#include <iostream>
using namespace std;
class animal
{
    public:
     string name = "mark";
     int age = 10;

    animal()
    {
        cout<< "this is a " << name << " he is " << age << " years old.";
    }
};
int main(){
    animal a1;
    return 0;
}