#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};



// struct Node* createNode(int data) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode->data = data;
//     newNode->next = NULL;
//     return newNode;
// }

// void reverse(struct Node** head){
//     int *ptr1 = *head;
//     int *ptr2 = **head->next;

// }


int main(){
    struct Node* head = NULL;
    // struct Node* secondnode = head->next;
    struct Node* head = (struct Node *)malloc(sizeof(struct Node));
    head->data = 1;
    head->next = NULL;

    struct Node* current = head; // Keep track of the last node

    // Create and link the remaining 9 nodes
    for (int i = 2; i <= 10; i++) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = i;
        newNode->next = NULL;
        current->next = newNode; // Link the previous node to the new node
        current = newNode;       // Move current to the newly added node
    }


    
}