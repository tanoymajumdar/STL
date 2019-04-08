// The phoneBook program that uses map to organize the data.
#include <iostream>
#include <string>
#include <map>
/* Task 1 : Include the map header */



using namespace std;
class Record{
	public:
		string name;
		int number;};
bool operator<(const Record & a , const Record & b){
return a.name<b.name;}

int main(){
	map <Record, int> phoneBook;
     /*Task 2: Declare one map object named phoneBook here */
     string command;
     Record r;
     while( cin >> command >> r.name ){
          if( command=="Add" ){
               cin >> r.number;
		phoneBook[r]=r.number;
               /* Task 3 Insertion of one new record in phoneBook here */
		

          }else{
               /* Task 4 Searching for the record here */
		if ( phoneBook.count(r) > 0 ) { cout << phoneBook[r] << endl;
		}else { cout<< "name not found"<< endl;}


         }  // End of command "Search"
     }   // End of while loop 
} // End of main()
