#include <iostream>

using namespace std;
int main(){
    string name ; 
    cin>>name ; 
    //find length of the string 
    cout << "length of string " << name.length() << endl;

    //Check whether the string is empty or not 
    string temp = "";
    cout << " string is empty or not " << temp.empty() << endl ; 
   
    //check character at a particular index 
    cout << "character at  index 0 is : " << name.at(0) << endl;

    //check character at front of the string 
    cout << " character at front of the index " << name.front() << endl;

    //check character at back of the string 
    cout << " character at back of the index " << name.back() << endl;

    // append string 
    string str1 = "krati";
    string str2 = "Arora" ; 

    cout << str1 << endl;
    cout << str2 << endl;

    str1.append(str2);

    cout << str1 << endl;
    cout << str2 << endl;

    //erase something from the string 

    string temp1 = "this is a car";
    temp1.erase(7,2);
    cout << temp1 << endl;

    //insert string 
    string last = "arora" ;
    name.insert(5,last);
    cout << name << endl;

    //push_back
    name.push_back("i");
    cout << name << endl;
}
