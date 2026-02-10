#include<iostream>
using namespace std;
int sum(int,int);
float sum(float,float);
double sum(double,double);
int main(){
    cout<<sum(5,10)<<endl;
    cout<<sum(5.28,10.28)<<endl;
    cout<<sum(5.2869,10.2854)<<endl;
    return 0;
}
int sum(int a,int b){
   return a+b;
}
float sum(float c,float d){
    return c+d;
}
double sum(double x,double y){
    return x+y;
}