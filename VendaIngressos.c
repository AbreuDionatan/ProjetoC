#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define INGRESSOTOTAL 50

typedef struct{
	char nome[50];
	char cpf[20];
	int anoNascimento;
	}comprador;
	comprador comp1[INGRESSOTOTAL];
	int contarIngressos = 0;

void vendaIngresso(){
	printf("digite o nome: \n");
	gets (comp1[contarIngressos].nome);
	printf ("digite o cpf: \n");
	gets(comp1[contarIngressos].cpf);
	printf("digite ano de nascimento: \n");
	scanf("%d", &comp1[contarIngressos].anoNascimento);
	fflsuh(stdin);
	contarIngressos++;
	printf("ingresso vendido!");
	
}
void listarIngressos(){
int i;
	for(i=0; i< contarIngressos; i++);
		printf("nome do comprador:%s", comp1[i].nome);
		printf("cpf do comprador:%s", comp1[i].cpf);
		printf(" ano do nascimento:%d", comp1[i].anoNascimento);
			
}
	system(“pause”);


void validarIngresso(){
char cpf[20];
	printf("Digite o cpf do comprador:");
	scanf("%s", cpf);
int encontrarIngresso = 0 ;
int i;
	for(i=0; i< INGRESSOTOTAL; i++);
		if(srtcmp(comp1[i].cpf, cpf)==0);
		printf("nome:%s", comp1[i].nome);
		printf("cpf:%s", comp1[i].cpf);
		printf("ano nascimento:%d", comp1[i].anoNascimento);
		encontrarIngresso = 1;
		break;
}

	if(!encontrarIngresso){
		printf("ingresso invalido!");
	
}
system(“pause”);


int main(){
	
	setlocale(LC_ALL, "portuguese");
	
comprador comp1;
int opc;



do{
	printf("escolha uma das opçoes: \n");
	printf("1 - vender ingresso \n");
	printf("2 - listar ingressos vendidos \n");
	printf("3 - validar ingressos \n");
	printf("4 - sair\n");
	scanf("%d",&opc);

switch (opc){
	case 1:
		vendaIngresso();
	break;
	
	case 2:
		listarIngressos();
	break;
	
	case 3:
		validarIngresso();
	break;
	
	case 4:
		printf("programa encerrado!");
	break;
	
	default:
		printf("essa opçao nao e valida!");
	system(“pause”);
	break;
	
	}
}while(opc!=4);
return 0;
}


