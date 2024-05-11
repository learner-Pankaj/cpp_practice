#include<iostream>
#include<string>
using namespace std;

class Account{
    private :
        int accountNumber;
        string name;
        string accountType;
        double balance;

    public:
        
        void setData(int accNumber=0, string holderName="", string accType="", double accBalance=0){
            accountNumber = accNumber;
            name = holderName;
            accountType = accType;
            balance = accBalance;
        }

        int getAccNum(){
            return accountNumber;
        }
        string getName(){
            return name;
        }
        string getAccType(){
            return accountType;
        }
        double getBalance(){
            return balance; 
        }

        void getDetails(){
            cout << "\n=====Account Details=====\n\n";
            cout <<"Account Number :: "<< accountNumber << endl;
            cout <<"Account Holder Name :: "<< name << endl;
            cout <<"Account type :: "<< accountType << endl;
            cout <<"Balance :: "<< balance << endl;
        }

        void deposite(int amount_a){
            balance += amount_a;
            cout << "new Balance is -> " << balance;
        }

        void withdrawAmount(int withdraw_a){
            balance -= withdraw_a;
            cout << "Withdrawal amount is " << withdraw_a << endl;
            cout << "New Balance is " << balance << endl; 
        }
};

int main(){

    Account user1;
    user1.setData(123456789, "Pankaj Yadav", "savings", 123456);
    int choice;
    
    do{
        cout << "\nChoose operation to perform.\n";
        cout << "1. Display Details.\n";
        cout << "2. Deposite Amount\n";
        cout << "3. Withdraw money\n";
        cout << "4. Exit Program\n";
        
        cout << "Enter your choice. :: ";
        cin >> choice;
        switch(choice){
            case 1 : 
                cout << "Display Details of the user\n";
                user1.getDetails();
                break;
            case 2:
                int amount;
                cout << "Enter amount you want to deposite :: ";
                cin >> amount;
                user1.deposite(amount);
                cout << "\nAmount deposited successfully\n";
                break;
            case 3:
                int withdra_a;
                cout << "Enter amount you want to withdraw :: ";
                cin >> withdra_a;
                user1.withdrawAmount(withdra_a);
                cout << withdra_a << " withdrawal successfully\n";
                break;
            case 4:
                cout << "Exit program successfully\n";
                break;
            default:
                cout <<"choose correct choice\n";
                break;
        }
    }while(choice!=4);
}
