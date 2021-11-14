#include <iostream>
using namespace std;
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
    {
        cout << endl << "Element NOT found in array !";
    }
    return cmp;
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
