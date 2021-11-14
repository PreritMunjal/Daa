#include <iostream>

using namespace std;

// Function to implement Linear Search
int linearSearch(int arr[], int n, int key) {
    int cmp = 0;
    bool found = false;

    for (int i = 0; i < n; ++i) {
        ++cmp;
        if (arr[i] == key) {
            found = true;
            cout << endl << "Element found in array !";
            break;
        }   
    }

    if (!found)
        cout << endl << "Element NOT found in array !";

    return cmp;
}

// Driver function
int main() {
    #ifndef ONLINE_JUDGE
    // For getting input from input.txt
    freopen("input.txt", "r", stdin);
    
    // For writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
