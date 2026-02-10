#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
  int no, max;
  cin>>no;      
  max = no;        
for (int i = 2; i <= n; i++) {
        cin>>no;
        if (no>max) {
            max=no;
        }
    }
    cout << "Largest number = " << max;

    return 0;
}
