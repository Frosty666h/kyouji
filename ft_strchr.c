#include <stdio.h>
char *ft_strchr(const char *s, int c){
    int i;
    i = 0;
    while(str[i]){
        if (str[i] == (char)c)
        return ((char *)&str[i]);
        i++;
    }
    if (str[i] == (char)c)
    return ((char *)&str[i]);
    return (NULL);
    
}