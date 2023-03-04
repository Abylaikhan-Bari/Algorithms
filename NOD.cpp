#include <iostream> 

using namespace std;

int main(){
    int a, b;
    float nod;
    cout << "A: ";
    cin >> a;
    cout << "B: ";
    cin >> b;

    while (a != 0 && b != 0){

        if (a > b){
            a %= b;
        }

        else if(a == b){
            a = b;
        }

        else{
            b %= a;
        }
    }

    nod = a;

    cout << "NOD: " << nod;
}