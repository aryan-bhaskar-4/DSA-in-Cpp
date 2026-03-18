#include<iostream>
#include<vector>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

static int idx = -1;

Node* buildTree(vector<int> nodes){
    idx++;
    if(nodes[idx] == -1){
        return NULL;
    }

    Node* curr = new Node(nodes[idx]);
    curr->left = buildTree(nodes);
    curr->right = buildTree(nodes);

    return curr;
}

int height(Node* root){
    if(root == NULL){
        return 0;
    }

    int left = height(root->left);
    int right = height(root->right);

    return max(left,right) + 1;
}

int diameter(Node* root){
    if(root == NULL){
        return 0;
    }

    int currdiam = height(root->left) + height(root->right) + 1;
    int leftdiam = diameter(root->left);
    int rightdiam = diameter(root->right);

    return max(currdiam , max(leftdiam,rightdiam));
}

int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(nodes);

    int dm = diameter(root);
    cout << dm << endl;
    return 0;
}