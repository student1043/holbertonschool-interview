#include <stdio.h>
#include <stdlib.h>
#include "list.h"

/**
 * add_node_end - Print informations about each element of a list
 * @list: A list
 * @str: string
 * Return: void
 */
List *add_node_end(List **list, char *str)
{
	List *Node, *first, *last;

	if (!str)
	{
	return (NULL);
	}
	Node = malloc(sizeof(List));
	if (!Node)
	{
	return (NULL);
	}
	Node->str = strdup(str);
	if (!Node->str)
	{
	return (NULL);
	}
	Node->next = NULL;
	Node->prev = NULL;
	if (!list || *list == NULL)
	{
	Node->next = Node;
	Node->prev = Node;
	*list = Node;
	return (Node);
	}
	else
	{
	first = *list;
	last = first->prev;
	Node->next = first;
	Node->prev = last;
	last->next = Node;
	first->prev = Node;

	return (Node);
	}
}

/**
 * add_node_begin - Print informations about each element of a list
 * @list: a list
 * @str: string
 * Return: void
 */
List *add_node_begin(List **list, char *str)
{
	List *Node, *first, *last;

	if (!str)
	{
	return (NULL);
	}
	Node = malloc(sizeof(List));
	if (!Node)
	{
	return (NULL);
	}
	Node->str = strdup(str);
	if (!Node->str)
	{
	return (NULL);
	}
	Node->next = NULL;
	Node->prev = NULL;
	if (!list || !*list)
	{
	Node->next = Node;
	Node->prev = Node;
	*list = Node;
	return (Node);
	}
	first = *list;
	last = first->prev;
	Node->next = first;
	Node->prev = last;
	last->next = Node;
	first->prev = Node;
	*list = Node;

	return (Node);
}
