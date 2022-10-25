#include <stdio.h>
 
int main()
{
    char a[25], b[25] = {'\0'};
    int i, length = 0, flag = 0;
 
    printf("Enter a string \n");
    gets(a);
    
    for (i = 0; a[i] != '\0'; i++)
    {
        length++;
    }
    printf("The length of the string '%s' = %d\n", a, length);
    for (i = length - 1; i >= 0 ; i--)
    {
        b[length - i - 1] = a[i];
    }
   /*  Check if the string is a Palindrome */
 
    for (flag = 1, i = 0; i < length ; i++)
    {
        if (b[i] != a[i])
            flag = 0;
    }
    if (flag == 1)
       printf ("%s is a palindrome \n", a);
    else
       printf("%s is not a palindrome \n", b);
}
