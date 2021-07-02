#include<stdio.h>
#include<locale.h>

//cadastre 4 pessoas com nome, ano de nascimento e idade
//ao final exiba os dados

struct cadastro_de_pessoas 
{
   char nome [20];
   int ano_de_nasc;
   int idade;
}cad_pessoas[4];


int main(int argc, char const *argv[])
{
    int i=0;

    printf("\n CADASTRO DE PESSOAS");

    for (i=0; i<4; i++){

        printf("\n Informe o nome da pessoa: ");
        fflush(stdin);
        gets(cad_pessoas[i].nome);

        printf("\n Informe o ano de nascimento: ");
        scanf("%d",& cad_pessoas[i].ano_de_nasc);

        printf("\n Informe a idade: ");
        scanf("%d",&cad_pessoas[i].idade);
    }

    for (i=0; i<4; i++){
        printf("\n nome, ano de nascimento e idade: %s, \t %d, \t %d",cad_pessoas[i].nome,cad_pessoas[i].ano_de_nasc,cad_pessoas[i].idade);
    }

    return 0;
}
