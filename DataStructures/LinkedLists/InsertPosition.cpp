/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
    Node *add = new Node();
    add->data = data;
    Node *temp = head;
    if(head == NULL)
    {
        head = add;    
    }
    else
    {
        if(position ==0)
            {
            add->next = head;
            head = add;
            return head;
        }
        else{
        for(int i =0; i < position-1 ; i++)
         {
            temp = temp->next;   
         }
        
        add->next = temp->next;
        temp->next = add;
        }
    }
    return head;
  // Complete this method only
  // Do not write main function. 
}
