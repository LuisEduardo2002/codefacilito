#include <STDIO.H>
int main()
{
    /* code */
    printf("HOLA MUNDO2\n");
    funcion();
    return 0;
}

void funcion()
//imprime el nummero 5
{
    int n = 5;
    int i;
    int fact = 1;
    for (i = 2; i <= n; ++i) {
        fact *= i;
    }
    printf("%d\n", fact);
} 
