/*ANOTHER WAY OF THIS CODE IS WRITTEN BELOW
#include<iostream>
using namespace std;
void welcome(void);
void welcome(string);
int main(){
    welcome();
    welcome(" Section C");
    return 0;

}
void welcome(){
    cout<<"\n Welcome Agent";
}
void welcome(string name){
    cout<<"\n Welcome"<<name;
}*/
#include<iostream>
using namespace std;

void welcome(string="Agent", string="");
int main(){
    welcome();
    welcome("kanak");
      welcome("kanak","sharma");
    return 0;

}
void welcome(string fname, string lname){
    cout<<"\n Welcome "<<fname<<lname;
}
