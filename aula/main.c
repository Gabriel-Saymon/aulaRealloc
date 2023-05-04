#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct{
    char nome[50];
    char DataNascimento[11];
    char cpf[12];
}tPessoa;


int main(){
    int i=0, decisao = 1, qtd =2;
    tPessoa *pessoa = (tPessoa *) malloc(sizeof (tPessoa));

    while(decisao == 1){
        printf("digite um nome:\n");
        scanf("%s", pessoa[i].nome);
        printf("digite uma data de nascmento(dd/mm/ano):\n");
        scanf("%s", pessoa[i].DataNascimento);
        printf("digite um cpf:\n");
        scanf("%s", pessoa[i].cpf);

        pessoa = realloc(pessoa, qtd * sizeof(tPessoa));
        qtd++;

        printf("\nDeseja continuar Cadastrando?\n1.sim\n0.nao\n\n");
        scanf("%d", &decisao);
        i++;
    }

    
    for(int j = 0; j < i; j++){
        printf("%s\n", pessoa[j].nome);
        printf("%s\n", pessoa[j].DataNascimento);
        printf("%s\n\n", pessoa[j].cpf);
    }

    free(pessoa);

    return 0;
}
