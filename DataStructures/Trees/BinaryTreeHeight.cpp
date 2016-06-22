
/*The tree node has data, left child and right child 
struct node
{
    int data;
    node* left;
    node* right;
};

*/

  int height(node * root)
{
    int temp =0;
    if(root == NULL)
        return 0;
    else
        temp = temp + max(height(root->left),height(root->right));    
    temp++;
    return temp;
    
}

  
