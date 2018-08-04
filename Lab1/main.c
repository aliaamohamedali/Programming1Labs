#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
// Program to write factors of a positive integer
/*
    int number, i;
    do{
        printf("please enter a positive integer: ");
        scanf("%d", &number);
    }while (number %2==1);
    for (i=1; i<=number/2; i++){
        if (number%i==0)
            printf("%d ", i);
    }
    printf("%d", number);
    return 0;
*/
// Program to check Armstrong's Number
/*
     int num, digits=1, i=0;
     double sum=0;
     printf("Enter Number: ");
     scanf("%d", &num);
     int newNum= num;
     while(newNum>9){
        newNum /= newNum;
        digits++;
     }
     int[] digits;
     newNum= num;
     for (i=0; i<digits; i++){
          digits[i]= newNum%10;
          newNum /= 10;
          sum += pow(digits[i], digits);
     }
     if(sum==num)
        printf("Armstrong Number!");
     else
        printf("Not Armstrong Number");
*/
// Program to get sin of an angle
/*
   int n, i, fac=1, k, factor= 1;;
   double radian;
   printf("Enter Terms: ");
   scanf("%d", &n);
   printf("Enter angle: ");
   scanf("%f", &radian);
   double sin= radian;
   for (i=1; i<=n; i++){
        for (k=2*i+1; k>1; k--){
            fac *= k;
        }
       factor *= -1;
       sin+= pow(radian, 2.0*i+1)/fac;
   }
   printf("%f", sin);
*/
}
