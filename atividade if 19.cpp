    #include <stdio.h>

int main() {
	int n1;
	
	printf("digite um numero divisivel por 5 ou 3 mas nao pelos dois ao mesmo tempo");
	
	printf("\n\nescolha um numero: ");
	scanf("%d", &n1);
	
	if(n1 % 3 == 0 && n1 % 5 != 0) {
		printf("\na divisao deu: %d", (n1 / 3));
	}else if(n1 % 3 != 0 && n1 % 5 == 0) {
		printf("\na divisao deu: %d", (n1 / 5));
	}else{
		printf("\ndigite um numero divisivel por 5 ou 3 mas nao pelos dois ao mesmo tempo");
	}
}
