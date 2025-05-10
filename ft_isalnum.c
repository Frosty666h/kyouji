#include <stdio.h>
int ft_isalnum(int c){
    if((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
    return (c);
    return 0;
}
int main(void)
{
    char ch = 'A';
    if (ft_isalnum(ch))
        printf("%c is a letter.\n", ch);
    else
        printf("%c is NOT a letter.\n", ch);

    ch = 'a';
    if (ft_isalnum(ch))
        printf("%c is a letter.\n", ch);
    else
        printf("%c is NOT a letter.\n", ch);
    ch = '5';
    if (ft_isalnum(ch))
        printf("%c is a digit.\n", ch);
    else
        printf("%c is NOT a digit.\n", ch);

    return 0;
}
