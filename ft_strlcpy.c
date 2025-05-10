#include <stdio.h>
#include <string.h>
size_t ft_strlcpy(char *dest, const char *src, size_t dstsize){
    size_t len = strlen(src);
    if (dstsize){
    while(dstsize-- > 1 && *src){
        *dest++ = *src++;
        *dest = '\0';
    }
    return (len);
   }

}