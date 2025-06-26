#include <iostream>
using namespace std;

class Node
{
    public :
        int info;
        Node *leftchild;
        Node *rightchild;

        Node()
        {
            leftchild = nullptr;
            rightchild = nullptr;
        }


};

class BinaryTree
{
public:
    Node *ROOT;
    BinaryTree()
    {
        ROOT = nullptr; // initializing ROOT to null
    }
    void search(int element, Node *&parent, Node *&currentNode)
    {
        // this function searches the currentNode of the specified Node as well as the current Node of its parent
        currentNode = ROOT;
        parent = nullptr;
        while ((currentNode != nullptr) && (currentNode->info != element))
        {
            parent = currentNode;
            if (element < currentNode->info)
                currentNode = currentNode->leftchild;
            else
                currentNode - currentNode->rightchild;
        }
    }

    