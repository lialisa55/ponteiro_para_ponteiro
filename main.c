#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a, *p1, **p2;

    scanf("%d", &a);

    printf("Valor inicial da variavel: %d\n", a);

    p1 = &a;

    printf("Valor do ponteiro antes do incremento: %d\n", *p1);

    *p1 += 10;

    printf("Valor do ponteiro depois do incremento: %d\n", *p1);

    p2 = &p1;

    printf("Valor do ponteiro para ponteiro antes do incremento: %d\n", **p2);

    **p2 += 10;

    printf("Valor do ponteiro para ponteiro depois da mudanca: %d\n", **p2);

    printf("Valor final da variavel: %d\n", a);

    return 0;
}
