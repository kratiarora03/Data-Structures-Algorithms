#include <iostream>

using namespace std;

int main(){
    //creation
    string name ; 

    cin>>name; //input
    cout<<name<< endl; //output
    cout<< name[0]<< endl; //output of the char at the particular index 

    //using indexes printing the elements on that particular index
    int index = 0;
    while(name[index] != '\0'){
        cout<<"index : "<<index<< " character : " << name[index] << endl;
        index++;
    }

    //checking the value of null at the end of the string 
    cout << "printing index 5 values : "<< name[5] << endl;
    int value = int(name[5]);
    cout<<value<< endl;

}