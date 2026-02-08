#include<iostream>
using namespace std;
int main(){
    int empno,salary,salary2;
    float bonus;
    cout<<"Enter No. of employees"<<endl;
    cin>>empno;
     cout<<"Enter Basic Salary"<<endl;
     cin>>salary;
     bonus=0.12*salary;
     salary2=salary+bonus;
     cout<<"The Salary after Bonus is rupees"<<salary2<<endl;
     return 0;

}