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
BST* BSTInsertion(ifstream& f, string s){
    BST *bst = new BST();
    auto start = high_resolution_clock::now();
    while (getline(f, s, '\n')) {
        bst->put(stoi(s),stoi(s)  );
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Insertion time of BST : " << duration.count() << " microseconds"<< endl;
    cout << "Height of BST : " << bst->height() << endl;
    return bst;
}

// Inserions in to Splay tree
SplayTree* SplayTreeInsertion(ifstream& f, string s){
    SplayTree* splayTree = new  SplayTree();
    auto start = high_resolution_clock::now();
    while (getline(f, s, '\n')) {
        splayTree->put(stoi(s),stoi(s) );
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Insertion time of Splay Tree : " << duration.count() << " microseconds"<< endl;
    cout << "Height of Splay Tree : " << splayTree->height() << endl;
    return  splayTree;

}

// Insertions in to Red-black tree
RBTree*  RBTreeInsertion(ifstream& f, string s){
    RBTree* rbTree = new  RBTree();
    auto start = high_resolution_clock::now();
    while (getline(f, s, '\n')) {
        rbTree->put(stoi(s),stoi(s) );
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Insertion time of Red-Black Tree : " << duration.count() << " microseconds"<< endl;
    cout << "Height of Red-Black Tree : " << rbTree->height() << endl;
    return rbTree;

}

// Search from BST
void BSTSearch(BST* bst, string s, ifstream& f){
    auto start = high_resolution_clock::now();
    while (getline(f, s, '\n')) {
        bst->get(stoi(s));
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Search time of BST : " << duration.count() << " microseconds"<< endl;
    cout << "Height of BST after search : " << bst->height() << endl;

}

// Search from Splay tree
void SplayTreeSearch(SplayTree* splayTree,  string s, ifstream& f){
    auto start = high_resolution_clock::now();
    while (getline(f, s, '\n')) {
        splayTree->contains(stoi(s));
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Search time of Splay Tree : " << duration.count() << " microseconds"<< endl;
    cout << "Height of Splay Tree after search : " << splayTree->height() << endl;

}

// Search from Red-black tree
void RBTreeSearch(RBTree* rbTree, string s, ifstream& f){
    auto start = high_resolution_clock::now();
    while (getline(f, s, '\n')) {
        rbTree->get(stoi(s));
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Search time of Red-Black Tree : " << duration.count() << " microseconds"<< endl;
    cout << "Height of Red-Black Tree after search : " << rbTree->height() << endl;

}

// Deletions from BST
void BSTDeletion(BST* bst, ifstream& f, string s){
    auto start = high_resolution_clock::now();
    while (getline(f, s, '\n')) {
        bst->del(stoi(s));
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Deletion time of BST : " << duration.count() << " microseconds"<< endl;
    cout << "Height of BST after deletion : " << bst->height() << endl;

}

// Deletions from Splay tree
void SplayTreeDeletion(SplayTree* splayTree,ifstream& f, string s){
    auto start = high_resolution_clock::now();
    while (getline(f, s, '\n')) {
        splayTree->del(stoi(s));
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Deletion time of Splay Tree : " << duration.count() << " microseconds"<< endl;
    cout << "Height of Splay Tree after deletion : " << splayTree->height() << endl;

}

// Deletions from Red-black tree
void RBTreeDeletion(RBTree* rbTree, ifstream& f, string s){
    auto start = high_resolution_clock::now();
    while (getline(f, s, '\n')) {
        rbTree->del(stoi(s));
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Deletion time of Red-Black Tree : " << duration.count() << " microseconds"<< endl;
    cout << "Height of Red-Black Tree after deletion : " << rbTree->height() << endl;

}



// main
int main() {

    // Reading from the data files giving the relative path
    ifstream data_1("\\data\\data_1.txt");
    ifstream data_2("\\data\\data_2.txt");
    ifstream search_data("\\data\\search_data.txt");
    ifstream delete_data("\\data\\delete_data.txt");
    string s;

    // Here you can uncomment the insertion line to insert to each tree one at a time
    // To do search operation, you can uncomment insertion and search lines in each tree one at a time
    // To do delete operation, you can uncomment insertion and delete lines in each tree one at a time

    // BST with dataset_1
    /*BST *bst_d1 = BSTInsertion(data_1,s);
    BSTSearch(bst_d1,s,search_data);
    BSTDeletion(bst_d1,delete_data,s);*/

    // BST with dataset_2
    /*BST *bst_d2 = BSTInsertion(data_2,s);
    BSTSearch(bst_d2,s,search_data);
    BSTDeletion(bst_d2,delete_data,s);*/

    // Splay tree with dataset_1
    /*SplayTree *st_d1 = SplayTreeInsertion(data_1,s);
    SplayTreeSearch(st_d1,s,search_data);
    SplayTreeDeletion(st_d1,delete_data,s);*/

    // Splay tree with dataset_2
    /*SplayTree *st_d2 = SplayTreeInsertion(data_2,s);
    SplayTreeSearch(st_d2,s,search_data);
    SplayTreeDeletion(st_d2,delete_data,s);*/

    // Red-Black tree with dataset_1
    /*RBTree *rbt_d1 = RBTreeInsertion(data_1,s);
    RBTreeSearch(rbt_d1, s,search_data);
    RBTreeDeletion(rbt_d1,delete_data ,s);*/

    // Red-Black tree with dataset_2
    /*RBTree *rbt_d2 = RBTreeInsertion(data_2,s);
    RBTreeSearch(rbt_d2,s,search_data);
    RBTreeDeletion(rbt_d2,delete_data,s);*/

    cout << "Done !" << endl;
    return 0;

}