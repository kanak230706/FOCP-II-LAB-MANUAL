#include<iostream>
using namespace std;
int main(){

    int marks[5];
    float n=0;
    cout<<"Enter marks (out of 100): ";
    for (int i = 0;i < 5; i++){
        cin>>marks[i];
    }
    for(int i=0;i<5;i++){
        n = n+marks[i];
    }
    cout<<"Total = "<<n<<endl;
    cout<<"Percentage = "<<(n/500)*100;
    return 0;
}