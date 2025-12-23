#include<iostream>
#ifndef TREE_H
#define TREE_H
using namespace std;

//Node Implementation
template <typename T>
struct Node
{
    T data;
    Node* left;
    Node* right;

    Node(T value){
        data = value;
        left = right = NULL;
    }
};

//Tree Implementation
template <typename T>
class BST
{
private:
    Node<T>* root;
public:
    BST(){
        root = NULL;
    }

    //Insert an Element in Tree
    Node<T>* Insert(Node<T>* r, T value){
        Node<T>* newnode = new Node<T>(value);
        newnode->left = nullptr;
        newnode->right = nullptr;

        if (r == NULL)
        {
            r = newnode;

        } else if (value < r->data)   //Insert at left
        {
            r->left = Insert(r->left,value);

        } else if (value > r->data)    //Insert at right
        {
            r->right = Insert(r->right,value);
        }
        return r;
    }

    void Insert(T value)
    {
        root = Insert(root,value);
        cout << "[" << value << "]" << " was inserted" << endl;
    }
    
    //Search an Element in Tree
    Node<T>* Search(Node<T>* r, T key){
        if (r == NULL)
        {
            return r;

        } else if (key == r->data){

            return r;

        } else if(key < r->data){

            return Search(r->left,key);

        } else if (key > r->data){

            return Search(r->right,key);
        }
    }

    bool Search(T key)
    {
        Node<T>* result = Search(root,key);

        if (result == NULL)
        {
            return false; 
        } else {
            return true;
        }
    }

    /*
    Traversal --> 1. preorder  (root -> left -> right)
                > 2. inorder   (left -> root -> right)
                > 3. postorder (left -> right -> root)
    */

    void preorder(Node<T>* r){

        if (r == NULL)
        {
            return;
            
        } else {
            cout << r->data << " ";
            preorder(r->left);
            preorder(r->right);
        }
    }
    
    void postorder(Node<T>* r)
    {
        if (r == NULL)
        {
            return;

        } else {
            postorder(r->left);
            cout << r->data << " ";
            postorder(r->right);
        }
    }
    
    void inorder(Node<T>* r)
    {
        if (r == NULL)
        {
            return;

        } else {
            inorder(r->left);
            cout << r->data << " ";
            inorder(r->right);
        }
    }

    void inorder() {
    inorder(root);
    cout << endl;
   }

    void preorder() {
    preorder(root);
    cout << endl;
    }

    void postorder() {
    postorder(root);
    cout << endl;
    }


    //Delete an Element in Tree
    // Find minimum value
    Node<T>* findMin(Node<T>* root) {
        if (root == nullptr) return nullptr;
        while (root->left != nullptr)
            root = root->left;
        return root;
    }

    // Find maximum value
    Node<T>* findMax(Node<T>* root) {
        if (root == nullptr) return nullptr;
        while (root->right != nullptr)
            root = root->right;
        return root;
    }

    // Delete Node
    Node<T>* Delete(Node<T>* root, T value) {
        if (root == nullptr)

            return root;

        if (value < root->data) {

            root->left = Delete(root->left, value);

        } else if (value > root->data) {

            root->right = Delete(root->right, value);

        } else {
            // Node found
            if (root->left == nullptr && root->right == nullptr) { // No child

                delete root;
                return nullptr;

            } else if (root->left == nullptr) { // One child (right)

                Node<T>* temp = root->right;
                delete root;
                return temp;

            } else if (root->right == nullptr) { // One child (left)

                Node<T>* temp = root->left;
                delete root;
                return temp;

            } else { // Two children

                Node<T>* temp = findMin(root->right); // inorder successor
                root->data = temp->data;
                root->right = Delete(root->right, temp->data);
            }
        }
        return root;
    }

    void DeleteValue(T value) {
    root = Delete(root, value);
    cout << value << " was deleted" << endl;
}

};
#endif
