#include <stdio.h>
void ft_bzero(void *s, size_t n){
    size_t i;
    char *ptr;
    ptr = (char *)s;
    i = 0;
    while (n){
        ptr[i] = '\0';
        n--;
        i++;
        
    }
    return 0;
}