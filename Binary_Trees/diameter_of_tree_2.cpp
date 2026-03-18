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

pair<int,int> diameter(Node* root){
    if(root == NULL){
        return make_pair(0,0);
    }

    pair<int,int> leftInfo = diameter(root->left);
    pair<int,int> rightInfo = diameter(root->right);

    int currdiam = leftInfo.second + rightInfo.second + 1;
    int finaldiam = max(currdiam , max(leftInfo.first , rightInfo.first));
    int finalht = max(leftInfo.second, rightInfo.second) + 1;

    return make_pair(finaldiam , finalht);
}

int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(nodes);

    pair<int,int> dm = diameter(root);
    cout << dm.first << endl;
    return 0;
}