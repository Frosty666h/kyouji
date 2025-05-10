#include <stdio.h>
int ft_isalpha(int c){
    if((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
    return (c);
    return 0;
}
int main(void)
{
    char ch = '5';
    if (ft_isalpha(ch))
        printf("%c is a letter.\n", ch);
    else
        printf("%c is NOT a letter.\n", ch);

    ch = 'a';
    if (ft_isalpha(ch))
        printf("%c is a letter.\n", ch);
    else
        printf("%c is NOT a letter.\n", ch);

    return 0;
}
