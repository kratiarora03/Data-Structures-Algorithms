#include <iostream>
using namespace std;

int main(){
    int a = 10 ; 
   // cout << a << endl ; 

    //creation of the pointer 
    int* ptr = &a;
   // cout << ptr << endl ; 
    //cout << " Address of variable is " << *ptr << endl;
    // cout << a << endl;
    // cout << &a << endl;
    // cout << a << endl;
    // cout << ptr << endl;
    // cout << *ptr << endl;
    // cout << &ptr << endl;
    // cout << (*ptr)++ << endl;
    // cout << ++(*ptr) << endl;

    char ch[50] = "love";
    char *cptr = ch;

    cout << ch << endl;
    cout << &ch << endl;
    cout << ch[0] << endl;
    cout << &cptr << endl;
    cout << *cptr << endl;
    cout << cptr << endl;



}