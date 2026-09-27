#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    float gpa;

public:
    // Getter functions
    string getName() { return name; }
    int getAge() { return age; }
    float getGPA() { return gpa; }

    // Setter functions
    void setName(string n) { name = n; }
    void setAge(int a) { age = a; }
    void setGPA(float g) { gpa = g; }
};
int main(){
    Student s1, s2;
    s1.setAge(20);
    s1.setName("Ehaab");
    s1.setGPA(3.4);

    cout<< s1.getGPA();
    s1.getName();
    s1.getAge();
    return 0;
}