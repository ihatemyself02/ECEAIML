#include <stdio.h>
int main(void) {
   int count;
   int num1, num2, sum;


    count=0;
    while(count<5)
    {
      scanf("%d %d", &num1, &num2);
      sum = num1+num2 ;
      printf("%d + %d = %d\n", num1 ,num2, sum);
    }
    return 0;
}
