//Fibonacci
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "N: "; cin >> n;

    int a[n] = {0, 1};

    cout << a[n - 1] << " ";
    
    for (int i = 2; i <= n; i++){
        a[i] = a[i-1] + a[i-2];
        cout << a[i] << " ";
    }
    

    return 0;
}