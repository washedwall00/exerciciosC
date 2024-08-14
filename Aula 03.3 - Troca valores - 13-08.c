#include <stdio.h>

int main()
{
    int a, b, inverte;
    
    printf ("Escreva os valores");
    scanf ("%d %d", &a, &b);

    inverte = a;
    a = b;
    b = inverte;
    
    printf("%d %d\n", a, b);

    return 0;
}
