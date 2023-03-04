//Faktorial
#include <iostream>

using namespace std;

int main(){

    int a;

    cout << "N: "; cin >> a;

    int faktorial = 1;

    for (int i = 1; i <= a; i++){
        faktorial = faktorial * i;
        //cout << faktorial << endl;
    }

    cout << a << " sanynyn " << "faktorialy: " << faktorial;

    return 0;
}