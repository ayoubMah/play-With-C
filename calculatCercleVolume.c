# include <stdio.h>
# define COEF (4/3 * 3.14)

int main(void) 
{
	float r , volume ;
	printf("Can you please Enter the raduis of your sphere : \n");
	scanf("%f" , &r);
	volume = COEF * r * r * r ;
	printf("The volume of the sphere is : %.2f metter cube\n" , volume);


}
