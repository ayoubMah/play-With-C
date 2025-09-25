# include <stdio.h>
# define H 1000

int main(void)
{
	float x;
	printf("Enter the number of KM : \n");
	scanf("%f" , &x);
	printf("%.2fkm  = %.2fm\n" , x , x * H);

	return 0 ;


}
