// The phone book program that uses vector to organize data
#include <iostream>
#include <string>
#include <vector>
/* Task 1 : Include the vector header */

using namespace std;
class Record{
public:
	string name;
	int number;};
int main(){

     /*Task 2: Declare vector object here */
	vector <string> names;
	vector <int> numbers;
	vector <Record> phoneBook;
	Record r;
     string command, name; 
     int number;
     while( cin >> command >> name ){
          if( command=="Add" ){
               cin >> number;
               /* Task 3 Insertion here */
		r.name=name;
		r.number=number;
		phoneBook.push_back(r);		


          }else
{ for (int i=0; i< phoneBook.size(); i++)
{if (phoneBook[i].name == name)
	cout<< phoneBook[i].number<<endl;}
 // Handle the search command 
		
               /* Task 4 : Search for the phone number given the name of the record*/



               
          } // End of handling search command
     } // End of while loop
} // End of main function

