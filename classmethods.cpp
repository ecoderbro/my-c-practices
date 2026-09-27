#include <iostream>
using namespace std;

class myclass{
    public: 
          void myfunction();
};
void myclass::myfunction(){
    cout<< "Hello World!"<< endl;
}

int main(){
    myclass myobj;
    myobj.myfunction();
    return 0;
}