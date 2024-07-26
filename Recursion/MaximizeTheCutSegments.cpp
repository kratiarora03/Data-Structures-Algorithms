#include <iostream>
#include <limits.h>
using namespace std;

int maxCut(int n , int x , int y , int z){
    if(n==0){
        return 0; 
    }
    if(n<0){
        return INT_MIN;
    }

    int opt1 = 1+ maxCut(n-x,x,y,z);
    int opt2 = 1+ maxCut(n-y , x,y,z);
    int opt3 = 1+ maxCut(n-z , x,y,z);

    int final = max(opt1, max(opt2,opt3));
    return final;
}

int main(){
    int n = 7;
    int x = 5;
    int y = 2;
    int z = 1;

    int result = maxCut(n, x, y, z);

    cout << "Maximum number of cuts: " << result << endl;

    return 0;
}