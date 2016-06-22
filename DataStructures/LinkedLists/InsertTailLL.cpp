/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
    Node *temp = head;
    Node nu = new Node();
    nu.data = data;
    nu.next = NULL;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = nu;
    return head;
  // Complete this method
}
