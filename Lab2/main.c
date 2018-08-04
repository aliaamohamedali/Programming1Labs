#include <stdio.h>
#include <stdlib.h>

int count (int number){
    int i=1;
    while (number > 9){
        number = number/10;
        i++;
    }
    return i;
}

int main()
{
// Question 1:
/*
    int n, i, sum=0;
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Average: %f\n", (float)sum/n);
    for(i=0; i<n; i++){
        printf("Element # %d: %d. Deviation= %f\n", i+1, arr[i], (float)arr[i]-(float)sum/n);
    }
*/

// Question 2:
/*
  int i, j, k;
  int rowa, cola, rowb, colb;

  printf("Enter Matrix row & column:\n");
  scanf("%d%d", &rowa, &cola);

  int matrix1[rowa][cola];

   printf("\nEnter First Matrix Elements:\n");
   for (i = 0; i < rowa; i++) {
      for (j = 0; j < cola; j++) {
         scanf("%d", &matrix1[i][j]);
      }
   }
   rowb=cola;
   printf("Enter 2nd Matrix column:\n");
   scanf("%d", &colb);

   int matrix2[rowb][colb];

   printf("\nEnter Second Matrix:\n");
   for (i = 0; i < rowb; i++) {
      for (j = 0; j < colb; j++) {
         scanf("%d", &matrix2[i][j]);
      }
   }

   printf("The First Matrix is:\n");
   for (i = 0; i < rowa; i++) {
      for (j = 0; j < cola; j++) {
         printf(" %d ", matrix1[i][j]);
      }
      printf("\n");
   }

   printf("The Second Matrix is:\n");
   for (i = 0; i < rowb; i++) {
      for (j = 0; j < colb; j++) {
         printf(" %d ", matrix2[i][j]);
      }
      printf("\n");
   }

   int sum = 0;
   int multiple[rowa][colb];
   for (i = 0; i < rowa; i++) {
      for (j = 0; j < colb; j++) {
         sum=0;
         for (k = 0; k < rowb; k++) {   //Remember rowb = cola
            sum += matrix1[i][k] * matrix2[k][j];
         }
         multiple[i][j] = sum;
         sum=0;
      }
   }

   printf("\nMultiplication Of Two Matrices:\n");
   for (i = 0; i < rowa; i++) {
      for (j = 0; j < colb; j++) {
         printf(" %d ", multiple[i][j]);
      }
      printf("\n");
   }
*/

// Question 3:
/*
   int n, i;
   scanf ("%d", &n);
   int space[n][3];
   for (i=0; i<n; i++){
      scanf("%d%d%d", &space[i][0], &space[i][1], &space[i][2]);
   }
   int k, sum=0;
   for (k=0; k<3; k++){
       for (i=0; i<n; i++){
       sum+= space[i][k];
       }
   if (sum!=0){
       printf("NO"); return 0;
   }
   sum=0;
   }
   printf("YES");
*/

// Question 4:
/*
   char *testSubject=NULL, ch;
   int i=0;
   testSubject= (char*)malloc(2*sizeof(char));
   *testSubject= '\0';
   while ((ch = getchar()) != '\n'){
       *(testSubject+i)= ch;
       i++;
       testSubject=(char*)realloc(testSubject, (2*sizeof(char))+i);
   }
   *(testSubject+i)= '\0';
   printf("\n %s", testSubject);
   getch();
   int size=i-1;
   int palindrome =1;
   for(i=0; i<size; i++){
       if (*(testSubject+i)==*(testSubject+size-i))
        continue;
       else {
        palindrome =0;
        break;
       }
   }
   if (palindrome) printf("\n palindrome");
   else printf("\n Not palindrome");
*/

// Bonus:
/*
   int *arr1, input, i=0;
   arr1= (int*)malloc(sizeof(int));
   *arr1= 0;
   printf("Enter elements array1 (0 to stop): \n");
   scanf("%d", &input);
   while (input !=0){
         *(arr1+i)=input;
         i++;
         arr1= (int*)realloc(arr1, sizeof(int)+i);
         scanf("%d", &input);
   }
   int arr1len=i;
   int *arr2;
   arr2= (int*)malloc(sizeof(int));
   *arr2= 0;
   i=0;
   printf("Enter elements array2 (0 to stop): \n");
   scanf("%d", &input);
   while (input !=0){
         *(arr2+i)=input;
         i++;
         arr1= (int*)realloc(arr1, sizeof(int)+i);
         scanf("%d", &input);
   }
   int arr2len=i;
   int *uni;
   int *intersect;
   uni= (int*)malloc(arr1len*sizeof(int));
   for(i=0; i<arr1len; i++){
    *(uni+i)=arr1[i];
   }
   intersect= (int*)malloc(sizeof(int));
   strcpy(uni, arr1);
   int k, j=0;
   int repeat;
   for(i=0; i<arr2len; i++){
      repeat=0;
      for(k=0; k<arr1len; k++){
            if (arr2[i]==arr1[k]){
                intersect[j]= arr2[i]; j++;
                intersect= (int*)realloc(intersect, sizeof(int)+j);
                repeat= 1;
                break;
            }
            if(!repeat){
              *(uni+arr1len+i)= arr2[i];
              uni = (int*)realloc(uni, sizeof(int)+i);
            }
      }
   printf("Array Intersection:\n");
   for (i=0; i<j; i++){
       printf("%d ", intersect[i]);
   }
   printf("Array Union:\n");
   for (i=0; i<(arr1len+arr2len-2*j); i++){
    printf("%d ", uni[i]);
   }
   }
*/
// Practice Q:
/*
   int row, col, rowSum, i, k;
   printf("Enter row & column: ");
   scanf("%d%d", &row, &col);
   int arr[row][col];
   for (i=0; i<row; i++){
       for(k=0; k<col; k++){
           scanf("%d", &arr[i][k]);
       }
   }
   printf("Array as entered: \n");
   for (i=0; i<row; i++){
       for(k=0; k<col; k++){
           printf("%d", &arr[i][k]);
       }
       printf("\n");
   }
   int *maxRow;
   int temp=0;
   for(i=0; i<row; i++){
      rowSum=0;
      for (k=0; k<col; k++){
          rowSum+=arr[i][k];
      }
      if (rowSum>temp){
        temp=rowsum;
        *maxRow=i;
      }
   }
*/
/*
int number;
    scanf("%d", &number);
    printf("%d", count(number));
    return 0;
*/
}
