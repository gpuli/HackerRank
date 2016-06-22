#include <queue>


/*
struct node
{
    int data;
    node* left;
    node* right;
}*/

void LevelOrder(node * root)
{
    if(root == NULL)
        return;
    queue<node*> myQ;
    myQ.push(root);
    while(!myQ.empty())
    {
        node* current = myQ.front();
        cout << current->data << " ";
        if(current->left!=NULL)
            myQ.push(current->left);
        if(current->right != NULL)
            myQ.push(current->right);
        myQ.pop();
    }
  
}
