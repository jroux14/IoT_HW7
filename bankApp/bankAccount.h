#include<iostream>
#include<string>
using namespace std;

class bankAccount {
   private:
      string customerName;
      int balance;
      void setName(string n);
      void setBalance(float bal);
   public:
      bankAccount(string n, float bal);
      string getName();
      float getBalance();
      void deposit(float dep);
      void withdraw(float draw);
};
