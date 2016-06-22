/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
    Node * t1 = head;
    if(t1 == NULL)
        return head;
    Node *t2 = t1->next;
    if(t2 == NULL)
        return head;
    Node *t3 = t2->next;
    if(t3==NULL){
        head = t2;
        t2->next = t1;
        t1->next = NULL;
        return head;
    }
    t1->next = NULL;
    while(t3->next != NULL){
        t2->next = t1;
        t1 = t2;
        t2 = t3;
        t3= t3->next;
        }
    head = t3;
    t3->next = t2;
    t2->next = t1;
    return head;
  // Complete this method
}
