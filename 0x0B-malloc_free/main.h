#ifndef MAIN_H
#define MAIN_H

void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char *create_array(unsigned int size, char c);
int _putchar(char c);
char *_strdup(char *str);
int **alloc_grid(int width, int height);
char *str_concat(char *s1, char *s2);

#endif
