# include <stdio.h>
# define PI 3.14

int main(void)
{
	printf("============= Welcome X + Y Calculator ===============\n");
	int x, y , result;
	printf("Please Enter the First Number : \n");
	scanf("%d" , &x);
	printf("Please Enter the Second Number : \n");
	scanf("%d", &y); 
	result = x + y ;
	printf ("The Result of %d+%d = %d\n",x ,y ,result) ;

	printf("The surface of a cercle with r = x is %f/n", x * x * PI);


	return 0 ;




}
