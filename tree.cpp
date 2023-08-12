#include <iostream>
using namespace std;

// This is how the nodes of a tree are defined

class Node
{
    public:
    int data;
    Node * left;
    Node * right;

    // Note : since each node has the address to the node corresponding to the left and right of the node we are able to access the whole tree through the root node

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void buildTree(Node * & root)
{
    // This is the start of the creation of a binary tree
    
    int var;

    //cout<<"Enter the value : ";
    cin>>var;

    // If the user inputs -1, that means there is no node present over there

    if(var == -1) return;

    root = new Node(var);

    //cout<<"Now enter the data which you want to be the left of "<<var<<" ";
    buildTree(root->left);
    //cout<<"Now enter the data which you want to be the right of "<<var<<" ";
    buildTree(root->right);
}

// First we will look at pre-order transversal
// pre-order transversal implies that we first transverse the node, then the elements to the left of it and then the elements to the right of it

void printPreordertransversal(Node * & root)
{
    // First we print N,L,R

    if(root==NULL)
    {
        return;
    }

    cout<<root->data<<" ";
    printPreordertransversal(root->left);
    printPreordertransversal(root->right);
}

void printInordertransversal(Node * & root)
{
    // first we print L,N,R

    if(root == NULL) return;

    printInordertransversal(root->left);
    cout<<root->data<<" ";
    printInordertransversal(root->right);

}

void printPostordertransversal(Node * & root)
{
    // first we print L,R,N

    if(root == NULL) return;

    printPostordertransversal(root->left);
    printPostordertransversal(root->right);
    cout<<root->data<<" ";

}
int main()
{
    // Now since we have created a node, let us start with the creation of a binary tree
    
    Node * root=NULL;

    buildTree(root);

    //5 9 1 -1 -1 7 -1 -1 3 2 -1 -1 5 9 -1 -1 10 -1 -1

    cout<<"The elements transversed in preorder transversal is "<<endl;
    printPreordertransversal(root);

    cout<<endl<<"The elements transversed in Ineorder transversal is "<<endl;
    printInordertransversal(root);

    cout<<endl<<"The elements transversed in postorder transversal is "<<endl;
    printPostordertransversal(root);


    return 0;


}

