//NOD, NOK
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "A: "; cin >> a;
    cout << "B: "; cin >> b;

    int max_num = max(a, b);
    int min_num = min(a, b);

    int euob = 0;
    int ekoe = 0;

    for (int i = 1; i <= min_num; i++) {
        int mul = max_num * i;
        if (mul % min_num == 0) {
            ekoe = mul;
            euob = i * min_num;
            break;
        }
    }

    if (euob == 0) {
        euob = min_num;
        ekoe = max_num;
    }

    cout << "En kishi ortaq eselik(" << a << ", " << b << ") = " << ekoe << endl;
    cout << "En ulken ortaq bolgish(" << a << ", " << b << ") = " << euob << endl;

    return 0;
}
