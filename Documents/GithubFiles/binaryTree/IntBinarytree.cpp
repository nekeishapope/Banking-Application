#include <iostream>
#include<random>
#include "IntBinarytree.h"
using namespace std;
int main() {
    // insert code here...

    BinaryTree tree;
    //IntBinaryTree *root;
    cout << "\nAdding Node....... \n" << endl;
    for (int i = 0; i < 20; i++){
        tree.insert(rand() % 100);
    }

int choice;
do {
    cout << "\n";
    cout << "Choose from the following option to display Tree " << endl;
    cout << "1 In Order" << endl;
    cout << "2 Pre Order" << endl;
    cout << "3 Post Order" << endl;
    
    
        cout << "Enter Choice: ";
        cin >> choice;
        cout << "\n";
        cout << " Print Node........" << endl;
        if (choice == 1) {
            tree.displayInOrder(tree.root);
        }
        else if (choice == 2) {
            tree.displayPreOrder(tree.root);
        }
        else if (choice == 3) {
            tree.displayPostOrder(tree.root);
        }
        else {
            cout << "The Number you've enterd is not valid. Please choose from the options above." << endl;
        }
    } while (choice > 0 && choice < 4);
     
    return 0;
}
