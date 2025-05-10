#include <stdio.h>
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *a = s1;
    const unsigned char *b = s2;
    size_t i = 0;
    while (i < n)
    {
        if (*a != *b)
    {
        return(*a - *b);
        a++;
        b++;
    }
    return 0;
    }
}