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
int main(){
    struct list* head=createNode(10);
    struct list* second=createNode(20);
    head->next=second;
    second->next=NULL;
    return 0;
}
