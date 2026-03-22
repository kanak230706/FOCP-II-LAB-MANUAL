/*#include <iostream>
using namespace std;
class BankAccount{
    string accountHolderName;
    int accountNumber;
    double balance;
    public:
    void inputDetails();
	void displayDetails();
	void deposit(double amount);
	void withdraw(double amount);

};
void BankAccount:: inputDetails(){
    cout<<"enter account number: ";
    cin>>accountNumber;
    cout<<"\n enter accountHolderName: ";
    cin.ignore();
    getline(cin,accountHolderName);
    cout<<"\n enter balance:";
    cin>>balance;
}
void BankAccount::deposit(double amount){
    balance+=amount;
    cout<<"\n amount deposited \n balance = "<<balance;
}
void BankAccount::withdraw(double amount){
    if(amount > balance)
    cout<<"\n Denied .. insufficient balance = "<<balance;
    else {
        ( balance-=amount);
    cout<<"\n amount withdraw \n balance = "<<balance;
    }

}
int main()
{
    BankAccount ac1;
    ac1.inputDetails();
    ac1.displayDetails();
    char choice;
    
    return 0;
}*/

#include <iostream>
using namespace std;

class BankAccount{
    string accountHolderName;
    int accountNumber;
    double balance;
public:
    void inputDetails();
    void displayDetails(); // was declared, must define
    void deposit(double amount);
    void withdraw(double amount);
};

// Input function
void BankAccount::inputDetails(){
    cout << "Enter account number: ";
    cin >> accountNumber;
    cout << "Enter account holder name: ";
    cin.ignore(); // to ignore leftover newline
    getline(cin, accountHolderName);
    cout << "Enter balance: ";
    cin >> balance;
}

// Display function (was missing!)
void BankAccount::displayDetails(){
    cout << "\nAccount Number: " << accountNumber;
    cout << "\nAccount Holder: " << accountHolderName;
    cout << "\nBalance: " << balance << endl;
}

// Deposit function
void BankAccount::deposit(double amount){
    balance += amount;
    cout << "\nAmount deposited\nBalance = " << balance << endl;
}

// Withdraw function
void BankAccount::withdraw(double amount){
    if(amount > balance)
        cout << "\nDenied.. insufficient balance = " << balance << endl;
    else {
        balance -= amount;
        cout << "\nAmount withdrawn\nBalance = " << balance << endl;
    }
}

int main(){
    BankAccount ac1;
    ac1.inputDetails();
    ac1.displayDetails();

    // Example deposit and withdraw
    ac1.deposit(500);
    ac1.withdraw(200);

    return 0;
}