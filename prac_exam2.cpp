#include <iostream>
#include <fstream>
#include <vector> 

void menu();
bool checkAcctNum(std::string);

class Record {
  std::string acctNum;
  std::string fname;
  std::string lname;
  double balance;
  
  public:
    void write()
    {
   
       // ensures to enter a valid account number
       while (true) {
         std::cout << "Enter your 9-digit Account Number :- ";
         std::cin >> acctNum;
         
         if (checkAcctNum(acctNum))
           break;
         else
           std::cout << "Please enter a valid account number!\n\n";
      
       }
     
       std::cout << "Enter your First Name :- ";
       std::cin >> fname;
     
       std::cout << "Enter your Last Name :- ";
       std::cin >> lname;
     
       std::cout << "Enter your initial balance :- ";
       std::cin >> balance;
     
       std::cout << acctNum << '\n'
                 << fname << '\n' 
                 << lname << '\n'
                 << balance << "\n\n"; 
    }
    
    void read(const std::vector<Record> &records)
    {
      std::string number;
      bool found = false;
      
      std::cout << "Enter the 9-digit Account Number you want to display the details of :- ";
      std::cin >> number; 
      for (auto record : records) {
        if (number == record.acctNum) {
          found = true;
          std::cout << record.acctNum << '\n' << record.fname << '\n'
                    << record.lname << '\n' << record.balance << '\n';
          break;
         }    
        
        if (!found)
          std::cout << "The Account Number " << number << " does not exist\n";
          
      }
     }  
    
    void search(const std::vector<Record> &records)
    {
      std::string number;
      bool found = false;
      
      std::cout << "Enter the 9-digit Account Number you want to search :- ";
      std::cin >> number;
      
      for (auto record : records) {
        if (number == record.acctNum)
          found = true;
      
      if (found)
        std::cout << "The Account is Registered\n\n";
      else
        std::cout << "The Account Number " << number << " does not exist\n\n";
      } 
    }
    
    void edit(std::vector<Record> &records)
    {
     std::string number;
     
     
     std::cout << "Enter the 9-digit Account Number you want to modify :- ";
     std::cin >> number; 
     
     for (int i = 0; i < records.size(); i++) {
       if (number == records[i].acctNum) {
         std::string newAcctNum;
         std::string fname;
         std::string lname;
         double balance;
         
         std::cout << "+===============+\n"
                   << "|Account Details|\n"
                   << "+===============+\n"
                   << "1. Account Number : " << records[i].acctNum << '\n'
                   << "2. First Name : " << records[i].fname << '\n'
                   << "3. Last Name : " << records[i].lname << '\n'
                   << "4. Balance : Php " << records[i].balance << "\n\n";
                   
         std::cout << "Input Data to Modify\n"
                   << "--------------------\n";
         
         std::cout << "Enter New Account Number :- ";
         std::cin >> newAcctNum; 
         records[i].acctNum = newAcctNum; 
         
         
         std::cout << "Edit First Name :- ";
         std::cin >> fname;
         records[i].fname = fname;
         
         
         std::cout << "Edit Last Name :- ";
         std::cin >> lname;
         records[i].lname = lname;
         
         std::cout << "Enter New Balance :- ";
         std::cin >> balance;
         records[i].balance = balance;
   
         break;        
       } 
     } 
    }
    
    void del(std::vector<Record> &records)
    {
      std::string number; 
      
      std::cout << "Enter the Account Number to Deactivate :- ";
      std::cin >> number; 
      
      for (int i = 0; i < records.size(); i++)
        if (number == records[i].acctNum)
          records.erase(records.begin() + i);
      
    }
  
    
};

int main()
{
  Record record;
  std::vector<Record> records;
  int opt;
  char choice; 
  bool flag = false; 
  
  while (!flag) {
    menu();
    
    std::cout << "Enter Option :- ";
    std::cin >> opt; 
    
    switch (opt) {
      case 1:        
        while (choice != 'n' && choice != 'N') {
          record.write();
          records.push_back(record);
          
          std::cout << "Do you want to add more records? (Enter N to quit) :- ";
          std::cin >> choice; 
        }
        break;
       
      case 2:
        while (choice != 'n' && choice != 'N') {
          record.read(records);
          
          std::cout << "Do you want to read other records? (Enter N to quit) :- ";
          std::cin >> choice;
       }
        break;
        
      case 3:
        while (choice != 'n' && choice != 'N') {
          record.search(records);
          
          std::cout << "Do you want to search for other records (Enter N to quit) :- ";
          std::cin >> choice;
        }  
        break;
      case 4:
        while (choice != 'n' && choice != 'N') {
          record.edit(records);
          
          std::cout << "Do you want to edit other records (Enter N to quit) :- ";
          std::cin >> choice; 
       }
       break;
      case 5:
        while (choice != 'n' && choice != 'N') {
          record.del(records);
          
          std::cout << "Do you want to delete other records (Enter N to quit) :- ";
          std::cin >> choice;
        }
        break;
        
      case 6: 
        flag = true;
        std::cout << "\nTerminating Program\n";
        break;
      default: 
        std::cout << "Please enter valid option!\n";
    }
    
    choice = 'y';
  }
  
}

void menu()
{
  std::cout << "+==================+\n"
            << "| ACCOUNT RECORDS  |\n"
            << "+==================|\n"
            << "|1. Write Record   |\n"
            << "|2. Read Record    |\n"
            << "|3. Search         |\n"
            << "|4. Edit Record    |\n"
            << "|5. Delete Record  |\n"
            << "|6. Exit           |\n"
            << "+==================+\n";
              
}

bool checkAcctNum(std::string acct)
{
  int numDigit = 0;
    for (int i = 0; i < acct.size(); i++)
      if (isdigit(acct[i]))
        numDigit++;
    
  return (numDigit == 9) && (acct.size() == 9) ? true : false; 
}

    
