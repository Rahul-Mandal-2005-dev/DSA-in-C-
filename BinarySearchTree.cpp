#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val) : data(val), left(NULL), right(NULL) {}
};

class BinarySearchTree
{
private:
    Node *root;

    Node *insert(Node *node, int val)
    {
        if (!node)
        {
            return new Node(val);
        }
        if (val < node->data)
        {
            node->left = insert(node->left, val);
        }
        else if (val > node->data)
        {
            node->right = insert(node->right, val);
        }
        else
        {
            cout << "No duplicated element" << endl;
        }
        return node;
    }

    void preOrder(Node *node)
    {
        if (node == NULL)
            return;
        cout << node->data << "--->";
        inOrder(node->left);
        inOrder(node->right);
    }

    void postOrder(Node *node)
    {
        if (node == NULL)
            return;
        inOrder(node->left);
        inOrder(node->right);
        cout << node->data << "--->";
    }

    void inOrder(Node *node)
    {
        if (node == NULL)
            return;
        inOrder(node->left);
        cout << node->data << "--->";
        inOrder(node->right);
    }
    bool searching(Node *root, int key)
    {
        if (root == NULL)
            return false;
        if (root->data == key)
        {
            cout << root->data << "--->";
            return true;
        }
        else if (key < root->data)
        {
            return searching(root->left, key);
        }
        else
        {
            return searching(root->right, key);
        }
    }

    Node *inOrderMin(Node *root)
    {
        while (root && root->left)
        {
            root = root->left;
        }
        return root;
    }
    Node *deleting(Node *root, int target)
    {
        if (root == NULL)
        {
            return root;
        }
        if (target < root->data)
        {
            root->left = deleting(root->left, target);
        }
        else if (target > root->data)
        {
            root->right = deleting(root->right, target);
        }
        else
        {
            if (root->left == NULL)
            {
                Node *temp = root->right;
                delete root;
                return temp;
            }
            if (root->right == NULL)
            {
                Node *temp = root->left;
                delete root;
                return temp;
            }

            Node *temp = inOrderMin(root->right);
            root->data = temp->data;
            root->right = deleting(root->right, temp->data);
            return root;

            return root;
        }
    }

public:
    BinarySearchTree() : root(NULL) {}
    void insert(int val)
    {
        root = insert(root, val);
    }
    void inOrder()
    {
        inOrder(root);
        cout << "None" << endl;
    }
    void preOrder()
    {
        preOrder(root);
        cout << "None" << endl;
    }
    void postOrder()
    {
        postOrder(root);
        cout << "None" << endl;
    }
    void searching(int key)
    {
        bool condition = searching(root, key);
        if (condition)
        {
            cout << "Found" << endl;
        }
        else
        {
            cout << "Not found" << endl;
        }
    }

    void deleting(int target)
    {
        root = deleting(root, target);
    }
};

int main()
{
    BinarySearchTree b1;
    b1.insert(40);
    b1.insert(30);
    b1.insert(10);
    b1.insert(50);
    b1.insert(60);
    b1.inOrder();
    b1.deleting(40);
    b1.inOrder();

    return 0;
}