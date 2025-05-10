#include <stdio.h>
int ft_isprint(int c){
    if((c >= 32 && c <= 126))
    return (c);
    return 0;
}
int main(void)
{
    char ch = '+';
    if (ft_isprint(ch))
        printf("%c is a isprint.\n", ch);
    else
        printf("%c is NOT a isprint.\n", ch);

    return 0;
}