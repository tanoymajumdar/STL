// The phone book program that uses list to organize the records
#include <iostream>
#include <string>
//#include <list>
#include<vector>
using namespace std;

// Define the Record class
class Record{
     public:
          string name;
          int number; 
};

int main(){
     // Create a list of <Record> objects
    //list<Record> phoneBook;
	//list <Record> :: iterator itr;
	vector<Record> phoneBook;
	vector<Record> :: iterator itr;
    string command, name; 
    int number;
    while( cin >> command >> name ){
         if( command == "Add" ){ // Handle the Add command
              cin >> number;
              Record r;
              r.name = name;
              r.number = number;
              phoneBook.push_back(r);
         }else{  // Handle the Search command

              // *** Need to replace this part by using iterator ***
              //for( int i = 0 ; i < names.size() ; i++ ){
                   //if( names.front() == name ){
                        //cout << numbers.front() << endl;
                        //break;
                   //}else{
                        //names.push_back( names.front() );
                        //names.pop_front();
                        //numbers.push_back( numbers.front() );
                        //numbers.pop_front();
                   //}
		for (itr=phoneBook.begin(); itr != phoneBook.end(); itr++){
			if ((*itr).name == name){
				cout<< (*itr).number << endl;}
              } // *** End of for loop ***


         }  // End of command "Search"
     }   // End of while loop 
} // End of main()

