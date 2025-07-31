#include <iostream>
using namespace std;

class Binarytree {
public:
    int key;
    Binarytree* left;
    Binarytree* right;

    // Constructor
    Binarytree(int key) : key(key), left(nullptr), right(nullptr) {}

    // Factory function (mirrors getNewnode)
    static Binarytree* getNewnode(int val) {
        return new Binarytree(val);
    }

    // Recursive BST insert (no duplicates)
    static Binarytree* insert(Binarytree* root, int val) {
        if (root == nullptr) {
            return getNewnode(val);
        }
        if (val < root->key)
            root->left = insert(root->left, val);
        else if (val > root->key)
            root->right = insert(root->right, val);
        return root;
    }

    // Inorder traversal: left, root, right
    static void inorder(Binarytree* root) {
        if (!root) return;
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }

    // Preorder traversal: root, left, right
    static void preorder(Binarytree* root) {
        if (!root) return;
        cout << root->key << " ";
        preorder(root->left);
        preorder(root->right);
    }

    // Postorder traversal: left, right, root
    static void postorder(Binarytree* root) {
        if (!root) return;
        postorder(root->left);
        postorder(root->right);
        cout << root->key << " ";
    }
};

int main() {
    Binarytree* root = nullptr;
    int vals[] = { 25,50,70,90,66,35,44,31,15,22,24,18,10,12,4 };

    for (int v : vals)
        root = Binarytree::insert(root, v);

    // Perform traversals
    Binarytree::inorder(root);
    cout << "\n==============================\n";
    Binarytree::preorder(root);
    cout << "\n==============================\n";
    Binarytree::postorder(root);
    cout << "\n";

    return 0;
}
