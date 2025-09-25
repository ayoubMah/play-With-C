# include <stdio.h>
# define TAX 0.05

int main(void)
{
	int amount ;
	float totale ;

	printf("Enter the pure amount : \n");
	scanf("%d", &amount);

	totale  = (TAX * amount) + amount ;

	printf("The totale amount is : %.2f \n", totale);

	return 0 ;

}

