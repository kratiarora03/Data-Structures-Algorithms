#include <iostream>

using namespace std;
void ReplaceChar(char ch[], int n){
    int index = 0;
    while(ch[index] != '\0'){
        char currChar = ch[index];
        if(currChar == '@'){
            ch[index] = ' ';
        }
        index ++;
    }
}

int main(){
    char ch[100];

    cin.getline(ch, 100);
    cout << "before replace: " << ch << endl;
    ReplaceChar(ch, 100);
    cout << "after replace: " << ch << endl;
}