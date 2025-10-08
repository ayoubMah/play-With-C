#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int day;
  int month;
  int year;
} day;


int main(void)
{
  day *mylist = calloc(10, sizeof(day));

  mylist[0].day = 1;
  mylist[0].month = 1;
  mylist[0].year = 2025;

  int i;
  for (i = 0; i < 10; i++) {
    mylist[i].day = i+2;
    mylist[i].month = i+1;
    mylist[i].year = 2024-i;

    printf("myList[%d] = %d / %d / %d\n", i,mylist[i].day,mylist[i].month,mylist[i].year);
    
  }
  return 0;
}
