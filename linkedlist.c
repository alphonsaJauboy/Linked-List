#include <stdio.h>
#include <stdlib.h>
struct list{
    int n;
    struct list* next;
};
struct list* createNode(int a){
    struct list* node=(struct list*)malloc(sizeof(struct list));
    node->n=a;
    node->next=NULL;
    return node;
}
void print(struct list*head){
    struct list*temp=head;
    while(temp!=NULL){
        printf("%d -> ",temp->n);
        temp=temp->next;
    }
    printf("NULL\n");
}
struct list* insertAtEnd(struct list* head,int data){
    struct list* newNode=createNode(data);
    struct list *temp=head;
    if(head==NULL){
        return newNode;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->next=NULL;
    return head;
}
int main() {
    struct list* head = createNode(10);
    head->next = NULL;
    print(head);
    head = insertAtEnd(head, 12);
    print(head);
    return 0;
}
  
