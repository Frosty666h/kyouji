#include <stdio.h>
int ft_isdigit(int c){
    if (c >= 48 && c <= 57) 
    return (c);
    return 0;
}
int main(void)
{
    char ch = '5';
    if (ft_isdigit(ch))
        printf("%c is a digit.\n", ch);
    else
        printf("%c is NOT a digit.\n", ch);
    return 0;
}