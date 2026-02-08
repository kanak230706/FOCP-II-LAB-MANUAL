#include<iostream>
using namespace std;
int main(){
    char c;
    cin>>c;
    if(c>='0' && c>='9')
    cout<<"Number";
    else if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    cout<<"Vowel";
   else if((c>='a'&& c<='z')||(c>='A' && c<='Z'))
    cout<<"Consonant";
    else
        cout<<"other";
    
   return 0;
}