#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL,"Portuguese");

    struct Cadastro_de_Aluno
    {
       char nome [40];
       int numero;
       float nota;
    };

    struct Cadastro_de_Aluno aluno;
    {
        printf("\n Informe o nome do aluno: ");
        fgets(aluno.nome, 40, stdin);
        printf("\n Informe o numero de matricula do aluno: ");
        scanf("%i", &aluno.numero);
        printf("\n Informe a nota do aluno: ");
        scanf("%f",&aluno.nota);

        printf("\n O nome do aluno é: %s", aluno.nome);
        printf("\n O número de matricula é: %d",aluno.numero);
        printf("\n E a nota do aluno é: %.2f",aluno.nota);

        if(aluno.nota > 6){
            printf("\n %s, Você está aprovado.", aluno.nome);
        }else{
            printf("\n %s, Você está reprovado.", aluno.nome);
        }
    };
    
    
    return 0;
}
