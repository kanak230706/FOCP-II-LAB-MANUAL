#include <iostream>
using namespace std;
class Rectangle{
    
    int length;
    int width;
    static int count;
    public:
    Rectangle(){
        length=0; width=0; count++;}
        Rectangle(int l, int w)
        {length=l; width=w; count++;}
        void display(){
            cout<<"\n length = "<<length;
            cout<<"\n width = "<<width;
            cout<<"\n no. of objects created = "<<count;
        }

};
int Rectangle::count;

  
int main(){
   Rectangle r1,r2(23,45);
   r1.display();
   r2.display();
  Rectangle r3;
   r3.display();
   return 0;
}