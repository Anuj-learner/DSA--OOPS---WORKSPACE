#include <iostream> 
using namespace std ; 

//check for string is empty or not using 
//  basic to class type coversion  

// class String
// {
//     public : 
//     string STR ; 

//     String(string str) 
//     {
//         this->STR = str ; 
//     }  

//     bool isEmpty() 
//     {
//         return !STR.empty() ; //return true ; 
//     }

//     void displayName() {
//         cout << "Name: " <<  STR << endl ; 
//     } 

// } ; 

// int main() 
// {
//     string name = "john doe" ; 
    
//     String obj  = name ;  
    
//     if(obj.isEmpty()) 
//     {
//         cout << "valid"  << endl ;
//         obj.displayName() ;
//     }
//     else{
//         cout << "invalid" ;
//     }
// }
 





//prblm 
// #include <iomanip>

// class Money{

//      int dollars , cents ;  

//     public : 
   

// //constructor
//     Money(int totalCents = 0)
//     {

// dollars = totalCents/ 100 ; 
// cents = totalCents % 100 ; 


// }


// //overlaoding opert to add two objects
// Money operator+(const Money& m) 
// { 

//  Money temp ; 

//  temp  =  (dollars * 100 + cents) + (m.dollars * 100 + m.cents); 
//  return temp ;

// }

// void display() 
// {
//     cout << "$" <<dollars <<"."<<setw(2) << setfill('0')<<cents << endl ;
// }

// } ; 

// int main() 
// {
//     int amount1 , amount2 ; 

//       cout << "Enter the first amount in cents: ";
//     cin >> amount1;

//     cout << "Enter the second amount in cents: ";
//     cin >> amount2; 


//     //type conversion to class 
//     Money m1 = amount1 ; 
//     Money m2 = amount2 ; 
 
//   m1.display();
//     m2.display();
 

//     Money m3 ; 
//     m3 = m2 + m1 ; 

//         m3.display();

// } 






//Inheritance prblm 


// class Account {

//     private : 
//     int balance ;

//     public : 
//     Account(int bal) 
//     {
//         balance = bal ;
//     }

//     //getter 
//     int getBalance() const{
//         return balance;
//     } 

//     //setter 
//     int setBalance(int bal) {
//         balance = bal ; 
//         return balance ;
//     }


// } ; 

// class SavingsAccount : public Account {
//     public : 

//     SavingsAccount(int bal) : Account(bal){} ; 

// void displayIntial(){
//     cout << "Balance after initial deposit: " <<getBalance() <<endl ;
// } 


// int deposited ;
//     void deposit(int amount_to_add){
//            int new_balance =  getBalance() + amount_to_add ; 
//            setBalance(new_balance);
//        cout << "Balance afer deposit: "<< getBalance() <<endl; 
//     } 

//     // void intialwithdraw(int amount_to_withdraw)
//     // {
//     //  int withdraw = deposited - amount_to_withdraw ; 
//     //  cout << "Balance after withdrawl : " << withdraw <<endl;
//     // } 


//     void withdraw(int amount_to_withdraw)
//     {
//     if(amount_to_withdraw  <= getBalance()) 
//     { 
//         int new_balance = getBalance()- amount_to_withdraw ;
//         setBalance(new_balance); 
//      cout << "Balance after withdrawl : " << getBalance() <<endl;
//     }
//     else{
//         cout << "Insufficient funds." <<endl ;
//     }
//     }

//     // void displayBalanceWithdraw(int bal) {
//     //     cout << "Balance after withdrawal: " << setBalance(bal) ;
//     // }
// } ; 


// int main() 
// {
//     cout << "amounts : " <<endl ;
//     int intil_deposit , deposit  ; 
//     int intil_withdr , withdr ; 

//     cin >>  intil_deposit >> deposit >> intil_withdr >> withdr ;   

//     SavingsAccount obj(intil_deposit) ; 
//     obj.displayIntial() ;

//     obj.deposit(deposit) ; 

//     obj.withdraw(intil_withdr) ; 
//     obj.withdraw(withdr) ;
// }




//multiple inherit . problm 

class ElectronicDevice{
    private: 
    int power ;

    public: 
    ElectronicDevice(int pow) 
    {
        power = pow;
    }

    int getPower() {
        return power ;
    }

    void setPower(int pow) 
    { 
        power = pow   ;
    }
} ; 


class MechanicalDevice{
    private: 
    int torq ;

    public: 
    MechanicalDevice(int tor) 
    {
        torq = tor;
    }

    int getTorq() {
        return torq ;
    }

    void setTorq(int tor) 
    { 
        torq = tor   ;
    }
} ;


class HybridDevice : public ElectronicDevice , public MechanicalDevice 
{

public :
HybridDevice(int pow,int tor) : ElectronicDevice(pow) ,  MechanicalDevice(tor) {} ;
void setAttributes(int pow , int tor)
{
    setPower(pow) ;
    setTorq(tor) ;
}

void displayAttributes() 
{
    cout << "Power: " << getPower() << endl;
    cout << "Torq: " << getTorq() << endl;
}
} ;


int main() 
{
    HybridDevice hd(100,400) ;
    
    hd.displayAttributes() ; 

    hd.setAttributes(500, 200) ; 
     hd.displayAttributes() ; 

     
}