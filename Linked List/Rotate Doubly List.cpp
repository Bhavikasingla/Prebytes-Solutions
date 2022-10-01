// Complete the rotateDoublyList function below.

/*
For your reference:

SinglyLinkedListNode {
int data;
SinglyLinkedListNode* next;
SinglyLinkedListNode* prev;
};
To create a new node use the below constructor
SinglyLinkedListNode(int node_data)
*/

SinglyLinkedListNode *rotateDoublyList(SinglyLinkedListNode *head,int k)
{
  int n=1;
  SinglyLinkedListNode *ptr = head;
  SinglyLinkedListNode *tail = head;
  
  while(tail->next != NULL){
    if(n < k){
      ptr = ptr->next;
      n++;
    }
    tail = tail ->next;
  }
  tail->next = head;
  head->prev = tail;
  head = ptr->next;
  ptr->next = NULL;
  head->prev = NULL;
  return head;
}
