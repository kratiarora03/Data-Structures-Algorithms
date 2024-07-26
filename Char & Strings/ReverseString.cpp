#include <iostream>

using namespace std;

void reverseString(char ch[], int n){
    int i = 0; 
    int j = n-1;

    while(i<=j){
        swap(ch[i], ch[j]);
        i++;
        j--;
    }
}

int main(){
    char ch[5];

    cin >> ch;
    cout << "Before reversing : " << ch << endl;
    reverseString(ch, 5);
    cout << "After reversing : " << ch << endl;

}