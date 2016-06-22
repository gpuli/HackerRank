/*
  Detect loop in a linked list 
  List could be empty also
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int HasCycle(Node* head)
{
    if(head == NULL)
        return 0;
    Node* tort= head;
    Node* hare = head;
    while (hare && hare->next )
    {
        tort = tort->next;
        hare  = hare->next->next;
        if (tort == hare)
        {
           return 1;
        }
    }
    return 0;
    
   // Complete this function
   // Do not write the main method
}
