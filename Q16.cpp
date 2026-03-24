#include<iostream>
#include<cmath>
using namespace std;
int main(){
int a,i,b=0;
cout<<"Enter: ";
cin>>a;
if(a<=1){
    cout<<"Not prime";
}
else{
    for(i=2;i<=sqrt(a);i++){
        if(a%i==0){
            b++;
        }
    }
    if(b==0){
    cout<<"Prime";
}
else{
    cout<<"Composite";
}
}
    return 0;
}