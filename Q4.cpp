#include<iostream>
using namespace std;

int main(){
    int item_no,qty,unit_price;
    int total1,total2,discount;

    cout<<"Enter iTEM No"<<endl;
    cin>>item_no;
    cout<<"Enter Quantity"<<endl;
    cin>>qty;
    cout<<"Enter unit price"<<endl;
    cin>>unit_price;

    total1=qty*unit_price;
    discount=0.2*total1;
    total2=total1-discount;
    
    cout<<"Total Billing Amount is Rupees= "<<total2<<endl;
}