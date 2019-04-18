#include <stdio.h>
#include <stdlib.h>
#include "Linked List.c"

/*
 * Criteria:
 *  Array of linked lists > Hash Table (HT)
 *  Node (struct) - char[] name, int age
 *  Hash value computation
 *  Create a file of names
 *  Read from file and create starting hash table
 */

/*
 * Paper and pencil analysis: Hash value
 *  HV = SUM(
 *      for i in len(name):
 *          mod(asciitoint(name[i]), table_size)
 *  )
 *
 *  char name[25];
 *  scanf("%s", name);
 *
 *  T: name[0] - 84
 *  O: name[1] - 111
 *  M: name[2] - 109
 *
 *  for (int i = 0; i < len(name); i++) {
 *      sum += name[i];
 *  }
 *
 *  HV = sum % table_size;
 *
 *  i | sum | array[i] (data) | HV
 *  0 | 84  | 84              | /
 *  1 | 195 | 111             | /
 *  2 | 304 | 109             | /
 *  3 | /   | /               | 304 % 5 = 4
 *
 *  Hash Table
 *  |---------------------------------------|
 *  | 0: H1 | 1: H2 | 2: H3 | 3: H4 | 4: H5 |
 *  |---------------------------------------|
 *
 *  H1 = 0 | NULL
 *  H2 = 0 | NULL
 *  H3 = 0 | NULL
 *  H4 = 1 | ->"Tom" | 54 | NULL
 *  H5 = 0 | NULL
 *
 *  Jane
 *  Mike
 *  Don
 *  Al
 *  Sue
 *
 */

int main(void) {

    int table_size;
    printf("What is the size of the hash table?\n> ");
    scanf(" %d", &table_size);

    header_t hash_table[table_size];

    for (int counter = 0; counter < table_size; counter++) {
        hash_table[counter].first_node_ptr = NULL;
        hash_table[counter].node_counter = 0;
    }

    // TODO: Open file full of names

    // End program - return success
    return 0;
}