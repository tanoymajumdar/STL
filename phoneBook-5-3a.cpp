#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

// Define the class Record 
class Record{
     public:
         string name;
         int number;    
};

// Declare the compare function for Record objects
bool compare(const Record &, const Record &);
// Declare the print function for printing vector of <Record> objects
void print( const vector<Record> & );

int main(){
     // Create a vector of <Record>
     vector<Record> phoneBook;
     Record r;  string command;
     while (cin >> command){
          if (command == "Add"){  // Handle Add command
               cin >> r.name >> r.number;
               phoneBook.push_back( r );
          } else if (command == "Display"){  // Handle Display command
                // Sort the Records in phoneBook first 
                sort( phoneBook.begin(), phoneBook.end() , compare);
                // Then call print to print the Records in phoneBook
                print (phoneBook);
          }
     }
     return 0;
}

// Task 1. Build the compare() function.
bool compare (const Record & a , const Record & b){
		return a.name > b.name;}


// Task 2. Build the print() function.
void print ( const vector<Record> & v){
	vector <Record> :: const_iterator itr;
	for (itr = v.begin(); itr != v.end(); itr++){
		cout << (*itr).name << " " << (*itr).number << endl;}
	}






