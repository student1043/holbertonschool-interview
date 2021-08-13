#include "lists.h"

/**
 * is_palindrome - check the code for Holberton School students.
 * @head: the head of the linked list
 * Return: Always 0.
 */
int is_palindrome(listint_t **head)
{
int i = 0, j = 0, counter;
listint_t *first, *last;
if (!head)
return (0);
if (!(*head))
return (1);
last = *head;
first = *head;
j += 1;
while (last->next)
{
last = last->next;
j++;
}
counter = j / 2;
while (i <= counter)
{
if (first->n != last->n)
return (0);
first += 2;
last -= 2;
i++;
}
return (1);
}
