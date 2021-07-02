#include<stdio.h>
#include<locale.h>

// crie um algoritmo que cadastra informaçoes de um cliente

struct endereco
{
    char rua[40];
    int numero;
    char bairro [40];
    char cidade [40];
    char estado [20];
    int cep;
};

struct data_nascimento
{
    int dia;
    int mes;
    int ano;
};

struct cadastro_cliente 
{
    char nome[40];
    int telefone;

    struct endereco endereco;
    struct data_nascimento data_nascimento;
}cad_cliente[2];


 int main()
{
    int i=0, escolha = 0;

    for (i=0; i<2; i++){
            printf("\n *******SECAO DE CADASTRO DO CLIENTE******");

            printf("\n\n Informe o nome do cliente: ");
            fflush (stdin);
            gets(cad_cliente[i].nome);

            printf("\n Informe o numero de telefone do cliente: ");
            scanf("%d",&cad_cliente[i].telefone);

            printf("\n\n ******SECAO DE CADASTRO DE ENDERECO DO CLIENTE******");
            printf("\n\n Rua: ");
            fflush(stdin);
            gets(cad_cliente[i].endereco.rua);

            printf("\n Numero da casa: ");
            scanf("%i",&cad_cliente[i].endereco.numero);

            printf("\n Bairro: ");
            fflush(stdin);
            gets(cad_cliente[i].endereco.bairro);

            printf("\n Cidade: ");
            fflush(stdin);
            gets (cad_cliente[i].endereco.cidade);

            printf("\n Estado: ");
            fflush(stdin);
            gets(cad_cliente[i].endereco.estado);

            printf("\n CEP: ");
            scanf("%d",&cad_cliente[i].endereco.cep);

            printf("\n\n ******INFORMACOES SOBRE DATA DE NASCIMENTOS DO CLIENTE******");

            printf("\n\n Dia: ");
            scanf("%i",&cad_cliente[i].data_nascimento.dia);

            printf("\n Mes: ");
            scanf("%i",&cad_cliente[i].data_nascimento.mes);

            printf("\n Ano: ");
            scanf("%d",&cad_cliente[i].data_nascimento.ano);
        
    }// fim da coleta de informacoes do cliente

    //disparar informacoes do cliente
    for ( i = 0; i < 2; i++){

        printf("\n ***** DADOS DO CLIENTE*******");
        printf("\n\n Nome: %s",cad_cliente[i].nome);
        printf("\n\n Telefone: %d",cad_cliente[i].telefone);
        printf("\n\n ENDERECO:");
        printf("\n Rua: %s",cad_cliente[i].endereco.rua);
        printf("\n Numero: %d",cad_cliente[i].endereco.numero);
        printf("\n Bairro: %s",cad_cliente[i].endereco.bairro);
        printf("\n Cidade: %s",cad_cliente[i].endereco.cidade);
        printf("\n Estado: %s",cad_cliente[i].endereco.estado);
        printf("\n CEP: %i",cad_cliente[i].endereco.cep);
        printf("\n\n NASCIDO EM:");
        printf("\n\n Dia: %d",cad_cliente[i].data_nascimento.dia);
        printf("\n Mes: %d",cad_cliente[i].data_nascimento.mes);
        printf("\n Ano: %d",cad_cliente[i].data_nascimento.ano);
    }
    return 0;
}


