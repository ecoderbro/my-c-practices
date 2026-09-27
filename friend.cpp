#include <iostream>
using namespace std;
class testing{
    
    
    private:
        double balance;
    public:
        testing(double b){
            balance =  b;
        }
        void display(){
            cout << "Balance is: " << balance << endl;
        }
    };
int main(){
    testing t1(1000.45);
    t1.display();
    return 0;
}