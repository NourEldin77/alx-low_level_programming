#ifndef _HEADER_
#define _HEADER_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int get_bit(unsigned long int n, unsigned int index);
void print_binary(unsigned long int n);
unsigned int binary_to_uint(const char *b);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif
