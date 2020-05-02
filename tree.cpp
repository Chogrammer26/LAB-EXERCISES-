#include <iostream>

struct Tree {
    Tree *parent; 
    Tree *left;
    Tree *right;
    int value; 
};

int main()
{
    Tree *root = new Tree;
    Tree *c1  = new Tree;
    Tree *c2 = new Tree;
    
    root->value = 1;
    root->left = c1;
    root->right = c2;
    root->parent = NULL; 

    root->left->value = 2;
    root->right->value = 3;
    
    root->left->left = NULL;
    root->left->right = NULL;
    root->left->parent = root;
    
    root->right->left = NULL;
    root->right->right = NULL; 
    root->right->parent = root; 
    
    std::cout << "Root Node   : " << root << '\n';
    std::cout << "Left Child  :"<< root->left << '\n';
    std::cout << "Right Child : "<< root->right << '\n';
    
    std::cout << "Parent of Left Child : " << root->left->parent << '\n';
    std::cout << "Parent of Right Child : " << root->right->parent << '\n';
    
    std::cout << "Parent of Root : " << root->parent << '\n';
    
    std::cout << "Root Value : " <<  root->value << '\n'
              << "Left Child Value : " << root->left->value << '\n' 
              << "Right Child Value : " << root->right->value; 
}
