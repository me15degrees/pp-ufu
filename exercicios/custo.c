#include <stdio.h>
int main(){
	float custo, valor;
	printf("digite o custo: ");
	scanf("%f",&custo);
	if (custo < 12000){
		valor = custo * 1.05;
	}
	else if (custo < 25000){
		valor = custo * 1.25;
	}

	else{
		valor = custo * 1.35;
	}
		
	printf("O valor de custo é: R$ %.2f\n",valor);

	return 0;
}	
