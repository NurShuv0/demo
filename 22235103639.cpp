#include <iostream>
using namespace std;

class BST
{
private:
    int data;
    BST *left, *right;

public:
    // Default constructor.
    BST() : data(0), left(nullptr), right(nullptr) {}

    // Parameterized constructor.
    BST(int value) : data(value), left(nullptr), right(nullptr) {}

    // Insert function.
    void Insert(int value)
    {
        if (value < data)
        {
            if (left == nullptr)
                left = new BST(value);
            else
                left->Insert(value);
        }

        else if (value > data)
        {
            if (right == nullptr)
                right = new BST(value);
            else
                right->Insert(value);
        }
    }

    // Inorder traversal.
    void Inorder()
    {
        if (left != nullptr)
            left->Inorder();
        cout << data << " ";
        if (right != nullptr)
            right->Inorder();
    }

    void Preorder()
    {
        cout << data << " ";
        if (left != nullptr)
            left->Preorder();
        if (right != nullptr)
            right->Preorder();
    }


    void Postorder()
    {
        if (left != nullptr)
            left->Postorder();
        if (right != nullptr)
            right->Postorder();
        cout << data << " ";
    }

    bool Search(int value)
    {
        if (data == value)
            return true;
        else if (value < data)
        {
            if (left == nullptr)
                return false;
            else
                return left->Search(value);
        }
        else
        {
            if (right == nullptr)
                return false;
            else
                return right->Search(value);
        }
    }
};

// Driver code
int main() {
    BST b;
    b.Insert(50);
    b.Insert(30);
    b.Insert(20);
    b.Insert(40);
    b.Insert(70);
    b.Insert(60);
    b.Insert(80);

    cout << "Inorder traversal: ";
    b.Inorder();
    cout << nl;

    cout << "Preorder traversal: ";
    b.Preorder();
    cout << nl;

    cout << "Postorder traversal: ";
    b.Postorder();
    cout << nl;

    int keyToSearch = 30;
    if (b.Search(keyToSearch)) {
        cout << keyToSearch << " found in the tree." << nl;
    } else {
        cout << keyToSearch << " not found in the tree." << nl;
    }

    return 0;
}
