#include <stdio.h>
#include <stdlib.h>

int main(){

    int *array; //malloc precisa de um ponteiro para armazenar o endereço alocado
    int n; //variável para armazenar o número de elementos do array

    printf("Digite um número de elementos para compor o array: ");
    scanf("%d", &n);

    array = malloc(n* sizeof(int)); //sizeof(int) retorna o tamanho em bytes do parâmetro especificado

    if (!array) //check para ver se o array é null
    {
        printf("Erro ao alocar memória.");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        (array[i] = i + 1);
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("Valor do array na posição %d: %d\n", i, array[i]);
    }
}