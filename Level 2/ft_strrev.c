#include <stdio.h>
#include <string.h>

char *ft_strrev(char *str)
{
    int start, end, length;
	char temp;

	length = strlen(str);
    start = 0;
    end = length - 1;
    if (str == NULL || *str == '\0') 
    {
        return str;
    }
    while (start < end) 
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    return str;
}

int main() 
{
    char str[] = "Hello, world!";
    printf("Original string: %s\n", str);
    ft_strrev(str);
    printf("Reversed string: %s\n", str);
    return 0;
}
