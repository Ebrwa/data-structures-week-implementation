#include <iostream>
#include <algorithm>
using namespace std;

// Basic tree node that holds data and has left,right children
template <typename T>
struct TreeNode {
    T data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(T value) : data(value), left(nullptr), right(nullptr) {}
};

// Binary Tree class that supports different traversal methods
template <typename T>
class BinaryTree {
private:
    TreeNode<T>* root;

    // Recursively
    void clear(TreeNode<T>* node) {
        if (!node) return;
        clear(node->left);
        clear(node->right);
        delete node;
    }

    // Preorder traversal
    void preorder(TreeNode<T>* node) {
        if (!node) return;
        cout << node->data << " ";
        preorder(node->left);
        preorder(node->right);
    }

    // Inorder traversal
    void inorder(TreeNode<T>* node) {
        if (!node) return;
        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }
    // Postorder traversal
    void postorder(TreeNode<T>* node) {
        if (!node) return;
        postorder(node->left);
        postorder(node->right);
        cout << node->data << " ";
    }
    // Calculate the height of the tree recursively
    int height(TreeNode<T>* node) {
        if (!node) return -1; 
        return 1 + max(height(node->left), height(node->right));
    }

public:
    // Constructor
    BinaryTree() : root(nullptr) {}

    // Destructor
    ~BinaryTree() {
        clear(root);
    }

    // Set root of the tree (used when manually building the tree)
    void setRoot(TreeNode<T>* node) {
        root = node;
    }

    // Get root node pointer (useful if modifying or extending tree)
    TreeNode<T>* getRoot() {
        return root;
    }

    // Print preorder traversal
    void printPreorder() {
        preorder(root);
        cout << endl;
    }

    // Print inorder traversal
    void printInorder() {
        inorder(root);
        cout << endl;
    }
    // Print postorder traversal
    void printPostorder() {
        postorder(root);
        cout << endl;
    }
    // Return height of the  tree
    int getHeight() {
        return height(root);
    }
};

int main() {
    BinaryTree<int> tree;

    // Build a tree manually by connecting nodes
    TreeNode<int>* root = new TreeNode<int>(10);
    TreeNode<int>* left = new TreeNode<int>(5);
    TreeNode<int>* right = new TreeNode<int>(15);
    TreeNode<int>* leftLeft = new TreeNode<int>(3);
    TreeNode<int>* leftRight = new TreeNode<int>(7);
    root->left = left;
    root->right = right;
    left->left = leftLeft;
    left->right = leftRight;

    // Set the root
    tree.setRoot(root);

	// Show different types of tree traversals and the hight of the tree
    cout << "Preorder: ";
    tree.printPreorder();
    cout << "Inorder: ";
    tree.printInorder();
    cout << "Postorder: ";
    tree.printPostorder();
    cout << "Tree height: " << tree.getHeight() << endl;

    return 0;
}
