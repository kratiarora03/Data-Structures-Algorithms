#include <iostream>
#include <vector>

using namespace std;

void print(const vector<int>& v) {
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void InsertionSort(vector<int>& v) {
    int n = v.size();
    for(int i = 1; i < n; ++i) {
        int key = v[i];
        int j = i - 1;

        
        while(j >= 0 && v[j] > key) {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = key;
    }
}

int main() {
    vector<int> v{5, 10, 0, 59, 2};

    InsertionSort(v);
    print(v);

    return 0;
}

