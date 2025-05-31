#include <iostream>
using namespace std;

// Class to represent a tree node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize node
    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

// Class to handle binary tree operations
class BinaryTree {
public:
    // Preorder Traversal (Root -> Left -> Right)
    void preorder(Node* root) {
        if (root == nullptr) return;
        cout << root->data << " ";  // Visit root
        preorder(root->left);  // Visit left subtree
        preorder(root->right); // Visit right subtree
    }

    // Inorder Traversal (Left -> Root -> Right)
    void inorder(Node* root) {
        if (root == nullptr) return;
        inorder(root->left);  // Visit left subtree
        cout << root->data << " ";  // Visit root
        inorder(root->right); // Visit right subtree
    }

    // Postorder Traversal (Left -> Right -> Root)
    void postorder(Node* root) {
        if (root == nullptr) return;
        postorder(root->left);  // Visit left subtree
        postorder(root->right); // Visit right subtree
        cout << root->data << " ";  // Visit root
    }
};

int main() {
    // Create tree nodes
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    BinaryTree tree;

    cout << "Preorder traversal: ";
    tree.preorder(root);
    cout << endl;

    cout << "Inorder traversal: ";
    tree.inorder(root);
    cout << endl;

    cout << "Postorder traversal: ";
    tree.postorder(root);
    cout << endl;

    return 0;
}
