/*#include<iostream>
using namespace std;
class candy
{
    string color;
    int points;
    public:
    void setCandy(string,int);
    void displayCandy();


};
void candy::setCandy(string c,int p)
{
    color=c;
    points=p;
}
void candy::displayCandy()
{
    cout<<"Color: "<<color<<endl;
    cout<<"Points: "<<points<<endl;
}
int main()
{
    candy c1,c2;
    c1.setCandy("Red",35);
    c2.setCandy("Blue",40);
    c1.displayCandy();
    c2.displayCandy();
    return 0;
}*/

/*#include <iostream>
using namespace std;
class Candy
{
    string color;
    int points;

public:
    Candy();                    //default constructor
    Candy(string clr);          //parameterized constructor
    Candy(string clr, int pts); //parameterized constructor
    void setCandy(string, int);
    void displayCandy();

    void lose2point();
};
Candy::Candy()
{   color = "";
    points = 0;
}
Candy::Candy(string clr)
{  color = clr;
    points = 0;
}
Candy::Candy(string clr, int pts)
{   color = clr;
    points = pts;
}
void Candy::setCandy(string c, int p)
{   color = c;
    points = p;
}
void Candy::displayCandy()
{
  cout << "\n Color: " << color;
    cout << "\n Points: " << points;
}
void Candy::lose2point()
{
    points -= 2;
}
int main()
{ Candy c1, c2("Brown", 32);
    // Candy c1, c2("Blue"); single parameter
    // c1.setCandy("Red", 15);
    // c2.setCandy("Blue", 20);
    c1.displayCandy();
    c2.displayCandy();
    return 0;
}*/


#include <iostream>
using namespace std;
class Candy
{
    string color;
    int points;

public:
    Candy();                    //default constructor
    Candy(string clr);          //parameterized constructor
    Candy(string clr, int pts); //parameterized constructor
    void setCandy(string, int);
    void displayCandy();

    void loose_points();
    void reducespecifiedPoints(int loosePoints);
    void add_points();
    void gained_points(int addPoints);
};
Candy::Candy()
{
    color = "";
    points = 0;
}
Candy::Candy(string clr)
{
    color = clr;
    points = 0;
}
Candy::Candy(string clr, int pts)
{
    color = clr;
    points = pts;
}
void Candy::setCandy(string c, int p)
{
    color = c;
    points = p;
}
void Candy::displayCandy()
{   cout << "\n Color: " << color;
      cout << "\n Points: " << points;
}
void Candy::loose_points()
{  points -= 2;
}
void Candy::reducespecifiedPoints(int loosePoints)
{  points -= loosePoints;
}
void Candy::add_points(){
    points += 2;
}
void Candy::gained_points(int addPoints)
{  points += addPoints;
}
int main()
{
    Candy c1, c2("Brown", 32);
    // Candy c1, c2("Blue"); single parameter
    // c1.setCandy("Red", 15);
    // c2.setCandy("Blue", 20);
    c1.displayCandy();
    c2.displayCandy();
    c1.reducespecifiedPoints(5);
    c2.reducespecifiedPoints(3);
    c1.displayCandy();
    c2.displayCandy();
    return 0;
}