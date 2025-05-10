#include <stdlib.h>
void *ft_calloc(size_t count, size_t size){
    void *tmp;
    size_t i = 0;
    tmp = malloc(count * size);
    if (!tmp)
        return NULL;

    while(i < count * size)
    ((unsigned char *)tmp)[i++] = 0;

    return tmp;
}