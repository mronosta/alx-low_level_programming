#include "list.h"

/**
* listint_len - counts the number of nodes in a linked list
* @h: head of the list
*
* Return: the number of elements
*/
size_t print_listint(const listint_t *h)
{
     const listint_t *cursor =h;
     size_t count =0;
     
     while (cusor != NULL)
     {
           
           count += 1;
           cursor = cursor->next;
     }
     return (count);

}

