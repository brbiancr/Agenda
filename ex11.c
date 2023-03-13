#include <stdio.h>
#include <string.h>

struct endereco{
    char rua[50];
    int numero;
    char complemento[50];
    char bairro[50];
    int cep;
    char cidade[50];
    char estado[50];
    char pais[50];
};

struct telefone{
    int ddd;
    int numero;
};

struct aniversario{
    int dia;
    int mes;
    int ano;
};

struct pessoa{
    char nome[50];
    char email[50];
    struct endereco end;
    struct telefone tel;
    struct aniversario ani;
    char observacoes[50];
};

int main(){
    struct pessoa agenda[100];
    int opcao, opcao2;
    int quantidade = 0;
    char buscaNome[50], removerPessoa[50];
    int buscaMes, buscaDia;
    do{
        printf ("Digite a opcao que deseja: \n");
        printf ("1 - Insere uma pessoa\n");
        printf ("2 - Busca pessoa por primeiro nome\n");
        printf ("3 - Busca pessoa por mes de aniversario\n");
        printf ("4 - Busca pessoa por dia e mes de aniversario\n");
        printf ("5 - Remove uma pessoa\n");
        printf ("6 - Imprime agenda\n");
        printf ("7 - Sair\n");
        scanf ("%d", &opcao);
        fflush(stdin);

        switch (opcao){
                case 1: if (quantidade <49){
                            printf ("Digite os dados da pessoa que deseja inserir na agenda: \n");

                            printf("Digite o nome da pessoa: ");
                            gets(agenda[quantidade].nome);
                            printf("Digite o email: ");
                            gets(agenda[quantidade].email);

                            printf("Endereco\n");
                            printf ("Rua: ");
                            gets(agenda[quantidade].end.rua);
                            printf ("Numero: ");
                            scanf ("%d", &agenda[quantidade].end.numero);
                            fflush(stdin);
                            printf ("Complemento: ");
                            gets(agenda[quantidade].end.complemento);
                            printf ("Bairro: ");
                            gets(agenda[quantidade].end.bairro);
                            printf ("CEP: ");
                            scanf ("%d", &agenda[quantidade].end.cep);
                            fflush(stdin);
                            printf ("Cidade: ");
                            gets(agenda[quantidade].end.cidade);
                            printf ("Estado: ");
                            gets(agenda[quantidade].end.estado);
                            printf ("Pais: ");
                            gets(agenda[quantidade].end.pais);

                            printf ("Telefone\n");
                            printf ("DDD: ");
                            scanf ("%d", &agenda[quantidade].tel.ddd);
                            fflush(stdin);
                            printf ("Numero: ");
                            scanf ("%d", &agenda[quantidade].tel.numero);
                            fflush(stdin);

                            printf ("Aniversario\n");
                            printf ("Dia: ");
                            scanf ("%d", &agenda[quantidade].ani.dia);
                            fflush(stdin);
                            printf ("Mes: ");
                            scanf ("%d", &agenda[quantidade].ani.mes);
                            fflush(stdin);
                            printf ("Ano: ");
                            scanf ("%d", &agenda[quantidade].ani.ano);
                            fflush(stdin);

                            printf ("Observacoes: ");
                            gets (agenda[quantidade].observacoes);   

                            quantidade++;   

                            printf ("Inserindo pessoa...\n");
                            printf ("Pessoa Inserida com sucesso!\n");  
                        } else {
                            printf ("Agenda cheia!\n");
                        }

                        break;

            case 2: if (quantidade>0){
                        printf ("Digite o nome da pessoa que deseja buscar: ");
                        gets (buscaNome);

                        printf ("Buscando pessoa...\n");

                        for (int i=0; i<quantidade; i++){
                            if (strcmp(buscaNome, agenda[i].nome) == 0){
                                printf ("Nome: %s \n", agenda[i].nome);
                                printf ("Email: %s \n\n", agenda[i].email);
                                printf ("Rua: %s\n", agenda[i].end.rua);
                                printf ("Numero: %d\n", agenda[i].end.numero);
                                printf ("Complemento: %s\n", agenda[i].end.complemento);
                                printf ("Bairro: %s\n", agenda[i].end.bairro);
                                printf ("CEP: %d\n", agenda[i].end.cep);
                                printf ("Cidade: %s\n", agenda[i].end.cidade);
                                printf ("Estado: %s\n", agenda[i].end.estado);
                                printf ("Pais: %s\n\n", agenda[i].end.pais);
                                printf ("Telefone: %d %d\n\n", agenda[i].tel.ddd, agenda[i].tel.numero);
                                printf ("Aniversario: %d/%d/%d\n\n", agenda[i].ani.dia, agenda[i].ani.mes, agenda[i].ani.ano);
                                printf ("Observacoes: %s\n", agenda[i].observacoes);
                            }
                        }
                    } else{
                        printf ("Agenda vazia!\n");
                    }

                    break;

            case 3: if (quantidade > 0){
                        printf ("Digite o mes de aniversario da pessoa que deseja buscar: ");
                        scanf ("%d", &buscaMes);
                        fflush(stdin);

                        printf ("Buscando pessoa pelo mes de aniversario...\n");

                        for (int i=0; i<quantidade; i++){
                            if (strcmp(buscaMes, agenda[i].ani.mes) == 0){
                                printf ("Nome: %s \n", agenda[i].nome);
                                printf ("Email: %s \n\n", agenda[i].email);
                                printf ("Rua: %s\n", agenda[i].end.rua);
                                printf ("Numero: %d\n", agenda[i].end.numero);
                                printf ("Complemento: %s\n", agenda[i].end.complemento);
                                printf ("Bairro: %s\n", agenda[i].end.bairro);
                                printf ("CEP: %d\n", agenda[i].end.cep);
                                printf ("Cidade: %s\n", agenda[i].end.cidade);
                                printf ("Estado: %s\n", agenda[i].end.estado);
                                printf ("Pais: %s\n\n", agenda[i].end.pais);
                                printf ("Telefone: %d %d\n\n", agenda[i].tel.ddd, agenda[i].tel.numero);
                                printf ("Aniversario: %d/%d/%d\n\n", agenda[i].ani.dia, agenda[i].ani.mes, agenda[i].ani.ano);
                                printf ("Observacoes: %s\n", agenda[i].observacoes);
                            }
                        }
                    } else {
                        printf ("Agenda vazia!\n");
                    }

                    break;
            case 4: if (quantidade > 0){
                        printf ("Digite o dia de aniversario da pessoa que deseja buscar: ");
                        scanf ("%d", &buscaDia);
                        fflush(stdin);

                        printf ("Digite o mes de aniversario da pessoa que deseja buscar: ");
                        scanf ("%d", &buscaMes);
                        fflush(stdin);

                        printf ("Buscando pessoa pelo dia e mes de aniversario...\n");
                        
                        for (int i=0; i<quantidade; i++){
                            if (strcmp(buscaMes, agenda[i].ani.mes) == 0 && strcmp(buscaDia, agenda[i].ani.dia) == 0){
                                printf ("Nome: %s \n", agenda[i].nome);
                                printf ("Email: %s \n\n", agenda[i].email);
                                printf ("Rua: %s\n", agenda[i].end.rua);
                                printf ("Numero: %d\n", agenda[i].end.numero);
                                printf ("Complemento: %s\n", agenda[i].end.complemento);
                                printf ("Bairro: %s\n", agenda[i].end.bairro);
                                printf ("CEP: %d\n", agenda[i].end.cep);
                                printf ("Cidade: %s\n", agenda[i].end.cidade);
                                printf ("Estado: %s\n", agenda[i].end.estado);
                                printf ("Pais: %s\n\n", agenda[i].end.pais);
                                printf ("Telefone: %d %d\n\n", agenda[i].tel.ddd, agenda[i].tel.numero);
                                printf ("Aniversario: %d/%d/%d\n\n", agenda[i].ani.dia, agenda[i].ani.mes, agenda[i].ani.ano);
                                printf ("Observacoes: %s\n", agenda[i].observacoes);
                            }
                        }
                    } else {
                        printf ("Agenda vazia!\n");
                    }

                    break;

            case 5: if (quantidade > 0){  
                        printf ("Digite o nome da pessoa que deseja remover: ");
                        gets (removerPessoa);

                        printf ("Removendo pessoa...\n");

                        for (int i=0; i<quantidade; i++){
                            if (strcmp(removerPessoa, agenda[i].nome) == 0){
                                for (int j=i; j<quantidade;j++){
                                    strcpy(agenda[j].nome, agenda[j+1].nome);
                                }
                                quantidade--;
                            }
                        }

                        printf ("Pessoa removida com sucesso!\n");

                    } else {
                        printf  ("Agenda vazia!\n");
                    }

                    break;

            case 6: if (quantidade > 0){ 
                        printf ("Digite a forma que deseja imprimir a pessoa: \n");
                        printf ("11 - Imprimir nome telefone e email\n");
                        printf ("12 - Imprimir todos os dados\n");
                        scanf ("%d", &opcao2);
                        fflush(stdin);

                        switch (opcao2){
                            case 11: for(int i=0; i<quantidade; i++){
                                        printf ("Nome: %s", agenda[i].nome);
                                        printf ("Telefone: %d %d", agenda[i].tel.ddd, agenda[i].tel.numero);
                                        printf ("Email: %s", agenda[i].email);
                                    }   
                                    break;
                            
                            case 12: for (int i=0; i<quantidade; i++){
                                        printf ("Nome: %s \n", agenda[i].nome);
                                        printf ("Email: %s \n\n", agenda[i].email);
                                        printf ("Rua: %s\n", agenda[i].end.rua);
                                        printf ("Numero: %d\n", agenda[i].end.numero);
                                        printf ("Complemento: %s\n", agenda[i].end.complemento);
                                        printf ("Bairro: %s\n", agenda[i].end.bairro);
                                        printf ("CEP: %d\n", agenda[i].end.cep);
                                        printf ("Cidade: %s\n", agenda[i].end.cidade);
                                        printf ("Estado: %s\n", agenda[i].end.estado);
                                        printf ("Pais: %s\n\n", agenda[i].end.pais);
                                        printf ("Telefone: %d %d\n\n", agenda[i].tel.ddd, agenda[i].tel.numero);
                                        printf ("Aniversario: %d/%d/%d\n\n", agenda[i].ani.dia, agenda[i].ani.mes, agenda[i].ani.ano);
                                        printf ("Observacoes: %s\n", agenda[i].observacoes);                    
                                    }
                                    break;
                    
                            default: printf("Opcao invalida!\n");
                        }
                    } else {
                        printf ("Agenda vazia!\n");
                    }
                        break;

            case 7: printf ("Saindo...\n");
                    break;
        
            default: printf ("Opcao invalida!\n");
            break;
        }
    } while (opcao!=7);

    return 0;
}