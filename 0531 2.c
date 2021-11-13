// Linked List
#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node* next;
} Node;

typedef struct list {
    struct node* head;
    int size;
} List;

void printList(List list) {
    Node* ptr = list.head;
    while(ptr != NULL) {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

void insertHead(List* list, int data) {
    Node* n0 = (Node*)malloc(sizeof(Node));
    n0->data = data;
    n0->next = list->head;
    list->head = n0;
    list->size++;    
}

int main() {
    List myList = {NULL, 0};
    printList(myList); //NULL
    // 新增第一個節點
    insertHead(&myList, 10);
    printList(myList); // 10->NULL
    // 新增第二個節點
    insertHead(&myList, 20);
    printList(myList); // 20->10->NULL
    // 新增第三個節點
    insertHead(&myList, 30);
    printList(myList); // 30->20->10->NULL
    return EXIT_SUCCESS;
}