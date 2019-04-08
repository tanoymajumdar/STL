#include <iostream>
#include <string>
#include <map>
#include<vector>

using namespace std;
int main(){
     map<string,vector<int> > phoneBook;
     string command, name; 
     int number;
     while( cin >> command >> name ){
         if( command=="Add" ){ // Handle the Add command

              cin >> number;
              phoneBook[name].push_back(number);

         }else if (command == "Search"){ // Handle the Search command
	
              if( phoneBook[name].size()>0 ){
                   vector<int>::iterator itr;
	for (itr=phoneBook[name].begin();itr!=phoneBook[name].end();itr++)
          {
		cout<<"\t"<<*itr<<endl;
          }
              }else
                   cout << "Record not found!" << endl;
	
         }else if (command == "Remove"){ // Handle the Remove command

             phoneBook.erase(name); /* ONE LINE OF CODE: Add your code here to remove name */


         } // End of Remove command
    } // End of while loop
} // End of the main function

