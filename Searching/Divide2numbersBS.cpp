#include <iostream>
#include <climits> // For INT_MAX

using namespace std;

int getQuotient(int dividend, int divisor) {
    if (dividend == 0) return 0; // Handle division by zero
    
    int s = 1;
    int e = dividend;
    int ans = INT_MAX;
    
    while (s <= e) {
        int mid = s + (e - s) / 2;
        
        if (mid == dividend / divisor) {
            return mid;
        } else if (mid < dividend / divisor) {
            ans = mid;
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    
    return ans;
}

int main() {
    int divisor = 7;
    int dividend = 29; 

    int ans = getQuotient(dividend, divisor);

    cout << ans << endl;
    return 0;
}
