#!/bin/bash
#include <stdio.h>


int main(void)
{
	int in;
    float fl;
    char ch;
    long lo;
    long long ll;

	printf("Size of a char: %ld byte(s)\n", sizeof(ch));
	printf("Size of an int: %ld byte(s)\n", sizeof(in));
	printf("Size of a long int: %ld byte(s)\n", sizeof(lo));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(ll));
	printf("Size of a float: %ld byte(s)\n", sizeof(fl));
	return (0);
}
