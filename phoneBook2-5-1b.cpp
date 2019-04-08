// The phone book program that uses list to organize the records
#include <iostream>
#include <string>
#include <list>
/* Task 1 : Include the list header */


using namespace std;
class Record{
public:
	string name;
	int number;};

int main(){
     /*Task 2: Declare list object here */
	list <int> numbers;
	list <string> names;
	list <Record> phoneBook;


    string command, name; 
    int number;
    while( cin >> command >> name ){
         if( command == "Add" ){
              cin >> number;
               /* Task 3 Insertion here */
		Record r;
		r.name=name;
		r.number=number;
		phoneBook.push_back(r);

      
         }else{ // Handle the search command
              for( int i = 0 ; i < phoneBook.size() ; i++ ){
                   if( phoneBook.front().name == name ){
                        cout << phoneBook.front().number << endl;
                        break;
                   }else{
                        phoneBook.push_back( phoneBook.front() );
                        phoneBook.pop_front();
                        
                   }
              } // End of for loop
         }  // End of command "Search"
     }   // End of while loop 
} // End of main()

