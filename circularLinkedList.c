#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertAtHead(struct Node** tail, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    //list is empty
    if (*tail == NULL) {
        newNode->next = newNode;//pointing to itself
        *tail = newNode;
        return;
    }
    //List not empty
    newNode->next = (*tail)->next;
    (*tail)->next = newNode;
}

void insertAtTail(struct Node** tail, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    //list is empty
    if (*tail == NULL) {
        newNode->next = newNode;
        *tail = newNode;
        return;
    }
    //list not empty
    newNode->next = (*tail)->next;
    (*tail)->next = newNode;
    *tail = newNode;
}

void delete(struct Node** tail, int pos) {
    if (*tail == NULL) {
        printf("List is empty.\n");
        return;
    }
    //List Not empty . Now delete
    struct Node* prev = *tail;
    struct Node* curr = prev->next;
    int cnt = 1;
    while(cnt < pos) {
        prev = curr;
        curr = curr->next;
        cnt++;
    }
    prev->next = curr->next;
    //for 1 node
    if(prev == curr)
    *tail = NULL;
    //for greater than equals 2 nodes
    else if(*tail == curr)
    *tail = prev;
    curr->next = NULL;
    free(curr);
}

void display(struct Node* tail) {
    if (tail == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node* temp = tail;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != tail);
    printf("\n");
}

int main() {
    struct Node* tail = NULL;
    int choice, value, pos;

    do {
        printf("1. Insert at head\n");
        printf("2. Insert at tail\n");
        printf("3. Delete \n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                insertAtHead(&tail, value);
                break;
            case 2:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                insertAtTail(&tail, value);
                break;
            case 3:
                printf("Enter the position to delete : ");
                scanf("%d",&pos);
                delete(&tail, pos);
                break;
            case 4:
                display(tail);
                break;
            case 5:
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 5);
    //memory deallocation
    struct Node* temp = tail;
    do{
        struct Node* curr = temp;
        temp = temp->next;
        free(curr);
    }while(temp!=tail);
    return 0;
}
