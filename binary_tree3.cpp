#include<iostream>
using namespace std;

#define MAX_SIZE 100

class BST{
  private:
    int arr[MAX_SIZE];
    int size;
  
  public:
    BST() {
        size = 0;
    }
  
    void insert(int val) {
        if (size == 0) {
            arr[0] = val;
            size++;
            return;
        }
      
        int idx = 0;
        while (idx < size) {
            if (arr[idx] == val) {
                return;
            }
            else if (arr[idx] > val) {
                idx = 2 * idx + 1;
            }
            else {
                idx = 2 * idx + 2;
            }
        }
        arr[idx] = val;
        size++;
    }
  
    bool search(int val) {
        int idx = 0;
        while (idx < size) {
            if (arr[idx] == val) {
                return true;
            }
            else if (arr[idx] > val) {
                idx = 2 * idx + 1;
            }
            else {
                idx = 2 * idx + 2;
            }
        }
        return false;
    }
  
    void inorder(int idx) {
        if (idx < size) {
            inorder(2 * idx + 1);
            cout << arr[idx] << " ";
            inorder(2 * idx + 2);
        }
    }
  
    void print() {
        inorder(0);
        cout << endl;
    }
};

int main() {
    BST bst;
    bst.insert(10);
    bst.insert(5);
    bst.insert(15);
    bst.insert(3);
    bst.insert(7);
    bst.insert(12);
    bst.insert(20);
    bst.print();
  
    cout << bst.search(15) << endl;
    cout << bst.search(4) << endl;
    return 0;
}
