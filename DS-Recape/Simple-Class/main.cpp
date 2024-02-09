#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    string uni = "North South University";
    string full_name;
    int age;
    Student(string name, int age)
    {
        string full_name = name;
        age = age;
        string university = uni;
    }

    void display(){
        cout<<"Full name: "<<full_name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"University: "<<uni<<endl;
    }
};

int main()
{
    // stu_1 = Student("Md Al Amin", 23);

    Student alamin("Md Al Amin", 23);
    alamin.display();
    
}