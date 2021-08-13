#include <stdio.h>
#include <stdlib.h>
#include "list.h"

/**
 * add_node_end - Print informations about each element of a list
 * @list: A pointer to the head of the linkd list
 * @str: char
 * Return: void
 */
List *add_node_end(List **list, char *str)
{
if (!str)
{
return (NULL);
}
List *ptr, *temp;
ptr = malloc(sizeof(List));
if(ptr == NULL)
{
return (NULL);
}
else
{
ptr->str = strdup(str);
if(list == NULL)
{
ptr->next = ptr;
ptr->prev = ptr;
*list = ptr;
return (ptr);
}
else
{
temp = *list;
while(temp->next !=list)
{
temp = temp->next;
}
temp->next = ptr;
ptr->prev=temp;
temp->prev = ptr;
ptr->next = temp;
}
}
}
