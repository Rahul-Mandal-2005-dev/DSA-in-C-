#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

static int idx = -1;
Node *preinsertTree(int arr[])
{
    idx++;
    if (arr[idx] == -1)
        return nullptr;
    Node *root = new Node(arr[idx]);
    root->left = preinsertTree(arr);
    root->right = preinsertTree(arr);
    return root;
}
void preorder(Node *root)
{
    if (root == NULL)
        return;
    else
    {
        cout << root->data << "->";
        preorder(root->left);
        preorder(root->right);
    }
}
int main()
{
    int arr[] = {1, 2, 4, -1, -1, 3, -1, -1, 5, -1, -1};
    Node *root = preinsertTree(arr);
    preorder(root);
    cout<<"None"<<endl;
    return 0;
}