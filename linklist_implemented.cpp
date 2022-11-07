#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

void push(struct node **head, int data)
{
    struct node *temp = new struct node;
    temp->data = data;
    temp->next = *head;
    *head = temp;
}
void ls_delete(struct node **head, int key)
{
    struct node *temp = *head;
    struct node *prev = NULL;
    if (*head != NULL && (*head)->data == key)
    {
        *head = temp->next;
        delete temp;
    }

    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
    {
        return;
    }

    prev->next = temp->next;
    delete temp;
}
void printls(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        cout << (temp->data) << " ";
        temp = temp->next;
    }
    cout << endl;
}
void ls_length(struct node *head)
{
    struct node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    cout << count << endl;
}

struct node *merge(struct node **head, struct node **two)
{
    struct node *temp, *last;
    temp = *head;
    while (temp != NULL)
    {
        last = temp;
        temp = temp->next;
    }
    last->next = *two;
    return *head;
}
int main()
{
    struct node *head = new struct node;
    head->data = 3;
    head->next = NULL;
    push(&head, 5);
    push(&head, 7);
    push(&head, 9);
    printls(head);
 
    /*  ls_length(head);
    ls_delete(&head,7);
    printls(head);
    ls_length(head); */
 
   
    struct node *two = new struct node;
    struct node *three = new struct node;
    struct node *four = new struct node;
    two->data = 2;
    two->next = three;
    three->data = 4;
    three->next = four;
    four->data = 6;
    four->next = NULL;
    struct node *new_merge_ls = merge(&head, &two);
    printls(new_merge_ls);
}