#include<iostream>
using namespace std;

int main(){
    int marks1,marks2,marks3;
    cout<<"Enter Marks of Student1"<<endl;
    cin>>marks1;
    cout<<"Enter Marks of Student2"<<endl;
    cin>>marks2;
    cout<<"Enter Marks of Student3"<<endl;
    cin>>marks3; 

    float avg=((marks1+marks2+marks3)/3.0);
    cout<<"The Average Marks of these Students="<<avg;

return 0;
}