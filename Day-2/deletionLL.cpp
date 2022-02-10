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

void deleteFromEnd(node* &head){
    node *curr = head;
    while(curr -> next -> next!= NULL){
    curr = curr -> next;
    }
    node *temp = curr -> next;
    curr -> next = NULL;
    free(temp);
    return;
}

void deleteFromBegining(node* &head){
    node *temp = head;
    head = head -> next;
    free(temp);
    return;
}

void deletionAfterNode(node* &head,int loc){
    node *curr = head;
    while(curr -> data!= loc){
        curr = curr -> next;
    }
    node *temp = curr -> next;
    curr -> next = temp -> next;
    free(temp);
    return;
}

void deletionBeforeNode(node* &head,int loc){
    node *curr = head;
    while(curr -> next -> next -> data!= loc){
        curr = curr -> next;
    }
    node *temp = curr -> next;
    curr -> next = temp -> next;
    free(temp);
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
    insert(head,9);
    insert(head,10);
    insertAtBegining(head,1);
    insertBeforeNode(head,3,6);
    insertAfterNode(head,4,7);
    viewLL(head);
    cout<<endl<<"After deletion from end: ";
    deleteFromEnd(head);
    viewLL(head);
    cout<<endl<<"After deletion from begining: ";
    deleteFromBegining(head);
    viewLL(head);
    cout<<endl<<"Deletion after 6: ";
    deletionAfterNode(head,6);
    viewLL(head);
    cout<<endl<<"Deletion before 7: ";
    deletionBeforeNode(head,7);
    viewLL(head);


    return 0;
}
