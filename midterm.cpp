//Если 1<n<9 , выведите английское слово в нижнем регистре, соответствующее номеру (например, один для 1, два для 2 и т.д.).
//Если n>9 , выведите значение больше 9.
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "N: "; cin >> n;

    if (1 < n < 9 ){
        if (n == 1){
            cout << "a";
        }
        if (n == 1){
            cout << "a";
        }
        if (n == 2){
            cout << "b";
        }
        if (n == 3){
            cout << "c";
        }
        if (n == 4){
            cout << "d";
        }
        if (n == 5){
            cout << "e";
        }
        if (n == 6){
            cout << "f";
        }
        if (n == 7){
            cout << "g";
        }
        if (n == 8){
            cout << "h";
        }
        if (n == 9){
            cout << "i";
        }
        if (n > 9){
            cout << "Value is greater than 9";
        }
    }
    else{
        cout << "Error";
    }
    

    return 0;
}