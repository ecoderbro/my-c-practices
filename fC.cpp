#include <iostream>
using namespace std;
class student{
    private:
    string name;
    float marks;
    public:
    student(string n, float m){
        name= n ;
        marks= m;
    }
    friend class teacher;
};
class teacher{
    
    public:
    
    void show(student s){
        cout<< "Name: "<< s.name << endl;
        cout<< "marks: "<< s.marks << endl;
    }

};
int main(){
    student s("jhon kennady", 56.5);
    teacher t;
    t.show(s);
    return 0;
}