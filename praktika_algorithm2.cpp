#include <iostream>
#include <math.h>
using namespace std;
int main() {
    float a = 9.5;
    float b = 1.365;
    float c = 6.6;
    float d = 3;

    float y = (sin(pow(c, 3)) * cos(pow(a, 2)))/(5*sin(pow(b, 4)));


    cout << "Y = " << y;
    return 0;
}