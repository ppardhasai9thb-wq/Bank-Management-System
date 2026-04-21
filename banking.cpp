#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

class Account {
    int accountno, balance, withdraw, deposit, pin;
    string holderName;

public:
    void add() {
        cout << "Enter your Name " << endl;
        getline(cin,holderName);
        cout << "Enter initial balance amount to deposit " << endl;
        cin >> balance;
        accountno = rand() % 10001;
        cout << "Your Account No is = " << accountno << endl;
        cout << "set PIN " << endl;
        cin >> pin;
        cin.ignore();
    }

    void withdrawal(int a1, string n1, int p1) {
        accountno = a1;
        holderName = n1;
        pin = p1;
        cout << "Enter amount to withdraw " << endl;
        cin >> withdraw;
        if (withdraw >= balance) {
            cout << "Insufficient Balance " << endl;
        } else {
            balance = balance - withdraw;
            cout<<string(60,'=')<<endl;
            cout << "Amount Left = " << balance << endl;
            cout<<string(60,'=')<<endl;
        }
    }

    void deposition(int a2, string n2, int p2) {
        accountno = a2;
        holderName = n2;
        pin = p2;
        cout << "Enter amount to deposit " << endl;
        cin >> deposit;
        balance = balance + deposit;
        cout<<string(60,'=')<<endl;
        cout << "Amount Left = " << balance << endl;
        cout<<string(60,'=')<<endl;
    }

    int getAccountNo() { return accountno; }
    int getPin() { return pin; }
    string getHolderName() { return holderName; }
    int getBalance()
    {
        return balance;
    }
};

