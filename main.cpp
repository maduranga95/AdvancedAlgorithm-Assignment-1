#include "BST.h"
#include "RBTree.h"
#include "SplayTree.h"
#include <string>
#include <iostream>
#include <vector>
#include <chrono>
#include <fstream>


using namespace std;
using namespace std::chrono;

// Intertions in to BST
BST* insertToBST(ifstream& f, string x){
    BST *bst = new BST();
    auto start = high_resolution_clock::now();
    while (getline(f, x, '\n')) {
        bst->put(stoi(x),stoi(x)  );
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Insertion time of BST : " << duration.count() << " microseconds"<< endl;
    cout << "Height of BST : " << bst->height() << endl;
    //cout << "Number of nodes in BST : " << bst->size() << endl;
    return bst;
}

// Inserions in to Splay tree
SplayTree* insertToSplayTree(ifstream& f, string x){
    SplayTree* splayTree = new  SplayTree();
    auto start = high_resolution_clock::now();
    while (getline(f, x, '\n')) {
        splayTree->put(stoi(x),stoi(x) );
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Insertion time of Splay Tree : " << duration.count() << " microseconds"<< endl;
    cout << "Height of Splay Tree : " << splayTree->height() << endl;
    //cout << "Number of nodes in Splay Tree : " << splayTree->size() << endl;
    return  splayTree;

}

// Insertions in to Red-black tree
RBTree*  insertToRBTree(ifstream& f, string x){
    RBTree* rbTree = new  RBTree();
    auto start = high_resolution_clock::now();
    while (getline(f, x, '\n')) {
        rbTree->put(stoi(x),stoi(x) );
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Insertion time of Red-Black Tree : " << duration.count() << " microseconds"<< endl;
    cout << "Height of Red-Black Tree : " << rbTree->height() << endl;
    //cout << "Number of nodes in Red-Black Tree : " << rbTree->size() << endl;
    return rbTree;

}

// Deletions from BST
void deleteFromBST(BST* bst, ifstream& f, string x){
    auto start = high_resolution_clock::now();
    while (getline(f, x, '\n')) {
        bst->del(stoi(x));
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Deletion time of BST : " << duration.count() << " microseconds"<< endl;
    cout << "Height of BST after deletion : " << bst->height() << endl;
    //cout << "Number of nodes in BST after deletion : " << bst->size() << endl;

}

// Deletions from Splay tree
void deleteFromSplayTree(SplayTree* splayTree,ifstream& f, string x){
    auto start = high_resolution_clock::now();
    while (getline(f, x, '\n')) {
        splayTree->del(stoi(x));
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Deletion time of Splay Tree : " << duration.count() << " microseconds"<< endl;
    cout << "Height of Splay Tree after deletion : " << splayTree->height() << endl;
    //cout << "Number of nodes in Splay Tree after deletion : " << splayTree->size() << endl;

}

// Deletions from Red-black tree
void deleteFromRBTree(RBTree* rbTree, ifstream& f, string x){
    auto start = high_resolution_clock::now();
    while (getline(f, x, '\n')) {
        rbTree->del(stoi(x));
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Deletion time of Red-Black Tree : " << duration.count() << " microseconds"<< endl;
    cout << "Height of Red-Black Tree after deletion : " << rbTree->height() << endl;
    //cout << "Number of nodes in Red-Black Tree after deletion : " << rbTree->size() << endl;

}


// Search from BST
void searchBST(BST* bst, string x, ifstream& f){
    auto start = high_resolution_clock::now();
    while (getline(f, x, '\n')) {
        bst->get(stoi(x));
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Search time of BST : " << duration.count() << " microseconds"<< endl;
    cout << "Height of BST after search : " << bst->height() << endl;
    //cout << "Number of nodes in BST after search : " << bst->size() << endl;

}

// Search from Splay tree
void searchSplayTree(SplayTree* splayTree,  string x, ifstream& f){
    auto start = high_resolution_clock::now();
    while (getline(f, x, '\n')) {
        splayTree->contains(stoi(x));
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Search time of Splay Tree : " << duration.count() << " microseconds"<< endl;
    cout << "Height of Splay Tree after search : " << splayTree->height() << endl;
    //cout << "Number of nodes in Splay Tree after search : " << splayTree->size() << endl;

}

// Search from Red-black tree
void searchRBTree(RBTree* rbTree, string x, ifstream& f){
    auto start = high_resolution_clock::now();
    while (getline(f, x, '\n')) {
        rbTree->get(stoi(x));
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Search time of Red-Black Tree : " << duration.count() << " microseconds"<< endl;
    cout << "Height of Red-Black Tree after search : " << rbTree->height() << endl;
    //cout << "Number of nodes in Red-Black Tree after search : " << rbTree->size() << endl;

}



// main
int main() {

    // Reading from the data files giving the relative path
    ifstream data_1("\\data\\data_1.txt");
    ifstream data_2("\\data\\data_2.txt");
    ifstream search_data("\\data\\search_data.txt");
    ifstream delete_data("\\data\\delete_data.txt");
    string x;


    // BST with dataset_1
    /*BST *bst1 = insertToBST(data_1,x);
    searchBST(bst1,x,search_data);
    deleteFromBST(bst1,delete_data,x);
    cout << '\n';*/

    // BST with dataset_2
    /*BST *bst2 = insertToBST(data_2,x);
    searchBST(bst2,x,search_data);
    deleteFromBST(bst2,delete_data,x);
    cout << '\n';*/

    // Red-Black tree with dataset_1
    /*RBTree *rbTree1 = insertToRBTree(data_1,x);
    searchRBTree(rbTree1, x,search_data);
    deleteFromRBTree(rbTree1,delete_data ,x);
    cout << '\n';*/

    // Red-Black tree with dataset_2
    /*RBTree *rbTree2 = insertToRBTree(data_2,x);
    searchRBTree(rbTree2,x,search_data);
    deleteFromRBTree(rbTree2,delete_data,x);
    cout << '\n';*/

    // Splay tree with dataset_1
    /*SplayTree *splayTree1 = insertToSplayTree(data_1,x);
    searchSplayTree(splayTree1,x,search_data);
    deleteFromSplayTree(splayTree1,delete_data,x);
    cout << '\n';*/

    // Splay tree with dataset_2
    /*SplayTree *splayTree2 = insertToSplayTree(data_2,x);
    searchSplayTree(splayTree2,x,search_data);
    deleteFromSplayTree(splayTree2,delete_data,x);
    cout << '\n';*/



    cout << "Done !" << endl;
    return 0;

}