#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// Define the Record class
class Record{
     public:
          string name;
          int number;      
};

// Declare the operator<() function here
bool operator<( const Record & a , const Record & b ){
return a.name < b.name;}

int main(){
     vector <Record> phoneBook;
     string command;
     while ( cin >> command) {
          if (command == "Add") {
               Record r;                      
               cin >> r.name >> r.number;
               phoneBook.push_back(r);              
          }else if ( command == "Exist" ) {
               Record r;
               cin >> r.name;
               // Task 1. ONE LINE OF CODE: Sort the records in phoneBook
               sort ( phoneBook.begin() , phoneBook.end());
               
               // Task 2. ONE LINE OF CODE: Search if r exists in phoneBook
               bool result = binary_search ( phoneBook.begin() , phoneBook.end() , r);
               
               // Task 3. ONE LINE OF CODE: If r exists, display Exist, otherwise, display Not Exist 
		result ? cout << "Exist" << endl:
			cout<< "Not Exist" << endl;
               
               
                  
          }
     }
}

