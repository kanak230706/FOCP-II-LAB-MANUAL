#include <iostream>
using namespace std;
void fun(int val) {
    val +=10;
    cout<<val;
}
int main(){
int a=5;
 fun(a); 
 cout << a;
 return 0;
}