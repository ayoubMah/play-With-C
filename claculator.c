# include <stdio.h>

int main(void)
{
	printf("============= Welcome X + Y Calculator ===============\n");
	int x, y , result ;
	printf("Please Enter the First Number : \n");
	scanf("%d" , &x);
	printf("Please Enter the Second Number : \n");
	scanf("%d", &y); 
	result = x + y ;
	printf ("The Result of %d+%d = %d\n",x ,y ,result) ;

	return 0 ;




}
