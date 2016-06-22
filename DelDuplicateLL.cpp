/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
    Node* temp;
    Node* t;
    t = head;
    temp = t;
    while(t!=NULL){
        while(temp!=NULL && temp->data == t->data){
            temp = temp->next;
        }
        t->next = temp;
        t = t->next;
        temp = t;
    }
    return head;
  // This is a "method-only" submission. 
  // You only need to complete this method. 
}
