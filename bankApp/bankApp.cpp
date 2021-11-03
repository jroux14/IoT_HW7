#include"bankAccount.h"

int main(int argc, char* argv[]){
   bankAccount jackAccount("Jack Smith", 50.0);
   bankAccount jillAccount("Jill Brian", 100.0);

   bankAccount bankArray[3] = { bankAccount("Ralph Kramden", 10.0), bankAccount("Alice Kramden", 20.0), bankAccount("Ed Norton", 30.0) };

   jackAccount.deposit(30.0);
   jillAccount.deposit(30.0);
   jackAccount.withdraw(20.0);
   jillAccount.withdraw(20.0);
   for(int i = 0; i < (sizeof(bankArray)/sizeof(bankArray[0])); i++){
      bankArray[i].deposit(30.0);
      bankArray[i].withdraw(20.0);
      cout << "Name: " << bankArray[i].getName() << " Balance: " << bankArray[i].getBalance() << endl;
   }
   cout << "Name: " << jackAccount.getName() << " Balance: " << jackAccount.getBalance() << endl;
   cout << "Name: " << jillAccount.getName() << " Balance: " << jillAccount.getBalance() << endl;

   return 0;
}
