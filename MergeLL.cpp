/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
    Node* t1 = headA;
    Node* t2 = headB;
    if(t1 == NULL)
        return t2;
    if(t2 == NULL)
        return t1;
    Node* temp;
    Node* t;
    if(t1->data < t2->data) {
        temp = t1->next;
        t = t1;
    }
    else {
        t = t2;
        t2 = t1;
        t1 = t;
        temp = t1->next;
        }
    while(t2 != NULL && temp != NULL){
        if(temp->data < t2->data){
            t1->next = temp;
            t1 = temp;
            temp = temp->next;
        }
        else 
            {
            t1->next = t2;
            t2= t2->next;
            t1= t1->next;
        }
    }
    if(temp == NULL)
        t1->next = t2;
    else if(t2 == NULL)
        t1->next = temp;
    return t;
}
