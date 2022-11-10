#ifndef MAIN_H
#define MAIN_H

void _puts(char *str);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _putchar(char c);
int _atoi(const char *s);
void print_int(unsigned long int n);

int _strlen(char *s);
char *xarray(int size);
char *_zero_iteration(char *s);
int convert_to_digit(char s);
void _product(char *prod, char *mul, int digit, int zeroes);
void nums_add(char *final_prod, char *next_prod, int next_len);


#endif
