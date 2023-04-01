/* Задан массив размера N. Задача состоит в том чтобы отсортировать элементы 
массива выполнив функции heapify() и buildHeap() 
которые используются для реализации сортировки по куче. */
#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i){
    int en_ulken = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[en_ulken])
        en_ulken = left;
        
    if (right < n && arr[right] > arr[en_ulken])
        en_ulken = right;
    
    if (en_ulken != i){
        swap(arr[i], arr[en_ulken]);
        heapify(arr, n, en_ulken);
    }
}

void buildHeap(int arr[], int n){
    for (int i = n / 2 - 1; i >= 0; i--){
        heapify(arr, n, i);
    }

    for (int i = n - 1; i >= 0; i--){
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}


int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];

    cout << "\nEnter the elements of the array: \n";
    for(int i = 0; i < n; i++){
        cout << "arr[" << i << "]: "; cin >> arr[i];
    }

    cout << "\nThe array: \n";
    for(int i = 0; i < n; i++){
        cout << "arr[" << i << "]: " << arr[i] << "\n";
    }
    
    heapify(arr, n, 0);

    buildHeap(arr, n);

    cout << "\nThe sorted array: \n";
    for(int i = 0; i < n; i++){
        cout << "arr[" << i << "]: " << arr[i] << "\n";
    }

    return 0;
}