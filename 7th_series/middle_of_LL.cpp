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
void middlenode(node* &head){
    if(head==NULL) return;
    node* slow=head;
    node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<slow->data;
}
int main(){
    node* head=NULL;
    insertathead(head,34);  // List: 34
    insertathead(head,78);  // List: 78 -> 34
    insertathead(head,98);  // List: 98->78 -> 34
    insertathead(head,15);  // List: 15->98->78 -> 34
    insertathead(head,30);  // List: 30->15->98->78 -> 34

    middlenode(head); 
}