// #include<stdio.h>
// #include<stdlib.h>

// struct Node {
//     int data;
//     struct Node *next;
// };



// // struct Node* createNode(int data) {
// //     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
// //     newNode->data = data;
// //     newNode->next = NULL;
// //     return newNode;
// // }

// // void reverse(struct Node** head){
// //     int *ptr1 = *head;
// //     int *ptr2 = **head->next;

// // }

// // Function to print the LinkedList
// void print(struct Node* head) {
//     struct Node* temp = head;
//     while (temp != NULL) {
//         printf("%d -> ", temp->data);
//         temp = temp->next;
//     }
//     printf("NULL\n");
// }

// struct Node* reverse(struct Node** head){
//     struct Node* prev = NULL;
//     struct Node* current = *head;
//     struct Node* nextNode;
    

//     // if (temp->next == NULL){
//     //     temp->next = *head;
//     //     printf("Assigned last node to point to head!\n");
//     // }

    
//     // printf("Assigned first node to point to null!");

    
//     // temp = nextNode->next;
//     // nextNode->next = currentreverse;
//     // currentreverse = temp->next;
     
    

//     while (current != NULL)
//     {   
//         nextNode = current->next;
//         current->next = prev;
//         prev = current;
//         current = nextNode;
        

//         // struct Node* nextNode = currentreverse->next;
//         // currentreverse->next = temp;
//         // temp = nextNode->next;
//         // nextNode->next = currentreverse;
//         // temp->next = nextNode;
//         // currentreverse = 

//         // currentreverse = currentreverse->next;
        
        
        
//     }

//     *head = prev;
    
//     // temp1->next = NULL;
//     // temp2->next = temp1;




// }


// int main(){
//     // struct Node* head = NULL;
//     // struct Node* secondnode = head->next;
//     struct Node* head = (struct Node *)malloc(sizeof(struct Node));
//     head->data = 1;
//     head->next = NULL;

//     struct Node* current = head; // Keep track of the last node

//     // Create and link the remaining 9 nodes
//     for (int i = 2; i <= 10; i++) {
//         struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//         newNode->data = i;
//         newNode->next = NULL;
//         current->next = newNode; // Link the previous node to the new node
//         current = newNode;       // Move current to the newly added node
//     }

//     print(head);

//     reverse(&head);

//     print(head);


    
// }

#include<stdio.h>
#include<stdlib.h>

/* Link list node */
struct Node
{
    int data;
    struct Node* next;
};

/* Function to reverse the linked list */
static void reverse(struct Node** head_ref)
{
    struct Node* prev   = NULL;
    struct Node* current = *head_ref;
    struct Node* next;
    while (current != NULL)
    {
        next  = current->next;  
        current->next = prev;   
        prev = current;
        current = next;
    }
    *head_ref = prev;
}

/* Function to push a node */
void push(struct Node** head_ref, int new_data)
{
    /* allocate node */
    struct Node* new_node =
            (struct Node*) malloc(sizeof(struct Node));
           
    /* put in the data  */
    new_node->data  = new_data;
               
    /* link the old list of the new node */
    new_node->next = (*head_ref);    
       
    /* move the head to point to the new node */
    (*head_ref)    = new_node;
}

/* Function to print linked list */
void printList(struct Node *head)
{
    struct Node *temp = head;
    while(temp != NULL)
    {
        printf("%d  ", temp->data);    
        temp = temp->next;  
    }
}    

/* Driver program to test above function*/
int main()
{
    /* Start with the empty list */
    struct Node* head = NULL;
  
     push(&head, 20);
     push(&head, 4);
     push(&head, 15); 
     push(&head, 85);      
    
     printf("Given linked list\n");
     printList(head);    
     reverse(&head);                      
     printf("\nReversed Linked list \n");
     printList(head);    
     getchar();
}