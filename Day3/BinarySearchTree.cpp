#include <iostream>
#include <algorithm> 
using namespace std;

// Node structure to hold data and left,right children
template <typename T>
struct Node {
    T data;
    Node* left;
    Node* right;

    Node(T value) : data(value), left(nullptr), right(nullptr) {}
};

template <typename T>
class BinarySearchTree {
private:
    Node<T>* root;
    int size;

    // Recursive helper to insert a new value
    Node<T>* insert(Node<T>* node, T value) {
        if (!node) return new Node<T>(value); 
        if (value < node->data)
            node->left = insert(node->left, value); // left
        else
            node->right = insert(node->right, value); //  right
        return node;
    }

    // Inorder traversal
    void inorder(Node<T>* node) {
        if (!node) return;
        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }

    // Preorder traversal
    void preorder(Node<T>* node) {
        if (!node) return;
        cout << node->data << " ";
        preorder(node->left);
        preorder(node->right);
    }

    // Postorder traversal
    void postorder(Node<T>* node) {
        if (!node) return;
        postorder(node->left);
        postorder(node->right);
        cout << node->data << " ";
    }

    // Recursive function to get tree height
    int height(Node<T>* node) {
        if (!node) return -1; 
        return 1 + max(height(node->left), height(node->right));
    }

    // Deletes all nodes recursively
    void clear(Node<T>* node) {
        if (!node) return;
        clear(node->left);
        clear(node->right);
        delete node;
    }

public:
   
    BinarySearchTree() : root(nullptr), size(0) {}

   
    ~BinarySearchTree() {
        clear(root);
    }

    
    void add(T value) {
        root = insert(root, value);
        size++;
    }

    // Print nodes in inorder
    void printInorder() {
        inorder(root);
        cout << endl;
    }

    // Print nodes in preorder
    void printPreorder() {
        preorder(root);
        cout << endl;
    }

    // Print nodes in postorder
    void printPostorder() {
        postorder(root);
        cout << endl;
    }

    // Return the height of the tree
    int getHeight() {
        return height(root);
    }

    // Return number of nodes
    int getSize() {
        return size;
    }
};

int main() {
    BinarySearchTree<int> bst;
    // Adding elements to BST
    bst.add(40);
    bst.add(20);
    bst.add(60);
    bst.add(10);
    bst.add(30);
    bst.add(50);
    bst.add(70);

    // Tree traversals,stats
    cout << "Inorder: ";
    bst.printInorder();
    cout << "Preorder: ";
    bst.printPreorder();
    cout << "Postorder: ";
    bst.printPostorder();
    cout << "Tree height: " << bst.getHeight() << endl;
    cout << "Tree size: " << bst.getSize() << endl;

    return 0;
}
