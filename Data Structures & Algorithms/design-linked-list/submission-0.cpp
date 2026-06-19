class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

class MyLinkedList {
public:
    Node* head;
    Node* tail;
    int size;
    MyLinkedList() {
        head=NULL;
        size=0;
    }
    
    int get(int index) {
        if(index>=size || index<0)  return -1;
    
        Node* current=head;
        for(int i=0;i<index;i++){
            current=current->next;
        }
        return current->val;
    }
    
    void addAtHead(int val) {
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;   
        else{
        temp->next=head;
        head=temp;
        }
        size++;
    }
    
    void addAtTail(int val) {
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;   
        else{
        tail->next=temp;
        tail=temp;
        }
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if (index < 0 || index > size) return;
        if (index == 0) {
            addAtHead(val);
            return;
        }
        if (index == size) {
            addAtTail(val);
            return;
        }
        Node* temp=new Node(val);
        Node* curr=head;
        for(int i=0;i<index-1;i++){
            curr=curr->next;
        } 
        temp->next = curr->next;
        curr->next = temp;
        size++;
    }
    
    void deleteAtIndex(int index) {
        if(index>=size || index<0)  return ;
        if (index == 0) {
            Node* temp = head;
            head = head->next;
            if (size == 1) {
                tail = NULL; // List becomes empty
            }
            delete temp;
            size--;
            return;
        }
        Node* curr=head;
        for(int i=0;i<index-1;i++){
            curr=curr->next;
        }
        curr->next=curr->next->next;
          if (index == size - 1) {
            tail = curr;
        }
        
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */