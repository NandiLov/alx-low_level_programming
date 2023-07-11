#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_list - searches for a value in a sorted linked list of integers
 * using the Jump search algorithm.
 *
 * @list: Pointer to the head of the linked list
 * @size: Number of nodes in the linked list
 * @value: The value to search for
 *
 * Return: Pointer to the first node where value is located or
 * if value is not present in head or if head is NULL, return NULL
 */

int jump_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1;
    }

    // Determine the jump step using the square root of the size
    size_t jump = sqrt(size);
    size_t prev = 0;

    // Find the block where the target value may exist
    while (array[jump - 1] < value && jump < size) {
        printf("Value checked array[%lu] = [%d]\n", jump, array[jump]);
        prev = jump;
        jump += sqrt(size);
    }

    // Perform linear search within the block
    while (array[prev] < value) {
        prev++;

        // If we reach the end of the block or the end of the array, target value is not present
        if (prev == fmin(jump, size)) {
            return -1;
        }
    }

    // If the target value is found
    if (array[prev] == value) {
        printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
        return prev;
    }

    return -1;  // Target value not found
}

int main() {
    int array[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    size_t size = sizeof(array) / sizeof(array[0]);
    int value = 11;

    int result = jump_search(array, size, value);

    if (result != -1) {
        printf("Value %d found at index %d\n", value, result);
    } else {
        printf("Value %d not found in the array\n", value);
    }

    return 0;
}
