//1) Print Duplicate characters from a string.

#include<stdio.h>


int main()
{
    char str[100];
    char temp;
    int i = 0,j,count=0;
    printf("Enter the string: ");
    fgets(str,100,stdin);
    printf("Duplicate charactres in the string : ");
    while(str[i] != '\0')
    {
        temp = str[i];
        j = i+1;
        while(str[j] != '\0')
        {
            if(temp == str[j])
            {
                printf("%c ",str[j]);
                count++;
            }
            j++;
        }
        i++;
    }
    if(count == 0)
    printf("No duplicate characters present in the string\n");
    
    return 0;    
}
