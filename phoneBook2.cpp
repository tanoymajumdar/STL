#include <iostream>
#include <vector>
#include <string>
#include<algorithm>
#include<ext/algorithm>
using namespace std;

// Define the Record class
class Record{
     public:
          string name;
          int number;      
};

ostream & operator<<(ostream &, const vector<Record> &);
bool operator<(const Record & a, const Record & b){
return a.name<b.name;
}
bool operator==(const Record & a, const Record & b){
  a.name==b.name;
}
int main(){
     // Define a vector of Record objects
     vector <Record> phoneBook;
     string command;
     while ( cin >> command) {
          if (command == "Add") { // Handle the Add command
                      
               Record r;                      
               cin >> r.name >> r.number;
               phoneBook.push_back(r); 
                            
          }else if( command == "Display"){ // Handle the Display command
             cout<<phoneBook;
                
                
          }else if( command == "Update"){ // Handle the Update command
                Record r;
                cin >> r.name >> r.number;
		replace(phoneBook.begin(), phoneBook.end(), r,r);
 		
		
                
          }
     }
}
ostream & operator<<(ostream & cout, const vector<Record> &v){

vector<Record>::const_iterator itr;
cout<< "The content of phoneBook"<<endl;
for (itr=v.begin();itr!=v.end();itr++)
cout<<(*itr).name<<" "<<(*itr).number<<endl;
return cout;

}
