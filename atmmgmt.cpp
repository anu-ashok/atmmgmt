#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
class Bank {
private:
  string name;
  long long accnumber;
  char type[10];
  long long amount=0;
  long long tot=0;
public:
 void setvalue(){
     cout<<"enter name"<<endl;
     cin.ignore();
     getline(cin, name);
     cout<<"enter account number\n";
     cin>>accnumber;
     cout<<"enter account type\n";
     cin>>type;
     cout<<"enter balance\n";
     cin>>tot;
 }
 void showdata(){
     
     cout<<"name"<<name<<endl;
     cout<<"account number"<<accnumber<<endl;
     cout<<"Account Type"<<type<<endl;
     cout<<"balance"<<tot<<endl;
     
 }
 void deposit(){
     cout<<"enter amount"<<endl;
     cin>>amount;
     
     
     
 }
 void showbal(){
     tot=tot+amount;
     cout<<"total balance"<<tot;
     
 }
 void withdrawl(){
     int a, avail_balance;
     cout<<"enter amount\n";
     cin>>a;
     avail_balance=tot-a;
     cout<<"available balance is"<<avail_balance;
     
 }
 
};

int main(){
    Bank b;
    int choice;
    while(1){
        cout<<"enter coice"<<endl;
        cout << "\t1. Enter name, Account "
             << "number, Account type\n";
        cout << "\t2. Balance Enquiry\n";
        cout << "\t3. Deposit Money\n";
        cout << "\t4. Show Total balance\n";
        cout << "\t5. Withdraw Money\n";
        cout << "\t6. Cancel\n";
        cin >> choice;
        switch(choice){
        case 1:
           b.setvalue();
           break;
        case 2:
          b.showdata();
          break;
        case 3:
          b.deposit();
          break;
        case 4:
          b.showbal();
          break;
        case 5:
          b.withdrawl();
          break;
        case 6:
           exit(1);
           break;
        default: 
          cout<<"INVALID CHOICE"<<endl;
          
          
           
        }
        
        
 
    }
}
