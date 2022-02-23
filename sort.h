#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
size_t len_list(const listint_t *h);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void quick_sort_main(int *array, int init, int final, size_t size);
void shell_sort_main(int *array, size_t size, size_t gap, size_t index);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void swap_node(listint_t **list, listint_t *node);
void counting_sort(int *array, size_t size);

#endif /* SORT_H */
