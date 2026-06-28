#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a = {1, 3, 5, 7};
    vector<int> b = {2, 4, 6, 8};

    vector<int> res;

    int i = 0;
    int j = 0;

    // Merge both sorted arrays
    while (i < a.size() && j < b.size()) {

        if (a[i] <= b[j]) {
            res.push_back(a[i]);
            i++;
        }
        else {
            res.push_back(b[j]);
            j++;
        }
    }

    // Copy remaining elements of first array
    while (i < a.size()) {
        res.push_back(a[i]);
        i++;
    }

    // Copy remaining elements of second array
    while (j < b.size()) {
        res.push_back(b[j]);
        j++;
    }

    // Print merged array
    for (int x : res) {
        cout << x << " ";
    }

    return 0;
}