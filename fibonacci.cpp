#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
	int i = 0, digito = 0, num1 = 0, num2 = 1, soma;
	
	printf("\nSequência de Fibonacci \n");
	printf("\nDigite um número: ");
	scanf("%d", &digito);
	printf("\n");
	
	for(i = 0; i < digito; i++)
	{
		printf("%d ", num1);
		soma = num1 + num2;
		num1 = num2;
		num2 = soma;
	}
	
	printf("\n\n");
	system("pause");
	return(0);
}
