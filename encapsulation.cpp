#include<iostream>
using namespace std;
class Student
{
private:
    int rollno;
    string name;
public:
Student(int r, string n)
{
    rollno = r;
    name= n;
    cout<<"Student Object created"<<endl;
}
void display()
{
    cout<<"Roll No:"<<rollno<<endl;
    cout<<"Name:"<<name<<endl;
}
~Student()
{
    cout<<"Student Object destroyed"<<endl;
}
};
int main()
{
    Student s1(101,"Arun");
    s1.display();
    return 0;
}