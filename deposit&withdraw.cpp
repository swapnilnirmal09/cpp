#include<iostream>
using namespace std;
 class bankaccount{
     private: int actno;
            string customername;
            double balance;

     public:   
     bankaccount(){
         cout<<"default"<<endl;
         actno=500;
         customername="naruto";
         balance=45000;
     }    
     bankaccount(int actno,string customername,double balance)
     {
         this->actno=actno;
         this->customername=customername;
         this->balance=balance;
     }
     void showdetails(){
         cout<<"------accont number---"<<actno<<"------customer name----"<<customername<<"------balance----"<<balance<<endl;
     }
     void deposit(double amount)
     {
     balance=balance+amount;
     cout<<"   deposit succsesfull    ";
     }
      void withdraw(double amount)
     {
     balance=balance-amount;
     cout<<"   withdraw succsesfull   ";
     }
     
 };
 int main()
 {
     bankaccount b1;
     b1.showdetails();
     bankaccount b2(201,"swapnil",50000);
     b2.showdetails();
      b2.withdraw(10000);
      b2.deposit(5000);
      b2.showdetails();
      return 0;
 }
 