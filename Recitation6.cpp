#include <iostream>;
using namespace std;

struct TreeNode{
int key;
TreeNode *left;
TreeNode *right;
TreeNode *parent;
};

TreeNode* findMinimum(TreeNode *temp){
     TreeNode *minimum=NULL;
    //std::string title = temp->title
 while(temp!=NULL){
        minimum=temp;
        temp=temp->left;
 }
return minimum;
}

TreeNode* findNode(TreeNode *root, int key){
    TreeNode *temp=root;
    while(temp!=NULL){
        if(temp->key < key){
            temp = temp->left;
        }
        if(temp->key > key){
            temp = temp->right;
        }
        if(temp->key == key){
            return temp;
        }
    }
}


void deleteAndReplaceMinRight(TreeNode *root, int key){

TreeNode *node=NULL;
node = findNode(root, key);




}


int main(){

}
