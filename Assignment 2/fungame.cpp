#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int i = 0, j = n - 1;
    while (i < n && j >= 0) {
        if (a[i] > a[j]) {
            cout << "1" << " ";
            j--;
        } else if (a[i] < a[j]) {
            cout << "2" << " ";
            i++;
        }  else
        {
            cout << "0" << " ";
            i++, j--;
        }
        
    }
    return 0;
}