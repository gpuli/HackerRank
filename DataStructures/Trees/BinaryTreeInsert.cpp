/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * insert(node * root, int value)
{
    node* newnode = new node();
    newnode->data = value;
    newnode->left = NULL;
    newnode->right = NULL;
    if(root == NULL)
        return newnode;
    node* curr = root;
    while(true) 
    {
        if(curr->data > value && curr->left != NULL)
            curr = curr->left;
        else if(curr->data < value && curr->right != NULL)
            curr = curr->right;
        else if(curr->data > value && curr->left == NULL) 
        {
            curr->left = newnode;
            break;
        }
        else 
        {
            curr->right = newnode;
            break;
        }
    }
    return root;
}
