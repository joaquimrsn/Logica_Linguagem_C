#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int calcArea(int base, int altura){
	int area;
	area = base*altura;
	return area;
}

int calcPerimetro(int base, int altura){
	int perimetro;
	perimetro = (base*2) + (altura*2);
	return perimetro;
}

int main(int argc, char** argv) {
	int base;
	int altura;
	printf("Digite o valor da base do retangulo: ");
	scanf("%d", &base);
	printf("Digite o valor da altuma do retangulo :"); 
	scanf("%d", &altura);
	printf("\nA area do retangulo e %d! \n\n", calcArea(base, altura));
	printf("O perimetro do retangulo e %d!", calcPerimetro(base, altura));
	return 0;
}
