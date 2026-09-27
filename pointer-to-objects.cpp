/*key concepts:
    passing objects as asgruments funtions
    returning objects from funtions
    potinter to objects */


    /*
    here i am gonna create a complex number class and then i will add 2 complex numbers 
    complex number has a real part and a imaginary part;
    */

#include <iostream>
using namespace std;
class complexnumebr
{
    private:
        int real;
        float imajinary;
    public:
        complexnumebr()
        {

        }
        complexnumebr(int r, int i)
        {
            real = r;
            imajinary = i;
        }
        void display()
        {
            cout<< "complex number:"<< real << " + "<< imajinary<< "i"<< endl;
        }
        int getrealpart(){
            return real;
        }
        int getimaginarypart(){
            return imajinary;
        }
};
complexnumebr add2num(complexnumebr n1, complexnumebr n2) //passing objects as parameters
{
    int r;
    float i;
    r = n1.getrealpart() + n2.getrealpart();
    i = n1.getimaginarypart()+ n2.getimaginarypart();
    complexnumebr temp(r, i);
    return temp; //returning the objects from funtion
}
int main(){
    complexnumebr comp1(2,3), comp2(3, 5), comp3;
    comp1.display();
    comp2.display();
    comp3 = add2num(comp1, comp2);
    comp3.display();


    cout<< "pointer to object"<< endl;
    complexnumebr *ptr1;
    ptr1 = &comp3;
    ptr1 -> display();
    return 0;
}