// encapsulation 
// binding of data and functions in a single unit
// private 
//1. cannot be accessed outside the class
//2. it cannot be accessed by derived class
// protected
//1. cannot be accessed outside the class
//2. can be accessed by derived class
// getters and setters
// this->refers to the current class object


// bank mini project
#include<iostream>
using namespace std;
class bankaccount{
    private:
        string accountholder;
        double balance;
        int accountnumber;
        int pin;
    
    protected:
        double interestrate;

    public:
        bankaccount(string name, int accno, double bal){
            accountholder = name;
            accountnumber = accno;
            balance = bal;
           
            interestrate = 1.0; // % interest rate
            
        }
        void deposit(double amount){
            if(amount > 0){
                balance += amount;
                cout<<"deposited:"<<amount<<endl;
            }
            else if(amount >= 20000){
                cout<<"deposit limit exceeded"<<endl;
            }
            else{
                cout<<"go satan get some money :"<<endl;
            }
        }
        void widthdraw(double amount){
            if(amount > 0 && amount <= balance){
                balance -= amount;
                cout<<"withdrawn:"<<amount<<endl;
                cout<<"remaining balance:"<<balance<<endl;
            }
            else{
                cout<<"insufficient balance"<<endl;
            }
        }
        void getbalance(int pin ){
            int count = 0;
            int max_attempts = 3;
            while(1){

            if(this->pin==pin){
            cout<<"balance:"<<balance<<endl;
        
            }else{
            printf("incorrect pin\n");
            max_attempts--;
            printf("you have %d attempts left\n", max_attempts);
            if(max_attempts==0){
                cout<<"account locked"<<endl;
                break;
            }
            }


        }
    }
        string getaccountholder(){
            return accountholder;
        }
       int getaccountnumber(){
            return accountnumber;
        }
        void setname(string name){
            accountholder = name;
        }


};
int main(){
    bankaccount b1("Yash", 1234, 20000);
    
    b1.deposit(1000);
    b1.widthdraw(2345);
    int pin;
    cout<<"Enter your pin to check balance: ";
    cin>>pin;
    b1.getbalance(pin);

    
    return 0;
};