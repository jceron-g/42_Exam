#include <unistd.h>

void rostring(char *str)
{
    int i = 0;
    int end = 0;
    int start = 0;
    while (str[i] == 32 || str[i] == '\t')
        i++;
    start = i;
    while (str[i] && (str[i] != 32 && str[i] != '\t'))
        i++;
    end = i;
    while (str[i] == 32 || str[i] == '\t')
        i++;
    while (str[i])
    {
        while (str[i] && str[i] != 32 && str[i] != '\t')
        {
            write(1, &str[i], 1);
            i++;
        }
        while (str[i] == 32 || str[i] == '\t')
            i++;
        write(1," ",1);
    }
    while (start < end)
    {
        write(1, &str[start], 1);
        start++;
    }
}
int main (int argc, char **argv)
{
    if (argc > 1)
        rostring(argv[1]);
    write(1, "\n", 1);
}