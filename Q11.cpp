//q11
#include<iostream>
using namespace std;
int main(){
    float qty,unit_price;
    float total1=0, total2;
    float discount;
    char choice;
    do{
        cout<<"Enter unit price"<<endl;
        cin>>unit_price;
        cout<<"Enter quantity"<<endl;
        cin>>qty;
        total1+=qty*unit_price;
    
    }
    while(choice=='y'|| choice=='Y');
    if(total1<=1000){
        cout<<"Total amount rupees"<<total1<<endl;
    }
    else if(total1>1000){
        discount=0.1*total1;
        total2=total1-discount;
        cout<<"Total Amount rupees"<<total2<<endl;
    }
    return 0;
}