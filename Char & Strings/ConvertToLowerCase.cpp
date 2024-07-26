#include <iostream>

using namespace std;

void ConvertToLowerCase(char ch[], int n){
    int index = 0;
    while ( ch[index] != '\0'){
        char currChar = ch[index];
        if (currChar >= 'A' && currChar <= 'Z'){
            ch[index] = currChar - 'A' + 'a';
        }
        index ++;
    }
}

int main(){
    char ch[5];

    cin.getline(ch , 100);
    cout << "Before Conversion : " << ch << endl;
    ConvertToLowerCase(ch,100);
    cout << "After Conversion : " << ch << endl;
}