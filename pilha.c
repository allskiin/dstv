#include <stdio.h>
#include <stdlib.h>

typedef struct no{
	int valor;
	struct no *proximo;
}No;

typedef struct pilha{
	No *inicio;
	int tam;
}Pilha;

void criar_pilha(Pilha *pilha){
	pilha->inicio = NULL;
	pilha->tam =0;
}

void push(Pilha *pilha, int num){
	No *novo = malloc(sizeof(No));
		if(novo){
			novo->valor = num;
			novo->proximo = pilha->inicio;
			pilha->inicio = novo;
			pilha->tam++;
		}else{
			printf("\n\t ERRO NA ALOCACAO..");
		}
}

void imprimir(Pilha pilha, int x){
	No *aux;
	if(x == 1){
		if(pilha.inicio){
			printf("\n\t----------------\n\t PILHA TAM: %d\n\t----------------", pilha.tam);
			aux = pilha.inicio;
				while(aux){
					printf("\n\t %d ", aux->valor);
					aux = aux->proximo;
				}
				printf("\n\n");
		}else{
			printf("\n\t PILHA VAZIA...");
		}
	}else if(x==2){
		if(pilha.inicio){
			printf("\n\t--------------------\n\t PILHA PAR TAM: %d\n\t--------------------", pilha.tam);
			aux = pilha.inicio;
				while(aux){
					printf("\n\t %d ", aux->valor);
					aux = aux->proximo;
				}
				printf("\n\n");
		}else{
			printf("\n\t PILHA VAZIA...");
		}
	}else if(x==3){
		if(pilha.inicio){
			printf("\n\t--------------------\n\t PILHA IMPAR TAM: %d\n\t--------------------", pilha.tam);
			aux = pilha.inicio;
				while(aux){
					printf("\n\t %d ", aux->valor);
					aux = aux->proximo;
				}
				printf("\n\n");
		}else{
			printf("\n\t PILHA VAZIA...");
		}
	}
		
}

No *pop(Pilha *pilha){
	No *aux, *remover;
		if(pilha->inicio){
			aux = pilha->inicio;
			pilha->inicio = aux->proximo;
			remover = aux;	
			return remover;		
		}else{
			
		}
}
	
main(){
	Pilha pilha, pilha_par, pilha_impar;
	No *remover;
	int num,i,n=4;
	criar_pilha(&pilha);
	criar_pilha(&pilha_par);
	criar_pilha(&pilha_impar);
	
	
	for(i = 0; i<n; i++){
		scanf("%d", &num);
		if((num % 2) == 0)
			push(&pilha_par, num);
		else
			push(&pilha_impar, num);
		push(&pilha, num);
	}
	
	imprimir(pilha,1);	
	imprimir(pilha_par,2);
	imprimir(pilha_impar,3);
	
			
//	remover = pop(&pilha);
//		if(remover){
//			printf("\n\t ELEMENTE '%d' REMOVIDO COM SUCESSO...", remover->valor);
//			free(remover);
//		}else{
//			printf("\n\t PILHA VAZIA...");
//		}
	
//	imprimir(pilha);
	
}
