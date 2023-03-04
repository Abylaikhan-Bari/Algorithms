#include <iostream>
using namespace std;

int main() {
    int n, n1 = 0, n2 = 1, kelesi = 0;

    cout << "N: ";
    cin >> n;

    cout << "Fibonacci: ";

    for (int i = 1; i <= n; ++i) {
        if(i == 1) {
            cout << n1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << n2 << ", ";
            continue;
        }
        kelesi = n1 + n2;
        n1 = n2;
        n2 = kelesi;
        
        cout << kelesi << ", ";
    }
    return 0;
}