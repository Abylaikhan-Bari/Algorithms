/* Задан массив размера N. Задача состоит в том чтобы отсортировать элементы 
массива выполнив функции heapify() и buildHeap() 
которые используются для реализации сортировки по куче. */
#include <iostream>
using namespace std;



// Функция для обмена значениями двух элементов массива
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Функция для преобразования поддерева с корневым узлом i в кучу размера N
void heapify(int arr[], int N, int i) {
    int largest = i; // Инициализация наибольшего элемента как корня
    int l = 2 * i + 1; // Левый дочерний элемент
    int r = 2 * i + 2; // Правый дочерний элемент

    // Если левый дочерний элемент больше корня
    if (l < N && arr[l] > arr[largest])
        largest = l;

    // Если правый дочерний элемент больше, чем наибольший элемент на данный момент
    if (r < N && arr[r] > arr[largest])
        largest = r;

    // Если наибольший элемент не корень
    if (largest != i) {
        swap(&arr[i], &arr[largest]);

        // Рекурсивно обрабатываем поддерево
        heapify(arr, N, largest);
    }
}

// Функция для построения кучи из заданного массива размера N
void buildHeap(int arr[], int N) {
    for (int i = N / 2 - 1; i >= 0; i--) {
        heapify(arr, N, i);
    }
}
// Функция для сортировки массива с помощью кучи
void heapSort(int arr[], int N) {
    // Построение кучи (перегруппировка массива)
    buildHeap(arr, N);

    // Извлечение элементов из кучи один за другим
    for (int i = N - 1; i >= 0; i--) {
        // Перемещаем текущий корень в конец
        swap(&arr[0], &arr[i]);

        // Вызываем процедуру heapify на уменьшенной куче
        heapify(arr, i, 0);
    }
}

// Функция для вывода элементов массива на экран
void printArray(int arr[], int N) {
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int N = sizeof(arr) / sizeof(arr[0]);

    cout << "Bastapqy: ";
    printArray(arr, N);

    heapSort(arr, N);

    cout << "Suryptalgan array: ";
    printArray(arr, N);

    return 0;
}
