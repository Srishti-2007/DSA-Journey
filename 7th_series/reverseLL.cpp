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

    node(){
        this->data=0;
        this->next=NULL;
    }
};
int length(node* &head);
node* reverse(node* &prev , node* &curr){
    //bse case
    if(curr==NULL){
        return prev;
    }
    // 1 case solve then recursion will take care
    node* forward =curr->next;
    curr->next=prev;
    reverse(curr,forward);
}
node* reverseKNodes(node* &head,int k){
    if(head==NULL){
        cout<<"LL is empty"<<endl;
        return NULL;
    }
    int len=length(head);
    if(k>len){
        // cout<<" Enter valid value of key";
        return head;
    }

    // it means number of nodes in LL is >= k
    // step 1 : reverse first k nodes of LL
    
    node* prev=NULL;
    node* curr = head;
    node* forward;
    int count=0;
    while(count<k){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        count++;
    }

    //step 2
    if(forward!=NULL){
        // we still have nodes left to reverse
        node* recursionKaAns=head->next=reverseKNodes(forward,k); 
        head->next=recursionKaAns;
    }

    // step 3
    return prev;
    
}
node* getmiddle(node* &head){
    if(head==NULL){
        cout<<"LL is empty";
        return head;
    }
    if(head->next==NULL){
        // only 1 node in LL
        return head;
    }
    // LL have > 1 nodes
    node* slow=head;
    node* fast=head;
    // node* fast=head->next; (for even or choice of middle)

    while(slow !=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
    }
    return slow;
}
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
int main() {
    node* head=new node(10);
     node* second=new node(20);
     node* third=new node(30);
    node* fourth=new node(40);
    node* fifth=new node(50);
    node* sixth=new node(60);

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
     cout<<endl;
    cout<<"Normal LL"<<endl;
    print(head);
    cout<<endl;

    cout<<"Reverse by K nodes "<<endl;
    head=reverseKNodes(head,3);
    print(head);


    // cout<<"Reverse LL"<<endl;
    //   node* prev =NULL;
    //   node* curr =head;
    //   head=reverse(prev,curr);
    //   cout<<endl;
    //   print(head);
    //   cout<<endl;


    //cout<<"Middle node is: "<<getmiddle(head)->data<<endl;
      return 0;
}