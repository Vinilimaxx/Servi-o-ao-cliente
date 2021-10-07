#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tamanho 10

struct tcliente
{
    char nome[50];
    char cpf[11];
    char cep[8];
    char endereco[30];
    char cidade[25];
    char bairro[25];
    char estado[25];

};

struct tfila
{
    struct tcliente cliente[tamanho];
    int inicio;
    int fim;
};



int op;
struct tfila filaBanco;


void FilaMostrar();
void FilaInserir();
void FilaRemover();
void MenuMostrar();


int main(){
filaBanco.inicio;
filaBanco.fim;

do
{
    system("cls");
    
    MenuMostrar();
    scanf("%d", &op);
    switch (op)
    {
    case 1:FilaInserir(); break;
    case 2:FilaRemover(); break;
    case 3:FilaMostrar(); break;

    }
} while (op != 0);


    return 0;   
}


void FilaMostrar(){
    system("cls");
    int i;
    printf("\nClientes cadastrados:\n");
    for (i = 0; i < tamanho; i++)
    {
        printf("%s ", filaBanco.cliente[i].nome);
        printf("%s ", filaBanco.cliente[i].cpf);
        printf("%s ", filaBanco.cliente[i].cep);
        printf("%s ", filaBanco.cliente[i].endereco);
        printf("%s ", filaBanco.cliente[i].cidade);
        printf("%s ", filaBanco.cliente[i].bairro);
        printf("%s ", filaBanco.cliente[i].estado);
        printf("\n");
    }
    



}
void FilaInserir(){
    if(filaBanco.fim == tamanho){
        printf("\nTodos os cadastros ja foram realizados\n");
        system("pause");
    } else{
        fflush(stdin);
        printf("\nInforme o nome do cliente: ");
        gets(filaBanco.cliente[filaBanco.fim].nome);

        printf("Informe o cpf: ");
        gets(filaBanco.cliente[filaBanco.fim].cpf);

        printf("Informe o cep: ");
        gets(filaBanco.cliente[filaBanco.fim].cep);

        printf("Informe o endereco: ");
        gets(filaBanco.cliente[filaBanco.fim].endereco);

        printf("Informe o cidade: ");
        gets(filaBanco.cliente[filaBanco.fim].cep);

        printf("Informe o bairro: ");
        gets(filaBanco.cliente[filaBanco.fim].bairro);

        printf("Informe o estado(Sigla): ");
        gets(filaBanco.cliente[filaBanco.fim].estado);
        filaBanco.fim++;
    }



}
void FilaRemover(){
    if(filaBanco.inicio==filaBanco.fim){
        printf("\nA fila esta vazia\n");
        system("pause");
    } else{
        int i;
        for(i=0;i<tamanho; i++){
            strcpy(filaBanco.cliente[i].nome,filaBanco.cliente[i+1].nome);

            strcpy(filaBanco.cliente[i].cpf,filaBanco.cliente[i+1].cpf);

            strcpy(filaBanco.cliente[i].cep,filaBanco.cliente[i+1].cep);

            strcpy(filaBanco.cliente[i].endereco,filaBanco.cliente[i+1].endereco);

            strcpy(filaBanco.cliente[i].cidade,filaBanco.cliente[i+1].cidade);

            strcpy(filaBanco.cliente[i].bairro,filaBanco.cliente[i+1].bairro);

            strcpy(filaBanco.cliente[i].estado,filaBanco.cliente[i+1].estado);
        }
        filaBanco.fim--;
    }


}
void MenuMostrar(){
    printf("\n\n-----Escolha uma das opcoes abaixo:-----");
    printf("\n1 - Inserir um novo cadastro");
    printf("\n2 - Remover o primeiro cadastro");
    printf("\n3 - Visualizar os cadastros feitos");
    printf("\n0 - Sair\n"); 
}