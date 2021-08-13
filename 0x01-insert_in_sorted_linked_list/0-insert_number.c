#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *insert_node - prints all elements of a listint_t list
 * @head: pointer to head of list
 * @number: the number to be added
 * Return: number of nodes
 */
listint_t *insert_node(listint_t **head, int number)
{
listint_t *curr = *head;
listint_t *previous, *new;
if (head == NULL)
{
return (NULL);
}
new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
new->n = number;
if (curr == NULL || number < (*head)->n)
{
new->next = curr;
*head = new;
return (*head);
}
while (curr && curr->n <= number)
{
previous = curr;
curr = curr->next;
}
new->next = curr;
previous->next = new;
return (new);
}
