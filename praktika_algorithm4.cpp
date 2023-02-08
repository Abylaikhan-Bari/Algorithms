#include <iostream> 

using namespace std;

int main(){
    int a, b;
    float nod;
    cout << "A: ";
    cin >> a;
    cout << "B: ";
    cin >> b;

    while (a!=b){
     //float ortasha = a % b;
        if (a > b){
            a = a - b;
        }
        
        else{
            b = b - a;
        }
    }

    nod = a;

    cout << "NOD: " << nod;


}