#include<iostream>
using namespace std;

int main(){
    int x,c,f;
    char a;
    cout<<"You are entering weather in celsius or fareinheit,Enter C for Celsius and F for Fareinheit"<<endl;
    cin>>a;
    cout<<"Enter Weather"<<endl;
    cin>>x;
    
    f=((x*9/5)+32);
    c=((x-32)*5/9);
    if(a=='c' || a=='C'){
        cout<<"Weather in Fareinheit is "<<f<<endl; 
    }
    else{
        cout<<"Weather in Celsius is "<<c<<endl;
    }

}