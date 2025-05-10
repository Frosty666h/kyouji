#include <stdio.h>
void *ft_memmove(void *dest, const void *src, size_t len){
    unsigned char *tmp_dest;
    const unsigned char *tmp_src;
    size_t i;
    if (!dest && !src)
        {
            return NULL;
        }
    i = 0;
    tmp_dest = (unsigned char *)dest;
    tmp_src= (const unsigned char *)src;
    while (i < len)
{
    tmp_dest[i] = tmp_src[i];
    i++;
}
return dest;
}