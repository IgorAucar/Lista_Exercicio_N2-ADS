#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int dia;
    int mes;
} Data;

typedef struct {
    char nome[41];      
    char telefone[16];  
    char celular[16];   
    char email[41];    
    Data dataAniversario;
} Contato;

struct elemento {
    Contato info;            
    struct elemento *prox;   
};
typedef struct elemento Elemento;

Elemento* cria_agenda() {
    return NULL;
}

void ler_contato(Contato *c) {
    printf("Digite o nome (max 40): ");
    fgets(c->nome, 41, stdin);
    c->nome[strcspn(c->nome, "\n")] = 0; 

    printf("Digite o telefone (max 15): ");
    fgets(c->telefone, 16, stdin);
    c->telefone[strcspn(c->telefone, "\n")] = 0;

    printf("Digite o celular (max 15): ");
    fgets(c->celular, 16, stdin);
    c->celular[strcspn(c->celular, "\n")] = 0;

    printf("Digite o email (max 40): ");
    fgets(c->email, 41, stdin);
    c->email[strcspn(c->email, "\n")] = 0;

    printf("Digite o dia do aniversario: ");
    scanf("%d", &c->dataAniversario.dia);
    printf("Digite o mes do aniversario: ");
    scanf("%d", &c->dataAniversario.mes);
    
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

Elemento* insere_contato(Elemento* lista) {
    Elemento* novo = (Elemento*) malloc(sizeof(Elemento));
    if (novo == NULL) {
        printf("Erro: Falha na alocacao de memoria.\n");
        return lista;
    }

    printf("\n--- Cadastrando Novo Contato ---\n");
    ler_contato(&novo->info);
    novo->prox = NULL;

    if (lista == NULL) {
        return novo;
    }

    Elemento* aux = lista;
    while (aux->prox != NULL) {
        aux = aux->prox;
    }
    aux->prox = novo; 

    printf("Contato inserido com sucesso!\n");
    return lista;
}

void lista_contatos(Elemento* lista) {
    if (lista == NULL) {
        printf("\nAgenda vazia.\n");
        return;
    }

    printf("\n--- Lista de Contatos ---\n");
    Elemento* aux = lista;
    int i = 1;
    while (aux != NULL) {
        printf("--- Contato %d ---\n", i++);
        printf("Nome: %s\n", aux->info.nome);
        printf("Telefone: %s\n", aux->info.telefone);
        printf("Celular: %s\n", aux->info.celular);
        printf("Email: %s\n", aux->info.email);
        printf("Aniversario: %02d/%02d\n", aux->info.dataAniversario.dia, aux->info.dataAniversario.mes);
        printf("---------------------\n");
        aux = aux->prox;
    }
}

Elemento* busca_contato(Elemento* lista) {
    char nomeBusca[41];
    printf("Digite o nome para buscar: ");
    fgets(nomeBusca, 41, stdin);
    nomeBusca[strcspn(nomeBusca, "\n")] = 0; 

    Elemento* aux = lista;
    while (aux != NULL) {
        if (strcmp(aux->info.nome, nomeBusca) == 0) {
            printf("Contato encontrado!\n");
            return aux; 
        }
        aux = aux->prox;
    }

    printf("Contato nao encontrado.\n"); 
    return NULL;
}

Elemento* remove_contato(Elemento* lista) {
    printf("\n--- Remover Contato ---\n");
    char nomeBusca[41];
    printf("Digite o nome a remover: ");
    fgets(nomeBusca, 41, stdin);
    nomeBusca[strcspn(nomeBusca, "\n")] = 0;

    Elemento* ant = NULL; 
    Elemento* atual = lista;

    while (atual != NULL && strcmp(atual->info.nome, nomeBusca) != 0) {
        ant = atual;
        atual = atual->prox;
    }

    if (atual == NULL) {
        printf("Erro: Contato nao encontrado.\n");
        return lista;
    }

    if (ant == NULL) {
        lista = atual->prox;
    } else {
        ant->prox = atual->prox;
    }

    free(atual);
    printf("Contato removido com sucesso!\n");
    return lista;
}

void atualiza_contato(Elemento* lista) {
    printf("\n--- Editar Contato ---\n");
    Elemento* contato = busca_contato(lista);

    if (contato != NULL) {
    
        printf("\nDigite os novos dados para '%s':\n", contato->info.nome);
        ler_contato(&contato->info);
        printf("Contato atualizado com sucesso!\n");
    } else {
    
        printf("Nao e possivel atualizar, pois o contato nao foi encontrado.\n");
    }
}

void libera_agenda(Elemento* lista) {
    Elemento* atual = lista;
    while (atual != NULL) {
        Elemento* temp = atual;
        atual = atual->prox;
        free(temp);
    }
}

int main() {
    Elemento* agenda = cria_agenda();
    int opcao;

    do {
    
        printf("\n--- Agenda Telefonica ---\n");
        printf("1. Inserir Contato\n");     
        printf("2. Listar Contatos\n");   
        printf("3. Buscar Contato\n");     
        printf("4. Editar Contato\n");      
        printf("5. Remover Contato\n");     
        printf("6. Sair\n");                
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);


        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF);

        switch (opcao) {
            case 1:
                agenda = insere_contato(agenda);
                break;
            case 2:
                lista_contatos(agenda);
                break;
            case 3:
                busca_contato(agenda); 
                break;
            case 4:
                atualiza_contato(agenda);
                break;
            case 5:
                agenda = remove_contato(agenda);
                break;
            case 6:
                printf("Saindo...\n"); 
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 6);

    libera_agenda(agenda);
    return 0;
}