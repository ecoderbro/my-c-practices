#include <iostream>
using namespace std;

class car{
    public:
        string brand;
        int model;
        string type;
    car(string brand, string type, int model){
            brand = brand;
            type = type;
            model = model;
            cout<< brand<< '\n';
            cout<< type<< '\n';
            cout<< model<< '\n';

    };
        void accele(){
                cout<< "\nthe Car is running!";
        };
};
int main(){
    car c1("toyota", "sports", 2023);
    c1.accele();
    return 0;
}