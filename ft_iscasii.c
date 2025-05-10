#include <stdio.h>
int ft_iscasii(int c){
    if((c >= 0 && c <= 127))
    return (c);
    return 0;
}
int main(void)
{
    char ch = 'A';
    if (ft_iscasii(ch))
        printf("%c is a iscasii.\n", ch);
    else
        printf("%c is NOT a iscasii.\n", ch);

    return 0;
}