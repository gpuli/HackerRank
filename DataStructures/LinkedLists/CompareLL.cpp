/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
    Node *t1 = headA;
    Node *t2 = headB;
    int val = 1;
    while((t1 != NULL && t2 != NULL))
    {
        if(t1->data==t2->data)
        {
          t1 = t1->next;
          t2 = t2->next;
        }
        else
            {
            val = 0;
            break;
            
        }
    }
    if(val ==1)
    {
       if(t1 == t2 == NULL)
           val =0;
        else val =1;
    }
    return val;
    
  // This is a "method-only" submission. 
  // You only need to complete this method 
}
