#include <iostream>
#include <vector>
#include <algorithm> // For std::sort

using namespace std;

// Function to print a vector of vectors using loops
void printvv(const vector<vector<int>>& v) {
    for (size_t i = 0; i < v.size(); ++i) {
        for (size_t j = 0; j < v[i].size(); ++j) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

// Comparator function for sorting based on the second element of each vector
bool mycomp(const vector<int>& a, const vector<int>& b){
    return a[1] < b[1]; // Compare second element of each vector
}

int main(){
    vector<vector<int>> v;
    int n ; 
    cin >> n;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        vector<int> temp;
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp); // Push the created vector into the vector of vectors
    }
    
    cout << "Before sorting:" << endl;
    printvv(v);
    
    // Sort the vector of vectors based on the second element of each vector
    sort(v.begin(), v.end(), mycomp);
    
    cout << "After sorting:" << endl;
    printvv(v);

    return 0;
}
