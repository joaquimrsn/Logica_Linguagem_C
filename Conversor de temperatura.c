#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*CONVERSOR DE TEMPERATURA DE CELCIUS PARA FARENHEIT E VICE VERSA*/

int convertCelcius(temperatura){
	int celcius;
	celcius = (temperatura-32) /1.8;
	return celcius;
}
int convertFahrenheit(temperatura){
	int fahren;
	fahren = (temperatura*1.8) + 32;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	int temperatura;
	int menu;
	do {
		printf("\n\n\nCONVERSOR DE TEMPERATURA!\n");
		printf("DIGITE A OPÇÃO DESEJADA 1, 2 ou 0!\n\n");
		printf("1 - Celcius para Fahrenheit! \n");
		printf("2 - Fahrenheit para Celcius! \n");
		printf("0 - Sair \n");
		scanf("%d", &menu);
		if (menu<0 || menu >5){
			printf("Opcao inválida!\n\n");
		}
			if (menu == 1){
				printf("Digite o valor em C°: ");
				scanf("%d", &temperatura);
				printf("O valor em Fahrenheit é %d F°!", convertFahrenheit(temperatura));
			}else if (menu == 2){
				printf("Digite o valor em F°: ");
				scanf("%d", &temperatura);
				printf("O valor em Celcius é %d C°!", convertCelcius(temperatura));
			}
	}	while(menu !=0);
	
	return 0;
}
