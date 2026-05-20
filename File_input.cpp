#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout("kanak.txt");

    fout<<"My name is Kanak sharma"<<endl;
    fout<<"\n 1234 \n hghuds \n asdfghj\n";

    cout<<"Data written to file successfully."<<endl;
}