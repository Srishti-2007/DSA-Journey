#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    // Default constructor
    node(){
        this->data=0;
        this->next=NULL;
    }
    
    // Parameterized constructor
    node(int data){
        this->data=data;
        this->next=NULL;
    }

    // Node destructor - sirf message print karega, recursive deletion nahi karega
    ~node(){
        cout<<"node with value: "<<this->data<<" deleted"<<endl;
    }
};

// Print function - puri linked list ko print karta hai
void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

// Insert new node to the left of head node (beginning mein)
void insertathead(node* &head, node* &tail, int data){
    // Agar list empty hai
    if(head==NULL){
        node* newnode=new node(data);
        head=newnode;
        tail=newnode;
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

// Insert new node to the right of tail node (end mein)
void inserattail(node* &tail, node* &head, int data){
    // Agar list empty hai
    if(head==NULL){
        node* newnode=new node(data);
        head=newnode;
        tail=newnode;
    }
    else {
        // step1: new node banao
        node* newnode=new node(data);
        // step2: tail ka next new node ko point karega
        tail->next=newnode;  
        // step3: tail ko update karo
        tail=newnode;
    }
}

// Find length of linked list
int findlength(node* &head){
    int len=0;
    node* temp=head;
    while(temp != NULL){
        temp=temp->next;
        len++;
    }
    return len;
}

// Insert at any position
void insertAtPosition(int data, int position, node* &head, node* &tail){
    // Agar list empty hai
    if(head==NULL){
        node* newnode=new node(data);
        head=newnode;
        tail=newnode;
        return;
    }
    
    // Agar position 0 hai, to head pe insert karo
    if(position==0){
        insertathead(head,tail,data);
        return;
    }
    
    int len = findlength(head);
    
    // Agar position length se zyada hai, to tail pe insert karo
    if(position>=len){
        inserattail(tail,head,data);
        return;
    }
    
    // Middle position pe insert karne ke liye
    // step1: find position - prev aur curr nikalo
    int i=1;
    node* prev=head;
    while(i<position){
        prev=prev->next;
        i++;
    }
    node* curr = prev->next;
    
    // step2: new node banao
    node* newnode=new node(data);
    
    // step3: new node ka next curr ko point karega
    newnode->next=curr;
    
    // step4: prev ka next new node ko point karega
    prev->next=newnode;
}

// Delete node at given position
void deletenode(int position, node* &head, node* &tail){
    // Agar list empty hai
    if(head==NULL){
        cout<<"Cannot delete, LL is empty"<<endl;
        return;
    }
    
    // CASE 1: Deleting first node (position 1)
    if(position==1){
        node* temp = head;
        head = head->next;
        
        // Agar list mein sirf ek hi node tha
        if(head == NULL){
            tail = NULL;
        }
        
        // Connection tod do aur delete karo
        temp->next = NULL;
        delete temp;
        return;
    }
    
    // List ki length nikalo
    int len = findlength(head);
    
    // Invalid position handle karo
    if(position > len){
        cout<<"Invalid position"<<endl;
        return;
    }
    
    // CASE 2: Deleting last node
    if(position == len){
        // Prev node tak pahuncho (last se pehle wala)
        int i = 1;
        node* prev = head;
        while(i < len - 1){  // len-1 tak jao (second last node tak)
            prev = prev->next;
            i++;
        }
        
        // Last node ko temporary pointer mein store karo
        node* temp = tail;
        
        // Prev ka next NULL karo (ye ab last node hai)
        prev->next = NULL;
        
        // Tail ko update karo
        tail = prev;
        
        // Purane last node ko delete karo
        delete temp;
        return;
    }
    
    // CASE 3: Deleting middle node
    int i = 1;
    node* prev = head;
    
    // Position se pehle wale node tak pahuncho
    while(i < position - 1){  // position-1 tak jao
        prev = prev->next;
        i++;
    }
    
    // Current node jo delete karni hai
    node* curr = prev->next;
    
    // Prev ka next, curr ke next ko point karega (connection bypass)
    prev->next = curr->next;
    
    // Current node ka connection tod do
    curr->next = NULL;
    
    // Current node ko delete karo
    delete curr;
}


int main() {
    // Head aur tail pointers initialize karo
    node* head=NULL;
    node* tail=NULL;
    
    // List mein nodes insert karo
    insertathead(head,tail,34);  // List: 34
    insertathead(head,tail,78);  // List: 78 -> 34
    inserattail(tail,head,4);    // List: 78 -> 34 -> 4
    
    // List print karo
    cout<<"Initial List: ";
    print(head);
    cout<<endl;
    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;
    
    // Insert at position test (uncomment to use)
    // insertAtPosition(101,2,head,tail);
    // cout<<endl;
    // print(head);
    // cout<<endl;
    // cout<<"head: "<<head->data<<endl;
    // cout<<"tail: "<<tail->data<<endl;
    
    // Position 1 delete karo (first node)
    cout<<"\nDeleting node at position 1..."<<endl;
    deletenode(1,head,tail);
    
    cout<<"\nAfter deletion: ";
    print(head);
    cout<<endl;
    
    // Head aur tail check karo
    if(head != NULL)
        cout<<"head: "<<head->data<<endl;
    else
        cout<<"head: NULL"<<endl;
        
    if(tail != NULL)
        cout<<"tail: "<<tail->data<<endl;
    else
        cout<<"tail: NULL"<<endl;
    
    // Manual node creation example (commented out)
    // node* first =new node(10);
    // node* second=new node(20);
    // node* third=new node(30);
    // node* fourth=new node(40);
    // node* fifth=new node(50);

    // first->next=second;
    // second->next=third;
    // third->next=fourth;
    // fourth->next=fifth;

    // cout<<"Printing the LL"<<endl;
    // print(first);
    
    return 0;
}