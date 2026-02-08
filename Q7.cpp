#include<iostream>
using namespace std;

int main(){
    int s1,s2,s3;

    cout<<"Enter Score of 1st PLAYER"<<endl;
    cin>>s1;
    cout<<"Enter Score of 2nd PLAYER"<<endl;
    cin>>s2;
    cout<<"Enter Score of 3rd PLAYER"<<endl;
    cin>>s3;

    if(s1>s2 && s1>s3){
        cout<<"Winner is PLAYER 1"<<endl;
    }
    else if(s2>s1 && s2>s3){
    cout<<"Winner is PLAYER 2"<<endl;
    }
    else if(s3>s1 && s3>s2){
    cout<<"Winner is PLAYER 2"<<endl;
    }

    return 0;
}