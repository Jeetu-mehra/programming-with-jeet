#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

int search(int inorder[], int start, int end, int curr) {
    for (int i = start; i <= end; i++) {
        if (inorder[i] == curr) return i;
    }
    return -1;
}

Node* buildTree(int preorder[], int inorder[], int start, int end, int &idx) {
    if (start > end) return NULL;

    int curr = preorder[idx++];
    Node* node = new Node(curr);

    if (start == end) return node;

    int pos = search(inorder, start, end, curr);
    node->left = buildTree(preorder, inorder, start, pos - 1, idx);
    node->right = buildTree(preorder, inorder, pos + 1, end, idx);

    return node;
}

void printInorder(Node* root) {
    if (root == NULL) return;
    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}

void printPreorder(Node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    printPreorder(root->left);
    printPreorder(root->right);
}

int main() {
    int inorder[] = {1, 8, 19, 13, 25, 9, 5, 10, 4, 3};
    int preorder[] = {25, 8, 1, 13, 19, 5, 9, 4, 10, 3};
    int n = sizeof(inorder) / sizeof(inorder[0]);
    int idx = 0;

    Node* root = buildTree(preorder, inorder, 0, n - 1, idx);

    cout << "Constructed Inorder: ";
    printInorder(root);
    cout << "\nConstructed Preorder: ";
    printPreorder(root);
    return 0;
}
