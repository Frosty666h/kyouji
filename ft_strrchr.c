#include <stdio.h>
char *ft_strrchr(const char *s, int c){
    int i;
    i = 0;
    char *last = NULL;
    while(str[i]){
        if (str[i] == (char)c)
        last = (char *)&s[i];
        i++;
    }
    if (s[i] == (char)c)
    return ((char *)&s[i]);
    return last;
}