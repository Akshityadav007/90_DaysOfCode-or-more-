#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;
    node(int val){
        data = val;
        next = NULL;
    }
};

void insert(node* &head,int val){
    node *temp = new node(val);

    
    if(head == NULL){
        head = temp;
        return;
    }

    node *curr = head;
    while(curr -> next!= NULL){
    curr = curr -> next;
    }

    curr -> next = temp;
    return;
}

void insertAtBegining(node* &head,int val){
    node *temp = new node(val);

    if(head == NULL){
        head = temp;
        return;
    }

    temp -> next = head;
    head = temp;
    return;
}

void insertBeforeNode(node* &head,int loc,int val){
    node *temp = new node(val);

    node *curr = head;
    while(curr -> next -> data!= loc){
        curr = curr -> next;
    }
    temp -> next = curr -> next;
    curr -> next = temp;
    return;
}

void insertAfterNode(node* &head,int loc,int val){
    node *temp = new node(val);

    node *curr = head;
    while(curr -> data!= loc){
        curr = curr -> next;
    }
    temp -> next = curr -> next;
    curr -> next = temp;
    return;

}

void viewLL(node *&head){
    node *curr = head;
    while(curr-> next){
        cout<< curr->data << "->";
        curr = curr -> next;
    }
    cout<< curr-> data;
}

int main(){
    node *head = NULL;
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    insertAtBegining(head,1);
    insertBeforeNode(head,3,6);
    insertAfterNode(head,4,7);
    viewLL(head);

    return 0;
}
