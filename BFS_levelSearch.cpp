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
Node *BuildingTree(int arr[])
{
    idx++;
    if (arr[idx] == -1)
        return NULL;
    Node *root = new Node(arr[idx]);
    root->left = BuildingTree(arr);
    root->right = BuildingTree(arr);
    return root;
}

int main()
{
    int arr[] = {1, 2, 4, -1, -1, 3, -1, -1, 5, -1, -1};

    Node *root = BuildingTree(arr);
    return 0;
}