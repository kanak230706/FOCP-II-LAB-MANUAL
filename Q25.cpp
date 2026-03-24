#include<iostream>
#include<cmath>
using namespace std;
int main(){
int a,b;
int n=0;
cout<<"From: ";
cin>>a;
cout<<"To: ";
cin>>b;
for(int i=a;i<=b;i++){
    if(i<=1) continue;
  bool isPrime = true;
    for(int j=2;j<=sqrt(i);j++){
    
        if(i%j==0){
           isPrime=false;
           break;
        }
    }
    if(isPrime){
        cout<<i<<endl;
    }
}
    return 0;
}