#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* prev;
    node* next;

    node(){
        this->data=0;
        this->next=NULL;
        this->prev=NULL;
    }
    node(int data){
          this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
    ~node(){
        cout<<"node with value: "<<this->data<<" deleted"<<endl;
    }
};
void print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int length(node* head){
    node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

// insert before or at head
void insertAtHead(node* &head,node* &tail,int data){
    if(head==NULL){
        node* newnode=new node(data);
        head=newnode;
        tail=newnode;
        return;
    }
    node* newnode=new node(data);
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}
// insert after head and at a tail
void insertAtTail(node* &tail, node* &head,int data){
     if(head==NULL){
        node* newnode=new node(data);
        head=newnode;
        tail=newnode;
        return;
    }
    node* newnode=new node(data);
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}
// insert at position
void insertAtPosition(int data, int position,node* &head,node* &tail){
    if(head==NULL){
        node* newnode=new node(data);
        head=newnode;
        tail=newnode;
        return;
    }
    if(position==0){
        insertAtHead(head,tail,data);
        return;
    }
    int len=length(head);
    if(position>=len){
        insertAtTail(tail,head,data);
        return;
    }
    int i=1;
    node* prev=head;
        while(i<position-1){
        prev=prev->next;
        i++; 
    }
    node* curr = prev->next;

    node* newnode=new node(data);
    newnode->next=curr;
    prev->next=newnode;
    newnode->prev=prev;
    curr->prev=newnode;
    
}
// deleting node
void deletenode(int position, node* &head,node* &tail){
    if(position==1){
        node* temp=head;
        head->next->prev=NULL;
        head=head->next;
        temp->next=NULL;
        delete temp;
        return;
    }
    int len=length(head);
     if(position == len){
        int i = 1;
        node* prev = head;
        while(i < len- 1){  // len-1 tak jao (second last node tak)
            prev = prev->next;
            i++;
        }
    node* temp=tail;
     prev->next = NULL;
     tail=prev;
     temp->prev=NULL;
     delete temp; 
     return;
    }

     int i = 1;
    node* prev = head;
    
    // Position se pehle wale node tak pahuncho
    while(i < position - 1){  // position-1 tak jao
        prev = prev->next;
        i++;
    }
    
    // Current node jo delete karni hai
    node* curr = prev->next;
    prev->next=curr->next;
    if(curr->next != NULL) {  // Agar last node nahi hai
        curr->next->prev = prev;  // Next node ka prev update karo
    }
    curr->next=NULL;
    curr->prev=NULL;
    delete curr;
}

int main(){

    node* head=NULL;
    node* tail=NULL;
     insertAtHead(head,tail,34);  // List: 34
    insertAtHead(head,tail,78);  // List: 78 -> 34
    insertAtTail(tail,head,4);// List: 78 -> 34 -> 4

     cout<<"Initial List: ";
    print(head);
    cout<<endl;
    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;
    
    //  insertAtPosition(101,4,head,tail);
    // cout<<endl;
    // print(head);
    // cout<<endl;
    // cout<<"head: "<<head->data<<endl;
    // cout<<"tail: "<<tail->data<<endl;

    cout<<endl;
    cout<<"After deletion :";
    deletenode(2,head,tail);
    print(head);



    // node* first=new node(20);
    // node* second=new node(30);
    // node* third=new node(40);
    // node* fourth=new node(50);
    // node* fifth=new node(60);
    // node* sixth=new node(45);

    // first->next=second;
    // second->next=third;
    // second->prev=first;
    // third->next=fourth;
    // third->prev=second;
    // fourth->next=fifth;
    // fourth->prev=third;
    // fifth->next=sixth;
    // fifth->prev=fourth;
    // sixth->prev=fifth;

   // print(first);

    
}