int main() {
    srand(time(0));
    vector<Account> bank;
    Account a1;
    int choice, acno, pn, flag = 0 , choice2;
    string acname , choice3;

    while (flag == 0) {
        cout<<string(60,'=')<<endl;
        cout << "------------------ BANK MANAGEMENT SYSTEM ------------------" << endl;
        cout<<string(60,'=')<<endl;
        cout << "1. Create an Account " << endl;
        cout << "2. Withdraw Amount " << endl;
        cout << "3. Deposit Amount " << endl;
        cout << "4. Search / Display bank details " << endl;
        cout << "5. Statement/Reciept " << endl;
        cout << "6. Exit"<<endl;
        cin >> choice;
        cin.ignore();
        if (choice == 1) {
            a1.add();
            bank.push_back(a1);
            cout<<"Account Created Successfully!!"<<endl;
            flag = 0;
        } 
        else if (choice == 2) {
            cout << "Enter Account Number " << endl;
            cin >> acno;
            cin.ignore();
            cout << "Enter Account Holder Name " << endl;
            getline(cin,acname);
            cout << "Enter PIN " << endl;
            cin >> pn;
            cin.ignore();
            for (int i = 0; i < bank.size(); i++) {
                if (bank[i].getAccountNo() == acno) {
                    if (bank[i].getHolderName() == acname) {
                        if (bank[i].getPin() == pn) {
                            cout << "Account Found " << endl;
                            cout << "Authentication Successful " << endl;
                            bank[i].withdrawal(acno, acname, pn);
                            flag=0;
                            break;
                        }
                    }
                }
                
                if (bank[i].getAccountNo() != acno) {
                    flag = 4;
                }
                if (bank[i].getHolderName() != acname) {
                    flag = 3;
                }
                if (bank[i].getPin() != pn) {
                    flag = 2;
                }
            }

            if (flag == 4)
            {       cout << "Invalid Account Number " << endl; 
                    cout<<"Want To Try Again? (Y/n)"<<endl;
                    getline(cin,choice3);
                    if(choice3=="Y"||choice3=="y")
                    {
                        flag=0;
                    }
                    else if( choice3=="N"||choice3=="n")
                    {
                        cout<<"Goodbye!!!"<<endl;
                        flag=1;
                    }
                    else
                    {
                        cout<<"Invalid Input"<<endl;
                    }
            }
            if (flag == 3)
            {
                    cout << "Invalid Holder Name " << endl; 
                    cout<<"Want To Try Again? (Y/n)"<<endl;
                    getline(cin,choice3);
                    if(choice3=="Y"||choice3=="y")
                    {
                        flag=0;
                    }
                    else if( choice3=="N"||choice3=="n")
                    {
                        cout<<"Goodbye!!!"<<endl;
                        flag=1;
                    }
                    else
                    {
                        cout<<"Invalid Input"<<endl;
                    }
            }
            if (flag == 2)
            {
                    cout << "Wrong PIN " << endl; 
                    cout<<"Want To Try Again? (Y/n)"<<endl;
                    getline(cin,choice3);
                    if(choice3=="Y"||choice3=="y")
                    {
                        flag=0;
                    }
                    else if( choice3=="N"||choice3=="n")
                    {
                        cout<<"Goodbye!!!"<<endl;
                        flag=1;
                    }
                    else
                    {
                        cout<<"Invalid Input"<<endl;
                    }
            }


        }
        else if (choice == 3) {
            cout << "Enter Account Number " << endl;
            cin >> acno;
            cin.ignore();
            cout << "Enter Account Holder Name " << endl;
            getline(cin,acname);
            cout << "Enter PIN " << endl;
            cin >> pn;
            cin.ignore();
            for (int i = 0; i < bank.size(); i++) {
                if (bank[i].getAccountNo() == acno) {
                    if (bank[i].getHolderName() == acname) {
                        if (bank[i].getPin() == pn) {
                            cout << "Account Found " << endl;
                            cout << "Authentication Successful " << endl;
                            bank[i].deposition(acno, acname, pn);
                            flag=0;
                            break;
                        }
                    }
                }
                
                if (bank[i].getAccountNo() != acno) {
                    flag = 4;
                }
                if (bank[i].getHolderName() != acname) {
                    flag = 3;
                }
                if (bank[i].getPin() != pn) {
                    flag = 2;
                }
            }

            if (flag == 4) 
            {       cout << "Invalid Account Number " << endl; 
                    cout<<"Want To Try Again? (Y/n)"<<endl;
                    getline(cin,choice3);
                    if(choice3=="Y"||choice3=="y")
                    {
                        flag=0;
                    }
                    else if( choice3=="N"||choice3=="n")
                    {
                        cout<<"Goodbye!!!"<<endl;
                        flag=1;
                    }
                    else
                    {
                        cout<<"Invalid Input"<<endl;
                    }
            }
            if (flag == 3) 
            {       cout << "Invalid Holder Name " << endl; 
                    cout<<"Want To Try Again? (Y/n)"<<endl;
                    getline(cin,choice3);
                    if(choice3=="Y"||choice3=="y")
                    {
                        flag=0;
                    }
                    else if( choice3=="N"||choice3=="n")
                    {
                        cout<<"Goodbye!!!"<<endl;
                        flag=1;
                    }
                    else
                    {
                        cout<<"Invalid Input"<<endl;
                    }
            }
            if (flag == 2)
            { 
                    cout << "Wrong PIN " << endl; 
                    cout<<"Want To Try Again? (Y/n)"<<endl;
                    getline(cin,choice3);
                    if(choice3=="Y"||choice3=="y")
                    {
                        flag=0;
                    }
                    else if( choice3=="N"||choice3=="n")
                    {
                        cout<<"Goodbye!!!"<<endl;
                        flag=1;
                    }
                    else
                    {
                        cout<<"Invalid Input"<<endl;
                    }
            }
            

        }
        else if (choice==4)
        {
            cout<<"Enter Account Number or Name To Search"<<endl;
            cout<<"1. Account  Number"<<endl;
            cout<<"2. Holder Name"<<endl;
            cin>>choice2;
            cin.ignore();
            if(choice2==1)
            {
            cout << "Enter Account Number " << endl;
            cin >> acno;
            cin.ignore();
                for(int j=0;j<bank.size();j++)
                {
                    if(bank[j].getAccountNo()==acno)
                    {
                        cout<<"Account Found"<<endl;
                        cout << "Enter PIN " << endl;
                        cin >> pn;
                        cin.ignore();
                        if(pn==bank[j].getPin())
                        {
                            cout<<string(60,'=')<<endl;
                            cout<<"Name = "<<bank[j].getHolderName()<<endl;
                            cout<<"Account Number = "<<bank[j].getAccountNo()<<endl;
                            cout<<"Balance = "<<bank[j].getBalance();
                            cout<<string(60,'=')<<endl;
                            break;
                        }
                        
                    }
                    if(bank[j].getAccountNo()!=acno)
                    {
                        flag=5;
                    }
                }
                if(flag==5)
                {
                    cout<<"Account Not Found"<<endl;
                    cout<<"Want To Try Again? (Y/n)"<<endl;
                    getline(cin,choice3);
                    if(choice3=="Y"||choice3=="y")
                    {
                        flag=0;
                    }
                    else if( choice3=="N"||choice3=="n")
                    {
                        cout<<"Goodbye!!!"<<endl;
                        flag=1;
                    }
                    else
                    {
                        cout<<"Invalid Input"<<endl;
                    }
                }
                
            }
            if(choice2==2)
            {
            cout << "Enter Account Holder Name " << endl;
            getline(cin,acname);
                for(int j=0;j<bank.size();j++)
                {
                    if(bank[j].getHolderName()==acname)
                    {
                        cout<<"Holder Name Found"<<endl;
                        cout << "Enter PIN " << endl;
                        cin >> pn;
                        cin.ignore();
                        if(pn==bank[j].getPin())
                        {
                            cout<<string(60,'=')<<endl;
                            cout<<"Name = "<<bank[j].getHolderName()<<endl;
                            cout<<"Account Number = "<<bank[j].getAccountNo()<<endl;
                            cout<<"Balance = "<<bank[j].getBalance()<<endl;
                            cout<<string(60,'=')<<endl;
                            flag=0;
                            break;
                        }
                        
                    }
                    if(bank[j].getHolderName()!=acname)
                    {
                        flag=6;
                    }
                }
                if(flag==6)
                {
                    cout<<"Account Not Found"<<endl;
                    cout<<"Want To Try Again? (Y/n)"<<endl;
                    getline(cin,choice3);
                    if(choice3=="Y"||choice3=="y")
                    {
                        flag=0;
                    }
                    else if( choice3=="N"||choice3=="n")
                    {
                        cout<<"Goodbye!!!"<<endl;
                        flag=1;
                    }
                    else
                    {
                        cout<<"Invalid Input"<<endl;
                    }
                }
                
            }
        }
        else if (choice==5)
        {
            ofstream out("sample.txt");
            cout << "Enter Account Number " << endl;
            cin >> acno;
            cin.ignore();
            cout << "Enter Account Holder Name " << endl;
            getline(cin,acname);
            for(int k=0;k<bank.size();k++)
            {
                if(bank[k].getAccountNo()==acno)
                {
                    if(bank[k].getHolderName()==acname)
                    {
                        cout<<"Account Found"<<endl;
                        cout<<"Enter PIN"<<endl;
                        cin>>pn;
                        cin.ignore();
                        if(pn==bank[k].getPin())
                        {
                            out<<string(60,'=')<<endl;
                            out<<"------MINI STATEMENT--------"<<endl;
                            out<<string(60,'=')<<endl;
                            out<<"Name:- "<<bank[k].getHolderName()<<endl;
                            out<<"Account Number:- "<<bank[k].getAccountNo()<<endl;
                            out<<"Balance:- "<<bank[k].getBalance()<<endl;
                            cout<<"Detailed Got Saved In \"sample.txt\" Successfully!!!"<<endl;
                            flag=0;
                            break;
                        }
                        if(pn!=bank[k].getPin())
                        {
                            flag=7;
                        }
                    }
                }
            }
        }
        else
        {
            cout<<"Goodbye!!"<<endl;
            flag=1;
        }
    }
    return 0;
}