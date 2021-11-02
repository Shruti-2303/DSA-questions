#include<iostream>
#include<vector>
using namespace std;
//Input : 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1

//Output : 1 2 4 5 7 3 6
class Node{
public:
    int data;
    Node * left;
    Node * right;

    Node(int data){
        int d = data;
        left = right = NULL;
    }
};
//Preorder Build of the Tree Root, Left, Right Tree
Node * buildTree(){

    int d;
    cin>>d;

    if(d==-1){
        return NULL;
    }

    Node * n = new Node(d);
    n->left = buildTree();
    n->right = buildTree();
    return n;
}

void printPreorder(Node *root){
    if(root==NULL){
        return;
    }
    cout<< root->data <<" ";
    printPreorder(root->left);
    printPreorder(root->right);
}

void printInorder(Node *root){
    if(root==NULL){
        return;
    }
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}

void printPostorder(Node *root){
    if(root==NULL){
        return;
    }
    printPostorder(root->left);
    printInorder(root->right);
    cout<<root->data<<" ";
}

/*to implement Level Order Traversal
Output:
1
2 3
4 5 6
7
*/

void levelOrderPrint(node*root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node * temp = q.front();
        if(temp==NULL){
            cout<<endl;
            q.pop();
            //insert a new null for the next level
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            q.pop();
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
    return;
}

node* levelOrderBuild(){

    int d;
    cin>>d;

    node* root = new node(d);

    queue<node*> q;
    q.push(root);

    while(!q.empty()){
        node* current = q.front();
        q.pop();

        int c1,c2;
        cin>>c1>>c2;

        if(c1!=-1){
            current->left = new node(c1);
            q.push(current->left);
        }
        if(c2!=-1){
            current->right = new node(c2);
            q.push(current->right);
        }
    }
    return root;
}


// Helper function: Height of tree
int height(node*root){
    if(root==NULL){
        return 0;
    }
    int h1 = height(root->left);
    int h2 = height(root->right);
    return 1 + max(h1,h2);
}

//Diameter

int diameter(node*root){
    //base case
    if(root==NULL){
        return 0;
    }

    //rec case
    int D1 = height(root->left) + height(root->right);
    int D2 = diameter(root->left);
    int D3 = diameter(root->right);

    return max(D1,max(D2,D3));
}

//---------Diameter Optimised-------------

class HDPair{
public:
    int height;
    int diameter;
};

HDPair optdiameter(node*root){
    HDPair p;

    if(root==NULL){
        p.height = p.diameter = 0;
        return p;
    }

    //otherwise
    HDPair Left = optdiameter(root->left);
    HDPair Right = optdiameter(root->right);

    p.height = max(Left.height,Right.height);

    int D1 = Left.height + Right.height;
    int D2 = Left.diameter;
    int D3 = Right.diameter;

    p.diameter = max(D1,max(D2,D3));
    return p;
}

//Root to leaf

void printRoot2LeafPaths(Node* root,vector<int> &path){

    if(root==NULL){
        return;
    }

    if(root->left==NULL and root->right==NULL){
        //print the vector
        for(int node:path){
            cout<<node<<"->";
        }
        cout<<root->data<<" ";
        cout<<endl;
        return;
    }

    //rec case
    path.push_back(root->data);
    printRoot2LeafPaths(root->left,path);
    printRoot2LeafPaths(root->right,path);
    //backtracking
    path.pop_back();
    return;
}

int main(){

    Node * root = buildTree();
    printPreorder(root);
    cout<<endl;
    printInorder(root);
    cout<<endl;
    printPostorder(root);
    cout<<endl;
}