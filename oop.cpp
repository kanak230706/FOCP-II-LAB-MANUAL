#include <iostream>
using namespace std;
class student{
    int rollno; string name; int marks1; int marks2; int marks3;
    int calculateTotal()//getter
    {return (marks1+marks2+marks3);}
    public:
    void inputDetails()//setter
    {
        cout<<"\n enter rollno,name,marks1,marks2,marks3 : ";
        cin>>rollno>>name>>marks1>>marks2>>marks3;
    }
    void displayDetails()//getter
    {
        cout<<"\n name: "<<name<<"\n roll no:"<<rollno;
        cout<<"\n marks1: "<<marks1<<"\n marks2 : "<<marks2<<"\n marks3: "<<marks3;
        cout<<"\n total: "<<calculateTotal();
    }
};
int main()
{
    student s1;//s1 is the object/instance of class student
    s1.inputDetails();
    s1.displayDetails();
    return 0;
}