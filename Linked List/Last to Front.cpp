SinglyLinkedListNode *lastElementFirst(SinglyLinkedListNode *head)
{
//write your code here
SinglyLinkedListNode *temp=head;
SinglyLinkedListNode *curr=head->next;
if(curr==NULL)
{
  return head;
}
while(curr->next!=NULL)
{
  curr=curr->next;
  temp=temp->next;
}
temp->next=NULL;
curr->next=head;
head=curr;

return head;
}
