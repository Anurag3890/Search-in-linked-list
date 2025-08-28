#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head=NULL;

void insert_end(int val){
    struct Node* newnode=malloc(sizeof(struct Node));
    newnode->data=val; newnode->next=NULL;
    if(!head){head=newnode;return;}
    struct Node* temp=head;
    while(temp->next)temp=temp->next;
    temp->next=newnode;
}

int search(int val){
    struct Node* temp=head;
    int pos=0;
    while(temp){
        if(temp->data==val)return pos;
        temp=temp->next; pos++;
    }
    return -1;
}

int main(){
    insert_end(10); insert_end(20); insert_end(30);
    printf("%d\n",search(20));
    printf("%d\n",search(40));
    return 0;
}
