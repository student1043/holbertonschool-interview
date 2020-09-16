#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * check_cycle - check the cycle for Holberton School students.
 * @list: linked list
 * Return: Always 0.
 */
int check_cycle(listint_t *list)
{
listint_t *fast = list, *slow = list;
if (!fast || !fast->next)
{
return(0);
}
while(fast && fast->next)
{
fast = fast->next->next;
slow = slow->next;
if(fast == slow)
{
return(1);
}
}
return(0);
}
