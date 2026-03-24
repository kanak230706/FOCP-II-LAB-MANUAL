 #include<iostream>
#include<cmath>
using namespace std;
int main(){
 int a,i,j=0;
 cout<<"Enter number: ";
 cin>>a;
 for(i=1;i<a;i++){
    if(a%i==0){
        j=j+i;
    }
 }
 if(j==a){
    cout<<"Perfect Number"<<endl;
 }
 else{
    cout<<"Not perfect number"<<endl;
 }
 int digit=0, temp,n;
 float sum=0;
 temp=a;
  while(temp!=0) {
   digit++;
   temp=temp/10;
  }
  temp=a;
 while(temp!=0){
     n=temp%10;
     sum += pow(n,digit);
     temp=temp/10;
 }
  if(sum==a){
   cout<<"Armstrong number"<<endl;
  }
  else {
   cout<<"Not Armstrong number"<<endl;
  }
    return 0;
}