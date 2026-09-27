#include <iostream>
using namespace std;
class Test{
    public:
    Test(string name){
        cout<< "enter your name: ";
        cin>> name;
        cout<< "your name is: " << name << endl;   
    }
    ~Test(){
        cout<< "thank for calling the destructor" << endl;
    }
};
int main(){
    Test t("ali");
    return 0;
}