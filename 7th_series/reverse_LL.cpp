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
void insertathead(node* &head,int data){
    // Agar list empty hai
    if(head==NULL){
        node* newnode=new node(data);
        head=newnode;
    }
    else {
        // step1: new node banao
        node* newnode=new node(data);
        // step2: new node ka next head ko point karega
        newnode->next=head;
        // step3: head ko update karo
        head=newnode;
    }
}
void reverse(node* &head){
    node* prev=NULL;
    node* curr=head;
    while(curr!=NULL){
        node* temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    head=prev;
}

// Print function - puri linked list ko print karta hai
node* print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return head;
}
int main(){
    node* head=NULL;
    insertathead(head,34);  // List: 34
    insertathead(head,78);  // List: 78 -> 34
    insertathead(head,98);  // List: 98->78 -> 34
    insertathead(head,15);  // List: 15->98->78 -> 34
    insertathead(head,30);  // List: 30->15->98->78 -> 34
    print(head);
    reverse(head);
    cout<<endl;
    cout<<"after reversing";
    cout<<endl;
    print(head);
}