#include <iostream>
using namespace std;

void reverse(string&str , int start , int end){
    //base case 
    if(start>=end){
        return;
    }

    swap(str[start],str[end]);

    //recursive call 
    reverse(str, start +1 , end-1);
}

int main(){
    string str = "car";
    int start = 0; 
    int end = str.length()-1;

    reverse(str, start, end);
    cout<<str<<endl;
}