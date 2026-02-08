#include<iostream>
using namespace std;
int main(){
    int id;
    cout<<"Enter ID"<<endl;
    cin>>id;
    if(id%3==0 && id%5==0 ){
        cout<<"Buzz Fuzz\n";
    }
    else if(id%3==0){
        cout<<"Buzz\n";
    }
    else if(id%5==0){
        cout<<"Fuzz\n";
    }
 return 0;
}
