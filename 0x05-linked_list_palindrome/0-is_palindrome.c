#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * is_palindrome - check the code for Holberton School students.
 * @head: the head of the linked list
 * Return: Always 0.
 */
int is_palindrome(listint_t **head)
{
if(head == NULL) {
    return (1);
}
listint_t *mainnode;
listint_t *reversedlist;
mainnode = *head;
reversedlist = *head;
reversedlist = reverse(reversedlist);
while (reversedlist != NULL)
{
if(mainnode->n != reversedlist->n)
{
return(0);
}
reversedlist = reversedlist->next;
mainnode = mainnode->next;
}
return(1);
}


/**
 * reverse - check the code for Holberton School students.
 * @head: the head of the linked list
 * Return: Always 0.
 */
listint_t *reverse(listint_t *head)
{
listint_t *prev = NULL;
listint_t *current = head; 
listint_t *next = NULL;
while(current != NULL)
{
next = current->next; 
current->next = prev; 
prev = current; 
current = next; 
}

return(prev); 
}
