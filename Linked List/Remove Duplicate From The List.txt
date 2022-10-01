SinglyLinkedListNode *removeDuplicates(SinglyLinkedListNode *head)
{
//write your code here
  SinglyLinkedListNode *ptr=head;
    
    while(ptr!=NULL){
    if(ptr->next!=NULL && ptr->data==ptr->next->data)
    {
      ptr->next=ptr->next->next;
    }  
    else{
      ptr=ptr->next;
    }
    
    }
    return head;
}

