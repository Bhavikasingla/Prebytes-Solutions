bool palindromeLlist(SinglyLinkedListNode *head)
{
  SinglyLinkedListNode *ptr=head;
  int n=0;
  while(ptr!=NULL){
    n++;
    ptr=ptr->next;
  }
  int ar[n];
  ptr=head;
  for(int i=0;i<n;i++){
    ar[i]=ptr->data;
    ptr=ptr->next;
  }
  int i=0;
  int j=n-1;
  int check=0; 
  while(j>i){
    if(ar[i]!=ar[j]){
        check=1;
        break;
    }
    i++;
    j--;
  }
  if(check==0){
   return true;
  }
  else{
    return false;
  }

}
