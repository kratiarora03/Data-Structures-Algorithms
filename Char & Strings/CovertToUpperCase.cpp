#include <iostream>

using namespace std;

void ConvertToUpperCase(char ch[], int n){
    int index = 0;
    while ( ch[index] != '\0'){
        char currChar = ch[index];
        if (currChar >= 'a' && currChar <= 'z'){
            ch[index] = currChar - 'a' + 'A';
        }
        index ++;
    }
}

int main(){
    char ch[5];

    cin.getline(ch , 100);
    cout << "Before Conversion : " << ch << endl;
    ConvertToUpperCase(ch,100);
    cout << "After Conversion : " << ch << endl;
}