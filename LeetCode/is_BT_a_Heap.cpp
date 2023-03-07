// Structure of node
#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
int countNodes(struct Node*root){
        if(root==NULL){
            return 0;
        }
        
        return (1 + countNodes(root->left) + countNodes(root->right));
    }
 
    bool isCBT(struct Node*root,int index,int totalNodes){
        if(root==NULL){
            return true;
        }
        if(index>=totalNodes){
            return false;
        }
        
        bool left=isCBT(root->left,2*index+1,totalNodes);
        bool right=isCBT(root->right,2*index+2,totalNodes);
        
        return (left && right);
    }
    
    bool isMaxheap(struct Node*root){
        if(root->left==NULL && root->right==NULL){
            return true;
        }
        if(root->right==NULL){
            return (root->data > root->left->data);
        }
        
        bool left=isMaxheap(root->left);
        bool right=isMaxheap(root->right);
        
        return (root->data > root->left->data && root->data > root->right->data && left && right);
    }

    class Solution {
        public:
       bool isHeap(struct Node* tree) {
        
        int index=0;
        int totalNodes=countNodes(tree);
        
        if(isCBT(tree,index,totalNodes) && isMaxheap(tree)){
            return true;
        }
        return false;
       
    }
    };
    int main(){
        string treestring;
        getline(cin,treestring);
        Solution ob;
        Node*root ;
        if(ob.isHeap(root)){
           cout<<1<<endl;
        }
        else cout<<0<<endl;

    return 0;
    }