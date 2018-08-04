#include <stdio.h>
#include <stdlib.h>
unsigned long long factorial(int num){
    int i;
    unsigned long long fact=1;
    for(i=num; i>1; i--){
        fact*=i;
    }
    return fact;
}
int reverseInt(int sth){
    int reverse=0;
    while (sth !=0){
       reverse= reverse*10+(sth%10);
       sth= sth/10;
    }
    return reverse;
}
float powerPosNeg(float base, int pow){
    if (pow==0)
        return 1;
    if (pow>0){
        return base*powerPosNeg(base, pow-1);
    }
    if (pow<0){
        pow= abs(pow);
        return (1/base)*powerPosNeg(1/base, pow-1);
    }
}
void maxMin (int* a, int n, int* max, int* min){
    int i=0;
    *max=*a;
    *min=*a;
    for (i=1; i<n; i++){
        if(*(a+i)>*max)
            *max=*(a+i);
        if(*(a+i)<*min)
            *min=*(a+i);
    }
}


int main()
{
// Question 1:
/*
    int num;
    printf("enter Factorial: ");
    scanf("%d", &num);
    printf("%lld", factorial(num));

*/
// Question 2:
/*
   int sth;
   printf("enter # to reverse: ");
   scanf("%d", &sth);
   printf("%d", reverseInt(sth));
*/

// Question 3:
/*
   float num;
   int pow;
   printf("Enter number and power to raise: ");
   scanf("%f%d", &num, &pow);
   printf("%f raised to %d equals: %f", num, pow, powerPosNeg(num, pow));
*/

// Question 4:

   int n,i;
   scanf("%d", &n);
   int a[n];
   for (i=0; i<n; i++)
        scanf("%d", &a[i]);
   int max, min;
   maxMin(a, n, &max, &min);
   printf("Max=%d , Min= %d", max, min);


// Bonus:
/*
   int size, wordcount=0, longestword=0, lettercount=0;
   printf("enter string size: ");
   scanf("%d", &size);
   char str[size];
   printf("Enter string:");
   scanf("%s", str);
   str[size]='\0';
   int i, j=0, k=0;
   int m;
   for(i=j; i<size;){
       if (str[i]=='('){
       for(m=i+1; str[m]!=')'; m++)
          if ((str[m+1]=='_'||str[m+1]==')')&& (str[m]!='_'&& str[m]!='('))
            wordcount++;
          k=m+1;
       }
       for(j=k; (j<size && str[j]!='_' && str[j]!='('); j++){
           lettercount++;
       }
       if (lettercount>longestword)
           longestword=lettercount;
       lettercount=0;
       k=j+1;
       i=j;
   }
   printf("longest word: %d\nWords in parantheses: %d", longestword, wordcount);
   return 0;
*/
}
