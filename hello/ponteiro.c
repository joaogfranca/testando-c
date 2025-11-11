#include <stdio.h>
#include <stdlib.h>

void display(int var, int *ptr);

int main(){

    int var = 10;
    int *ptr;

    ptr = &var;

    display(var, ptr);

    *ptr = 150;

    display(var, ptr);
    
    printf("\n\nFinal.");
    while(1);
    return 0;

} // fim main

void display(int var, int *ptr)
{
    printf("\n\n");
    printf("conteudo de var = %d\n", var);
    printf("endereco de var = %p\n", &var);
    printf("conteudo de apontamento do ponteiro = %d\n", *ptr);
    printf("endereco de apontamento = %p\n", ptr);
    printf("endereco do ponteiro = %p\n", &ptr);
}


// ponteiros
// um ponteiro é uma variável que armazena o endereço de memória de outra variável
// para declarar um ponteiro, usamos o operador *
// para obter o endereço de uma variável, usamos o operador &
//*prt - conteudo do apontamento do ponteiro
// &ptr - endereco do ponteiro
// ptr - endereco de apontamento do ponteiro