#include <iostream>

using namespace std;

int main(){
    int size;
    cout << "Size: "; cin >> size;
    
    //int temp = 0;
    
    int arr[size];

    for (int i = 0; i < size; i++){
        cout << "arr[" << i << "]: "; cin >> arr[i];
    }

    for (int i = 0; i < size; i++){
        if (arr[i] > arr[i+1]){
           //temp = arr[i+1];
           //arr[i] = temp;
           arr[i] = arr[i+1];
        }
        else{
                if(arr[i] > arr[i + 2]){
                //temp = arr[i+2];
                //arr[i] = temp;
                arr[i] = arr[i+2];
                }
                if(arr[i] < arr[i+1]){
                //temp = arr[i+1];
                //arr[i] = temp;
                arr[i] = arr[i];
                }
        }
    }

    cout << endl;

    for (int i = 0; i < size; i++){
        cout << "arr[" << i << "]: " << arr[i] << endl;
    }
    return 0;
}