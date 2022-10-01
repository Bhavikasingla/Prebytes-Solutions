SinglyLinkedListNode *reverseLinkedList(SinglyLinkedListNode *head)
{
//write your code here
  SinglyLinkedListNode *ptr=head;
  int c=0;
  while(ptr!=NULL){
    c++;
    ptr=ptr->next;
  }
  int arr[c];
  ptr=head;
  for(int i=0;i<c;i++){
    arr[i]=ptr->data;
    ptr=ptr->next;
  }
  ptr=head;
  int i=c-1;
  while(ptr!=NULL && i>=0){
    ptr->data=arr[i];
    ptr=ptr->next;
    i--;
  }
  return head;
}
