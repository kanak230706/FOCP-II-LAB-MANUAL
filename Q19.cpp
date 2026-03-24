#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,count=0;
    cout<<"Enter range, from: ";
    cin>>a;
    cout<<"To: ";
    cin>>b;
    for(int i=a; i<=b; i++){
        if(i < 2) continue;
        bool isPrime = true;
        for(int j=2; j<=sqrt(i); j++){
            if(i%j==0){
                isPrime = false;
                break;
            }
        }
        if(isPrime)
            count++;
    }
    cout<<"There are total "<<count<<" prime numbers";

    return 0;
}