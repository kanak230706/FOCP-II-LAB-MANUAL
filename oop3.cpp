#include <iostream>
using namespace std;
class Candy {
    string color;
    int points;
public:
    void setCandy(string c, int pt) 
    { 
        color=c; points=pt; 
    }
    void displayCandy() 
    { 
        cout << color << " " ;
        cout<< points <<" " << endl; 
    }
};
int main() {
    Candy c1, c2;
    c1.setCandy("Red",10);
    c2.setCandy("Blue",20);
    c1.displayCandy();
    c2.displayCandy();
}
