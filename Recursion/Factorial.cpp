#include <iostream>
using namespace std;

int factorial(int n ){
    if(n==0 || n==1){
        return 1;
    }

    int recursionAns = factorial(n-1);

    int finalAns = n*recursionAns;
    return finalAns;
}

int main(){
 cout<<factorial(5)<<endl;
}