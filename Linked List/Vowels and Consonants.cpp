SinglyLinkedListNode *arrangeVowCon(SinglyLinkedListNode *head)
{

      SinglyLinkedListNode *ptr=head;
      int n=0;
      while(ptr!=NULL){
        n++;
        ptr=ptr->next;
      }
      char arr1[n];
      char arr2[n];
      ptr=head;
      int k=0;
      int l=0;
      while(ptr!=NULL){
        if(ptr->data=='a'||ptr->data=='e'||ptr->data=='i'||ptr->data=='o'||ptr->data=='u'){
              arr1[k]=ptr->data;
              k++;
        }
        else{
          arr2[l]=ptr->data;
          l++;
        }
        ptr=ptr->next;
      }
      ptr=head;
      for(int i=0;i<k;i++){
        ptr->data=arr1[i];
        ptr=ptr->next;
      }
      for(int i=0;i<l;i++){
        ptr->data=arr2[i];
        ptr=ptr->next;
      }
      return head;
        
}
