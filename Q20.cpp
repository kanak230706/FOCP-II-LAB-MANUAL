#include <iostream>
using namespace std;
int main(){
    int i;
    int pattern[5] = {1,2,3,4,5};
    for(i=0; i<3; i++){
        for(int j=0;j<5;j++){
            cout<<pattern[j];
        }
       cout<<endl;

    }
    
    return 0;
}