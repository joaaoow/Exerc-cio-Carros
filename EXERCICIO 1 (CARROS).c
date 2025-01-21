#include <stdio.h>
#include <locale.h>

void concessionariaFiat(int *carrosF) {  
	printf("---CONCESSION�RIA FIAT---\n");
	printf("Escolha o carro desejado: \n");
	printf("1- Argo.\n");
	printf("2- Punto.\n");
	printf("3- Palio.\n");
		scanf("%i", carrosF);
}

void concessionariaChevrolet(int *carrosC) {
		printf("---CONCESSION�RIA CHEVROLET---\n");
	printf("Escolha o carro desejado: \n");
	printf("1- Prisma.\n");
	printf("2- S10.\n");
	printf("3- Onix.\n");
		scanf("%i", carrosC);
}

void concessionariaFord(int *carrosFord) {
		printf("---CONCESSION�RIA FORD---\n");
	printf("Escolha o carro desejado: \n");
	printf("1- Ka.\n");
	printf("2- Ranger.\n");
	printf("3- Fusion.\n");
		scanf("%i", carrosFord);
}

char nomeCliente[50];
int opcao, carrosF = 0, carrosC = 0, carrosFord = 0;
int main() {
setlocale(LC_ALL, "");
//CADASTRO E ESCOLHA DE SERVI�O
	printf("Informe o nome do cliente: \n");
fflush(stdin);
		gets(nomeCliente);
	printf("Escolha a concession�ria desejada: \n");
	printf("1- Fiat.\n");
	printf("2- Chevrolet.\n");
	printf("3- Ford.\n");
		scanf("%i", &opcao);
system("cls");
		
switch(opcao) {
	case 1:
		printf("Concession�ria escolhida: Fiat.\n");
		concessionariaFiat(&carrosF);
	break;
	
	case 2:
		printf("Concession�ria escolhida: Chevrolet.\n");
		concessionariaChevrolet(&carrosC);
	break;
	
	case 3:
		printf("Concession�ria escolhida: Ford.\n");
		concessionariaFord(&carrosFord);
	break;
	
	default: 
		printf("Essa op��o n�o existe.\n");
	break;
}
system("cls");

//IMPRESSAO DAS INFORMA��ES

	printf("Nome do(a) cliente: %s.\n", nomeCliente);

if(opcao == 1) {
	switch(carrosF) {
	case 1:
		printf("Carro escolhido: Fiat Argo.\n");
		printf("Obrigado por escolher os servi�os da concession�ria Fiat.\n");
	break;
	case 2: 
		printf("Carro escolhido: Fiat Punto.\n");
		printf("Obrigado por escolher os servi�os da concession�ria Fiat.\n");
	break;
	case 3:
		printf("Carro escolhido: Fiat Palio.\n");
		printf("Obrigado por escolher os servi�os da concession�ria Fiat.\n");
	break;
	}
} else if (opcao == 2) {
	switch(carrosC) {
	case 1:
		printf("Carro escolhido: Chevrolet Prisma.\n");
		printf("Obrigado por escolher os servi�os da concession�ria Chevrolet.\n");
	break;
	case 2: 
		printf("Carro escolhido: Chevrolet S10.\n");
		printf("Obrigado por escolher os servi�os da concession�ria Chevrolet.\n");
	break;
	case 3:
		printf("Carro escolhido: Chevrolet Onix.\n");
		printf("Obrigado por escolher os servi�os da concession�ria Chevrolet.\n");
	break;
	}
} else if(opcao == 3) {
	switch(carrosFord) {
	case 1:
		printf("Carro escolhido: Ford Ka.\n");
		printf("Obrigado por escolher os servi�os da concession�ria Ford.\n");
	break;
	case 2: 
		printf("Carro escolhido: Ford Ranger.\n");
		printf("Obrigado por escolher os servi�os da concession�ria Ford.\n");
	break;
	case 3:
		printf("Carro escolhido: Ford Fusion.\n");
		printf("Obrigado por escolher os servi�os da concession�ria Ford.\n");
	break;
		}	
	}	
return 0;	
}
