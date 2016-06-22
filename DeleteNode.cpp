/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
    Node *temp = head;
    if(temp->next == NULL)
        return NULL;
    else{
        for(int i =0; i< position -1; i++)
            temp = temp->next;
        if(position == 0)
            head = temp->next;
        else
            temp->next = temp->next->next;
        
    }
    return head;
  // Complete this method
}
