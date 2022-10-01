void printMidElement(SinglyLinkedListNode *head)
{
//write your code here
struct SinglyLinkedListNode *single_ptr=head;
struct SinglyLinkedListNode *double_ptr=head;
if(head!=NULL)
{
  while(double_ptr!=NULL&&double_ptr->next!=NULL)
  {
    double_ptr=double_ptr->next->next;
    single_ptr=single_ptr->next;
  }
  cout<<single_ptr->data<<endl;
}


}
