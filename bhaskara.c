#include <stdio.h> 
#include <math.h>

int main(){

	double b, a, c;

	printf("insira o valor de b :");
	scanf("%lf", &b);

	printf("insira o valor de a: ");
	scanf("%lf", &a);

	printf("insira o valor de c: ");
	scanf("%lf", &c);

	double delta = b * b - 4 * a * c;

	if (delta<0){
		printf("A equação não possui raizes reais \n");
	}if (delta==0){
		double raiz = -b / (2 * a);
		printf("A equação possui uma raiz real %2lf\n",raiz);
	}if (delta>0){
		double raiz1 = (-b + pow(delta,0.5)) / (2*a);
		double raiz2 = (-b - pow(delta,0.5)) / (2*a);
		printf("A equação possui duas raizes reais: %2lf e %2lf\n", raiz1, raiz2);
	}
		
	return 0;

}


