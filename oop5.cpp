#include <iostream>
using namespace std;
class Block {
    string shape;
    int size;
public:
    void setBlock(string s, int sz) { shape=s; size=sz; }
    void displayBlock() 
    { cout << shape << " " ;
        cout<< size <<" " << endl;}
};
int main() {
    Block b1, b2;
    b1.setBlock("I",4);
    b2.setBlock("Square",2);
    b1.displayBlock();
    b2.displayBlock();
}
