#include <iostream>
#include <cmath>

using namespace std;

// Newton formulasyn qoldanu arqyly sannyn nubirin anyqtau
double sqrtNewton(double x) {
    double daldik = 0.0001; // esepteu daldigi
    double s = x; // bastapqy jaqyndatu
    while (abs(s - x/s) > daldik) {
        s = (s + x/s) / 2.0; // Newton formulasy
    }
    return s;
}

// Qoldanu
int main() {
    double x;
    cout << "N: ";
    cin >> x;
    double sqrt_x = sqrtNewton(x);
    cout << "Sqrt(" << x << ") = " << sqrt_x << endl;
    return 0;
}
