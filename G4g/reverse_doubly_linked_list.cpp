void reverse(Node **head_ref)
{
  // Your code goes here
  Node* curr = *head_ref;
  Node* temp = NULL;
  
  while(curr!=NULL){
      temp=curr->prev;
      curr->prev=curr->next;
      curr->next=temp;
      curr=curr->prev;
  }
  
  if(temp!=NULL){
      *head_ref = temp->prev;
  }
}