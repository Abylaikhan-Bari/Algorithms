#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

class BST {
    private:
        Node* root;
        
    public:
        BST() {
            root = NULL;
        }
        
        Node* createNode(int value) {
            Node* newNode = new Node();
            newNode->data = value;
            newNode->left = NULL;
            newNode->right = NULL;
            return newNode;
        }

        Node* insertNode(Node* root, int value) {
            if (root == NULL) {
                root = createNode(value);
                return root;
            }
            if (value < root->data) {
                root->left = insertNode(root->left, value);
            }
            else {
                root->right = insertNode(root->right, value);
            }
            return root;
        }

        void insert(int value) {
            root = insertNode(root, value);
        }

        void inOrderTraversal(Node* root) {
            if (root == NULL) {
                return;
            }
            inOrderTraversal(root->left);
            cout << root->data << " ";
            inOrderTraversal(root->right);
        }

        void printInOrder() {
            cout << "Inorder traversal: ";
            inOrderTraversal(root);
            cout << endl;
        }

        Node* search(Node* root, int value) {
            if (root == NULL || root->data == value) {
                return root;
            }
            if (value < root->data) {
                return search(root->left, value);
            }
            else {
                return search(root->right, value);
            }
        }

        Node* find(int value) {
            return search(root, value);
        }

        Node* findMinNode(Node* node) {
            Node* current = node;
            while (current && current->left != NULL) {
                current = current->left;
            }
            return current;
        }

        Node* deleteNode(Node* root, int value) {
            if (root == NULL) {
                return root;
            }
            if (value < root->data) {
                root->left = deleteNode(root->left, value);
            }
            else if (value > root->data) {
                root->right = deleteNode(root->right, value);
            }
            else {
                if (root->left == NULL) {
                    Node* temp = root->right;
                    delete root;
                    return temp;
                }
                else if (root->right == NULL) {
                    Node* temp = root->left;
                    delete root;
                    return temp;
                }
                Node* temp = findMinNode(root->right);
                root->data = temp->data;
                root->right = deleteNode(root->right, temp->data);
            }
            return root;
        }

        void remove(int value) {
            root = deleteNode(root, value);
        }

        int height(Node* root) {
            if (root == NULL) {
                return -1;
            }
            int leftHeight = height(root->left);
            int rightHeight = height(root->right);
            return 1 + max(leftHeight, rightHeight);
        }

       void balance() {
    int balanceFactor = height(root->left) - height(root->right);
    if (balanceFactor > 1) {
        if (height(root->left->left) >= height(root->left->right)) {
            // Left Left Case
            Node* newRoot = root->left;
            root->left = newRoot->right;
            newRoot->right = root;
            root = newRoot;
        }
        else {
            // Left Right Case
            Node* newRoot = root->left->right;
            root->left->right = newRoot->left;
            newRoot->left = root->left;
            root->left = newRoot->right;
            newRoot->right = root;
            root = newRoot;
        }
    }
    else if (balanceFactor < -1) {
        if (height(root->right->right) >= height(root->right->left)) {
            // Right Right Case
            Node* newRoot = root->right;
            root->right = newRoot->left;
            newRoot->left = root;
            root = newRoot;
        }
        else {
            // Right Left Case
            Node* newRoot = root->right->left;
            root->right->left = newRoot->right;
            newRoot->right = root->right;
            root->right = newRoot->left;
            newRoot->left = root;
            root = newRoot;
        }
    }
}
int main() {
    BST tree;
    tree.insert(5);
    tree.insert(3);
    tree.insert(7);
    tree.insert(1);
    tree.insert(9);

    tree.printInOrder();
    tree.remove(3);

    tree.printInOrder();
    return 0;
}
};
