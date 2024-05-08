#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 *
 * @p: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int p;
	size_t index;
	struct listint_s *next;
} listint_t;

/* Prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

#endif /* SEARCH_ALGOS_H */
