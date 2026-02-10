#include<iostream>
using namespace std;
int result(int,int);
int result(int,int,int);
int result(int,int,int,int);
int result(int,int,int,int,int);
int main(){
cout<<"\n result of 2 subject "<<result(45,58);
cout<<"\n result of 3 subject "<<result(57,68,95);
cout<<"\n result of 4 subject "<<result(78,49,65,77);
cout<<"\n result of 5 subject "<<result(47,69,84,56,75);
return 0;
}
int result(int s1,int s2){
    return (s1+s2);
}
int result(int s1,int s2,int s3){
    return (s1+s2+s3);
}
int result(int s1,int s2,int s3,int s4){
    return (s1+s2+s3+s4);
}
int result(int s1,int s2,int s3,int s4,int s5){
    return (s1+s2+s3+s4+s5);
}
/* ANOTHER WAY OF THE ABOVE CODE
#include<iostream>
using namespace std;

int result(int,int,int=0,int=0,int=0);
int main(){
cout<<"\n result of 2 subject "<<result(45,58);
cout<<"\n result of 3 subject "<<result(57,68,95);
cout<<"\n result of 4 subject "<<result(78,49,65,77);
cout<<"\n result of 5 subject "<<result(47,69,84,56,75);
return 0;
}

int result(int s1,int s2,int s3,int s4,int s5){
    return (s1+s2+s3+s4+s5);
}*/