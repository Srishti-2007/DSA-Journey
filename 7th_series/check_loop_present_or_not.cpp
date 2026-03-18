#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
int length(node* &head){
    node* temp=head;
    int len=0;
    while(temp!=0){
        temp=temp->next;
        len++;
    }
    return len;
}
void print(node* &head)
{
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
bool checkForLoop(node* &head){
    if(head==NULL){
        cout<<"LL is empty";
        return false;
    }
    node* slow=head;
    node* fast=head;
    while (fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        if(slow==fast){
            //loop present
            return true;
        }
    }
    return false;
    
}
node* statingPointLoop(node* &head){
    if(head==NULL){
        cout<<"LL is empty";
        return NULL;
    }
    node* slow=head;
    node* fast=head;
    while (fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        if(slow==fast){
            //loop present
            break;
        }
    }
  slow = head;  // ✅ Reset slow to head
while(slow != fast){
    slow = slow->next;
    fast = fast->next;  // Move both by ONE step
}
   return slow;
}
node* removeLoop(node* &head){
    if(head==NULL){
        cout<<"LL is empty";
        return NULL;
    }
    node* slow=head;
    node* fast=head;
    while (fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        if(slow==fast){
            //loop present
            break;
        }
    }
    slow=head;
     node * prev=fast;
    while(slow != fast){
        prev=fast;
    slow = slow->next;
    fast = fast->next;  // Move both by ONE step
}
prev->next=NULL;
   //return slow;
}

int main() {
       node* head=new node(10);
     node* second=new node(20);
     node* third=new node(30);
    node* fourth=new node(40);
    node* fifth=new node(50);
    node* sixth=new node(910);
    node* seventh=new node(70);
    node* eighth=new node(80);
    node* ninth=new node(90);

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
        sixth->next=seventh;
    seventh->next=eighth;
    eighth->next=ninth;
    ninth->next=fourth;
     cout<<endl;
    cout<<"Normal LL"<<endl;
    // print(head);
    cout<<endl;

    cout<<"Loop is present or not "<<checkForLoop(head)<<endl;
    cout<<"Starting point of loop "<<statingPointLoop(head)->data<<endl;
    removeLoop(head);
    print(head);

}