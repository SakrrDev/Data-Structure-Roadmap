#include <iostream>
#include "BST.h" 
using namespace std;

    // Welcome In My World
    
int main() {
    BST<int> tree; 

    tree.Insert(50);
    tree.Insert(30);
    tree.Insert(70);
    tree.Insert(20);
    tree.Insert(40);
    tree.Insert(60);
    tree.Insert(80);

    int key = 60;
    if (tree.Search(key))
    {
        cout << key << " found in the BST." << endl;

    } else {

        cout << key << " not found in the BST." << endl;
    }

    cout << "Inorder: ";
    tree.inorder();

    cout << "Preorder: ";
    tree.preorder();

    cout << "Postorder: ";
    tree.postorder();
    
    tree.DeleteValue(30);
    tree.DeleteValue(50);
    
    cout << "Inorder: ";
    tree.inorder();

    cout << "Preorder: ";
    tree.preorder();

    cout << "Postorder: ";
    tree.postorder();

    return 0;
}
