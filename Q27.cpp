#include<iostream>
using namespace std;
int main(){
    int price[10];
    cout<<"Enter prices: ";
    for (int i=0; i<10; i++){
        cin>>price[i];
    }
    int maxValue = price[0];
    for(int i=1; i<=10; i++){
        if(price[i]>maxValue){
            maxValue = price[i];
        }
    }
    cout<<"Maximum price: "<<maxValue;
    return 0;
}