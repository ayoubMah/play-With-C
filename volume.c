# include <stdio.h>

int main(void)
{
	int height , length , width , volume , weight ;

	height = 8 ;
	length = 12 ;
	width = 10 ;

	volume = height * length * width ;

	weight = (volume + 165) / 166 ;


	printf("Demensions  %dx%dx%d\n" , height , length , width);
	printf("volume  = %d\n" , volume);
	printf("Demensions weigth = %d\n" , weight);

	return 0 ;
	
}
