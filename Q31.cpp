#include<iostream>
using namespace std;
int main(){
    int elements[5];
    int n=0;
    int k=0;
    cout<<"Enter elements: ";
    for(int i=0; i<5; i++){

        cin>>elements[i];
    }
    for(int i=0;i<5;i++){
        if(elements[i]%3==0){
            n = n+1;
        }
        if(elements[i]%5==0){
            k=k+1;
        }
    }
    cout<<n<<" numbers are divisible by 3\n";
    cout<<k<<" numbers are divisible by 5";
    return 0;
}