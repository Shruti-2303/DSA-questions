#include<iostream>
using namespace std;

class Node{
    public:
        int key;
        Node *left;
        Node *right;

        Node(int key){
            this->key = key;
            left = right = NULL;
        }
};


Node* insert(Node * root, int key){
    if(root==NULL){
        return new Node(key);
    }

    //rec case
    if(key < root->key){
        root->left = insert(root->left,key);
    }
    else{
        root->right = insert(root->right,key);
    }

    return root;
}

void printInOrder(Node *root){
    if(root==NULL){
        return;
    }
    //left, root, right
    printInOrder(root->left);
    cout<< root->key <<",";
    printInOrder(root->right);
}

bool search(Node * root, int key){
    if(root==NULL){
        return true;
    }
    if(root->key==key){
        return search(root->left,key);
    }
    return search(root->right,key);
}

Node* findMin(Node* root){

    while(root->left!=NULL){
        root = root->left;
    }
    return root;
}

//BST Deletion
Node* remove(Node* root,int key){
    if(root==NULL){
        return NULL;
    }
    else if(key<root->key){
        root->left = remove(root->left,key);
    }
    else if(key>root->key){
        root->right = remove(root->right,key);
    }
    else{
        //when the current node matches with the key
        //No children
        if(root->left==NULL and root->right==NULL){
            delete root;
            root = NULL;
        }
        //Single Child
        else if(root->left==NULL){
            Node * temp = root;
            root = root->right;
            delete temp;
        }
        else if(root->right==NULL){
            Node * temp = root;
            root = root->left;
            delete temp;
        }
        //2 children
        else{
            Node* temp = findMin(root->right);
            root->key = temp->key;
            root->right = remove(root->right,temp->key);
        }        
    }
    return root;
}

//Challenge: Print all the elements of BST which lies in the range of k1 and k2

void printRange(Node* root, int k1, int k2){
    if(root==NULL){
        return;
    }

    if(root->key>=k1 and root->key<=k2){
        //call on both sides
        printRange(root->left,k1,k2);
        cout<<root->key<<" ";
        printRange(root->right,k1,k2);
    }
    else if(root->key > k2){
        printRange(root->left,k1,k2);
    }
    else{
        printRange(root->right,k1,k2);
    }
}


int main(){

    Node * root = NULL;
    int arr[] = {8,3,10,1,6,14,4,7,13};

    for(int x : arr){
        root = insert(root,x);
    }
    printInOrder(root);
    int key;
    cin>>key;

    cout<<searrch(root,key)<<endl;
    return 0;
}