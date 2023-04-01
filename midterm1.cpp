//Входные данные будут содержать четыре целых числа - a, b, c, d по одному на строку.
//Возвращает наибольшее из четырех целых чисел.
#include <iostream>
using namespace std;

int main(){
    int a, b, c, d;
    cout << "a: "; cin >> a;
    cout << "b: "; cin >> b;
    cout << "c: "; cin >> c;
    cout << "d: "; cin >> d;

    //cout << "Max: " << max(max(a, b), max(c, d));
    
    if (a > b && a > c && a > d){
        cout << "Max: " << a;
    }
    else if (b > a && b > c && b > d){
        cout << "Max: " << b;
    }
    else if (c > a && c > b && c > d){
        cout << "Max: " << c;
    }
    else if (d > a && d > b && d > c){
        cout << "Max: " << d;
    }
    else{
        cout << "Error";
    }

    return 0;
}