#include<iostream>
using namespace std;
int main(){
   int yr;
    cin>>yr;
    if((yr % 400 == 0) || (yr % 4 == 0 && yr % 100 != 0)){
        cout<<"leap year";
    }
    else {
        cout<<"not a leap year";
    }
    return 0;
}