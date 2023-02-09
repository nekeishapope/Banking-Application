#include<iostream>
using namespace std;
class BinaryTree {

public:
    struct TreeNode {
        int value;
        TreeNode* left;
        TreeNode* right;
    };
    TreeNode* root;
    BinaryTree() { root = NULL; }
    ~BinaryTree(){}
    void insert(int num)
    {
        TreeNode* newNode;
        TreeNode* nodePtr;
        newNode = new  TreeNode;
        newNode->value = num;
        newNode->left = newNode->right = NULL;

        if (!root)
        {
            root = newNode;
        }
        else
        {
            nodePtr = root;
            while (nodePtr != NULL)
            {
                if (num < nodePtr->value)
                {
                    if (nodePtr->left)
                        nodePtr = nodePtr->left;
                    else
                    {
                        nodePtr->left = newNode;
                        break;
                    }
                }
                else if (num > nodePtr->value)
                {
                    if (nodePtr->right)
                        nodePtr = nodePtr->right;
                    else
                    {
                        nodePtr->right = newNode;
                        break;
                    }
                }
                else {
                    cout << "Duplicate value found in tree. \n";
                    break;
                }
            }
        }


    }
    void displayInOrder(TreeNode* nodeptr)
    {
        if (nodeptr)
        {
            displayInOrder(nodeptr->left);
           cout << nodeptr->value << endl;
           displayInOrder(nodeptr->right);
        }
    }
    void displayPreOrder(TreeNode* nodeptr)
    {
        if (nodeptr)
        {
            displayPreOrder(nodeptr->left);
            cout << nodeptr->value << endl;
            displayPreOrder(nodeptr->right);
        }
    }
    void displayPostOrder(TreeNode* nodeptr)
    {
        if (nodeptr)
        {
            displayPostOrder(nodeptr->left);
            displayPostOrder(nodeptr->right);
            cout << nodeptr->value << endl;
        }
    }

};


