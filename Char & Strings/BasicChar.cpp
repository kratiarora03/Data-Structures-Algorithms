#include <iostream>

using namespace std;

int main(){
    //creation of char array 
    char ch[5];

    //input
    cin>>ch;

    //printing
    cout << "Printing the value of ch: " << ch << endl;

    //printing using loop 
    for(int i=0; i<=6;i++){
        cout << "at index " << i << " " << ch[i] << endl;
    }
   //printing the value of null char 
   char null[5];
   int value = (int)null;
   cout << value << endl;
}