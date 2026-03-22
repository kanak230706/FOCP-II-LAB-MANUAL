#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter matrix size: ";
    cin>>n;
    int a[n][n], sum=0;
    cout<<"Enter matrix elements:\n";
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++) {
            cin>>a[i][j];
            if(i==j) sum+=a[i][j];
        }
    cout<<"Diagonal Sum: "<<sum;
}
