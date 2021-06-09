#include <iostream>

/* Programa calcula area do Retangulo e Circunferencia e Perimetro do retangulo, circunferencia e triangulo*/
const float pi = 3.14;

float calcAreaRetangulo( float base, float altura){
	float area;
	area = base*altura;
	return area;
}
float calcPerimetroRetangulo(float base, float altura){
	float perimetro;
	perimetro = (base*2) + (altura*2);
	return perimetro;
}
float calcAreaCircunf(float raio){
	float area;
	return area = (raio*raio)*pi;
}
float calcPerimetroCircunf(float raio){
	float perimetro;
	return perimetro = 2*pi*(raio*raio);
}
float calcPerimetroTriang(float lado1, float lado2, float lado3){
	float perimetro  = lado1+lado2+lado3;
	return perimetro;
}

int main() {
	int menu;
	float base;
	float altura;
	float raio;
	float lado1;
	float lado2;
	float lado3;
	
	do {
		printf("\n\n\n MENU - Qual desses figuras geometricas deseja calcular a area ou o perimetro!\n");
		printf("1 - Area do Retangulo!\n");
		printf("2 - Perimetro do Retangulo!\n");
		printf("3 - Area do Circulo!\n");
		printf("4 - Perimetro do Circulo!\n");
		printf("5 - Perimetro do Triangulo!\n");
		printf("0 - Sair!\n\n");
		scanf("%d", &menu);
		if(menu<0 || menu>5){
			printf("Valor invalido!");
		}
		
		if (menu == 1){
			printf("Digite a base em cm: ");
			scanf("%f", &base);
			printf("Digite a altura em cm: ");
			scanf("%f", &altura);
			printf("A area do Retangulo e %.2f cm!", calcAreaRetangulo(base, altura));
				}
			else if (menu == 2){
				printf("Digite a base em cm: ");
				scanf("%f", &base);
				printf("Digite a altura em cm: ");
				scanf("%f", &altura);
				printf("O Perimetro do Retangulo e %.2f cm!", calcPerimetroRetangulo(base, altura));
				}
				else if (menu == 3){
					printf("Digite a base o valor do raio em cm: ");
					scanf("%f", &raio);
					printf("O Perimetro do Retangulo e %.2f cm!", calcAreaCircunf(raio));
					}
					else if (menu == 4){
						printf("Digite a base o valor do raio em cm: ");
						scanf("%f", &raio);
						printf("O Perimetro do Retangulo e %.2f cm!", calcPerimetroCircunf(raio));
						}
						else if (menu == 5){
							printf("Digite o lado 1 em cm: ");
							scanf("%f", &lado1);
							printf("Digite o lado 2 em cm: ");
							scanf("%f", &lado2);
							printf("Digite o lado 3 em cm: ");
							scanf("%f", &lado3);
							printf("O perimetro do triangulo e %.2f cm", calcPerimetroTriang(lado1, lado2, lado3));
						}
		
	} while (menu!=0 );
	return 0;
}
