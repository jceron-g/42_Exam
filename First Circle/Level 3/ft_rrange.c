#include <stdlib.h>
#include <stdio.h>

int ft_abs(int number)
{
	if(number < 0)
		number *= -1;
	return(number);
}
int *ft_rrange(int start, int end)
{
    int i;
    int len;
    int *tab;
    int step;

    len = ft_abs(end - start) + 1; // Cambio de (end - start) + 1 a abs(end - start) + 1
    i = 0;
    step = -1;
    tab = malloc(sizeof(int) * len);
    if (!tab)
        return (NULL);
    if (tab) // Esta comprobación es redundante, ya que se comprueba antes de la asignación
    {
        if (start < end)
            step = -1;
        while (i < len)
        {
            tab[i] = end;
            end = end + step;
            i++;
        }
    }
    return (tab);
}

int main() {
    int start = 5;
    int end = 10;

    int *result = ft_rrange(start, end);

    if (result == NULL) {
        printf("No se pudo asignar memoria.\n");
        return 1;
    }

    int i = 0;
    int len = ft_abs(end - start) + 1;
    while (i < len) {
        printf("%d ", result[i]);
        i++;
    }
    printf("\n"); // Agregar salto de línea aquí

    free(result); // Liberar memoria asignada

    return 0;
}
