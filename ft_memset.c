#include <stdio.h>
void *ft_memset(void *b, int c, size_t n){
    size_t i;
    char  *ptr; 
    ptr = (char *)b;
    i = 0;

    while (i < n){
        ptr[i] = (unsigned char)c;
        i++;
    }
    return (b);
}