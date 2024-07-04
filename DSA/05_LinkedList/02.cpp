#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtHead(Node* &head, int val){
    Node* n = new Node(val);

    if(head == NULL){
        n -> next = n;
        head = n;
        return; 
    }
    Node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    } 
    temp->next = n;
    n->next = head;
    head = n;
}

void insertAtTail(Node* &head, int val){
    if(head==NULL){
        insertAtHead(head, val);
        return;
    }
    Node* n = new Node(val);
    Node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}

void deleteAtHead(Node* &head){
    Node* temp = head;

    while(temp->next != head){
        temp= temp->next;
    }
    Node* toDelete = head;
    temp->next = head->next->next;
    head = head->next;
    delete toDelete;
}

void deletion(Node* &head, int pos){
    if(pos==1){
        deleteAtHead(head);
        return;
    }
    Node* temp = head;
    int count = 1;

    while(count != pos - 1){
        temp = temp->next;
        count++;
    }

    Node* toDelete = temp -> next;
    temp->next = temp ->next -> next;
    delete toDelete;
}

void display(Node* head){
    Node* temp = head;

    do{
    cout << temp->data << " -> ";
        temp=temp->next;  
    }
    while(temp!= head); cout << "NULL" << endl;
}

bool isCircular(Node* head){
    //empty list
    if(head==NULL) return true;

    Node* temp = head;
    while(temp!= NULL && temp != head){
        temp=temp->next;
    }
    if(temp == head){
        return true;
    }
    return false;
}

Node* floydDetectLoop(Node* head){
    if(head == NULL) return NULL;

    Node* slow = head;
    Node* fast = head;

    while(slow!= NULL && fast != NULL){
        slow = slow -> next;
        if(fast->next != NULL) fast = fast->next->next;

        if(slow == fast) return slow;

    }

    return NULL;
    
}

Node* getStartingNode(Node* head){
    if(head==NULL) return NULL;
    
    Node* intersection = floydDetectLoop(head);

    if(intersection==NULL) return NULL;
    
    //Initialize slow at head
    Node* slow = head;
    //Move slow and intersection one step
    while(slow!=intersection){
        slow=slow->next;
        intersection=intersection->next;
    }

    // return ?
    return slow;
    
}

void removeLoop(Node* head){

    if(head==NULL) return;

    Node* startOfLoop = getStartingNode(head);

    //create temp var, iterate it till the last node of the loop
    Node* temp = startOfLoop;

    while(temp->next != startOfLoop){
        temp=temp->next;
    }
    //point the next of last node to NULL
    temp->next = NULL;
}

int main(){
    Node* head = NULL;

    insertAtHead(head, 10);
    insertAtHead(head, 9);
    insertAtHead(head, 8);

    display(head);

}