#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};

void insertAtHead(struct Node** head, struct Node** tail, int d){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = d;
    temp->prev = NULL;
    temp->next = NULL;
    if(*head == NULL){
        *head = temp;
        *tail = temp;
    }
    else{
        temp->next=*head;
        (*head)->prev=temp;
        *head=temp;
    }
}

void insertAtTail(struct Node** head, struct Node** tail, int d){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = d;
    temp->prev = NULL;
    temp->next = NULL;
    if(*head == NULL){
        *head = temp;
        *tail = temp;
    }
    else{
        (*tail)->next = temp;
        temp->prev = *tail;
        *tail = temp;
    }
}

void deleteAtPos(struct Node** head, struct Node** tail, int pos){
    //deleting first or start node
    if(pos==1){
        struct Node* temp = *head;
        temp->next->prev= NULL;
        *head=temp->next;
        temp->next= NULL;
        free(temp);
    }
    else{
        struct Node* current = *head;
        struct Node* previous = NULL;
        int cnt=1;
        while(cnt < pos){
            previous=current;
            current=current->next;
            cnt++;
        }
        current->prev= NULL;
        previous->next = current->next;
        current->next = NULL;
        free(current);
        if(previous->next==NULL){
            *tail=previous;
        }
    }
}

void display(struct Node* head){
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int choice,value,pos;
    struct Node* head = NULL;
    struct Node* tail = NULL;
    do{
        printf("Enter 1 to insert at head\n");
        printf("Enter 2 to insert at tail\n");
        printf("Enter 3 to delete\n");
        printf("Enter 4 to display\n");
        printf("Enter 5 to exit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1 :
                printf("Enter the value to insert : ");
                scanf("%d",&value);
                insertAtHead(&head,&tail,value);
                break;
            case 2 :
                printf("Enter the value to insert : ");
                scanf("%d",&value);
                insertAtTail(&head,&tail,value);
                break;
            case 3 :
                printf("Enter the position to delete : ");
                scanf("%d",&pos);
                deleteAtPos(&head,&tail,pos);
                break;
            case 4 :
                display(head);
                break;
            case 5 :
                break;
            default :
                printf("Wrong Choice!\n");
        }
    }while(choice!=5);
    return 0;
}