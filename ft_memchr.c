#include <stdio.h>
void *ft_memchr(const void *s, int c, size_t n){
    const unsigned char *tmp_ss;
    size_t i = 0;
    while(n--){
        if (*tmp_ss == (unsigned char)c)
        {
            return (void *)tmp_ss;
            tmp_ss++;
        }
    }
    return NULL;
    
}