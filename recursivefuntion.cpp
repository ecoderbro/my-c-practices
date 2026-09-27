//what is recursive funtion?
// IN recursive funtion we call the funtion inside it's own funtion for several times to get the required input

#include <iostream>
using namespace std;

int sum(int num)
{
    if(num!=0)
    {
        return num+sum(num-1); //here the funtion called itself
    }
    else 
    {
        return num;
    }
}

int main()
{

}