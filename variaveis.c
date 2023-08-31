#include<stdio.h>

int main() {
    char nome[50];
    int idade;
    int matricula;
    char endereco[50];
    char curso[50];
    char periodo[50];
    char disciplinas[50];

    // Recebendo nome 
    printf("Digite o nome do aluno: ");
    fgets(nome, sizeof(nome), stdin);
    printf("O nome e: %s", nome);
    
    // Recebendo idade 
    printf("Digite a idade do aluno: ");
    scanf("%d", &idade);
    printf("A idade do aluno e: %d\n", idade);

    // Recebendo matricula 
    printf("Digite a matricula do aluno: ");
    scanf("%d", &matricula);
    printf("A matricula do aluno e: %d\n", matricula);

    // Limpando o buffer do teclado após os scanf
    while (getchar() != '\n');

    // Recebendo endereço 
    printf("Digite o endereco do aluno: ");
    fgets(endereco, sizeof(endereco), stdin);
    printf("O endereco e: %s", endereco);

    // Recebendo curso 
    printf("Digite o nome do curso: ");
    fgets(curso, sizeof(curso), stdin);
    printf("O curso do aluno e: %s", curso);
    
    // Recebendo periodo 
    printf("Digite o periodo do curso: ");
    fgets(periodo, sizeof(periodo), stdin);
    printf("O periodo do curso e: %s", periodo);

    // Recebendo disciplinas 
    printf("Digite as disciplinas do curso: ");
    fgets(disciplinas, sizeof(disciplinas), stdin);
    printf("As disciplinas sao: %s", disciplinas);

    return 0;
}