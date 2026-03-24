#include <iostream>
using namespace std;

int main(){
    int i,j;
    int pattern[5]={1,2,3,4,5};
    for(i=5;i>0;i--){
    for(j=4;j>4-i;j--){
        cout<<pattern[j];
    }
    cout<<endl;
    }
    return 0;
}