#include <iostream>
using namespace std;

class car{
    private:
        bool engine;
        bool rusted;
        string interiror;
    public:
        string color;
        string name;
        int millage;

        void aboutcar(){
            cout<< "Your car color is: "<< color<< endl;
            cout<< "Your car name is: "<< name<< endl;
            cout<< "Your car has run about "<< millage <<" miles"<< endl;
        }

        void carisrunning(){
            cout<< "Your car is running";
        }
        void carisnotrunning(){
            cout<< "Your car is not running";
        }
};

int main(){
    car c1;
    c1.color = "Red";
    c1.name = "Toyota";
    c1.millage = 12002;

    c1.aboutcar();
    c1.carisrunning();
    
    return 0;
}