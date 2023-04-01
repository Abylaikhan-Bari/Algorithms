#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
//первый элемент равен длине массива, каждый следующий вдвое меньше предыдущего

int main(){
    int n;
    cout << "N: "; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int h = 1;
    while (h < n/3){
        h = 3*h + 1;
    }
    while (h >= 1){
        for (int i = h; i < n; i++){
            for (int j = i; j >= h && arr[j] < arr[j-h]; j -= h){
                int temp = arr[j];
                arr[j] = arr[j-h];
                arr[j-h] = temp;
            }
        }
        h = h/3;
    }
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
