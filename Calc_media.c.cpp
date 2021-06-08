#include <iostream>
#define N 3
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Calcular N valores inteiros e mostrar a média

int main(int argc, char** argv) {
	int i;
	float media;
	int num[2];
	int soma;
	
	for (i=0; i<N; i++){
		printf("Digite o numero %d: ", i+1);
		scanf("%d", &num[i]); 
		soma += num[i];
		media = soma/N;	
	}
	
	printf("Media = %.2f", media);

return 0;
}
