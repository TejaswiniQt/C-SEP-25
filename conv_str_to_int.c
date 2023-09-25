/* Convert a string to its integer representation without using any built-in functions.
WTD: Transform a given string of numeric characters into its corresponding integer
representation without relying on built-in methods.
(e.g., "1234" to 1234)*/

#include <stdio.h>

int str_length(char *str)
{
    int length = 0;
    while(*str != '\0')
    {
        length++;
        str++;
    }
    return length;
}

int main()
{
    char str[50];
    printf("Enter the string: ");
    fgets(str,50,stdin);
    int num = 0, pow = 1, base = 10, len;
    len = str_length(str)-1;
    for(int i=len-1; i >= 0; i--)
    {
        num = num + (str[i] - '0') * pow;
        pow = pow * base;
    }
    printf("The corresponding integer representation of the string is : %d\n",num);
}