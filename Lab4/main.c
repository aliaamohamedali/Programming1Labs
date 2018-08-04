#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    float real;
    float imaginary;
}complex;
typedef struct {
    int ID;
    char name[50];
    float GPA;
}student;

void readData(student *std, int n){
    int i;
    char nameTemp[50];
    for (i=0; i<n; i++){
        printf("Enter data (ID, name & GPA) of Student #%d\n", i+1);
        scanf("%d%s%f", &(std[i].ID), nameTemp , &(std[i].GPA));
        strcpy(std[i].name, nameTemp);
    }
}
void raiseGPA (student *std, int n){
    int i;
    for(i=0; i<n; i++)
        if(std[i].GPA<2)
           std[i].GPA+=0.2;
}
void printData(student *std, int n){
    int i;
    for(i=0; i<n; i++){
        printf("Data of Student # %d:- ID:%d\tName:%s\tGPA:%f\n", i+1, std[i].ID, std[i].name, std[i].GPA);
    }
}
void maxGPA (student *std, int n){
    int i, temp=0;
    int max;
    max=std[0].GPA;
    for(i=1; i<n; i++)
        if(std[i].GPA>max){
           max=std[i].GPA;
           temp=i;
        }
    printf("Student Name: %s\nStudent Grade: %f", std[temp].name, std[temp].GPA);
}

complex addComplex(complex a, complex b){
   // struct
   complex temp;
   temp.real=a.real+b.real;
   temp.imaginary=a.imaginary+b.imaginary;
   return (temp);
   // return struct complex {.real=a.real+b.real, .imaginary=a.imaginary+b.imaginary};
}
void printComplex (complex a){
   printf("Complex Number: %f+%fi\n", a.real, a.imaginary);
}
complex readComplex(){
   // struct
   complex temp;
   printf("Please enter Complex #:");
   scanf("%f%f", &temp.real, &temp.imaginary);
   return (temp);
}
void addReal(float num, complex *a){
   a->real+=num;
}
int compareComplex (complex a, complex b){
   float maga, magb;
   maga=sqrt(pow(a.real, 2)+pow(a.imaginary, 2));
   magb=sqrt(pow(b.real, 2)+pow(b.imaginary, 2));
   if(maga==magb)
    return 0;
   if(maga>magb)
    return 1;
   if(maga<magb)
    return -1;
}

int main()
{

  // struct:
  complex a, b, add;
  a=readComplex();
  b=readComplex();
  printComplex(a);
  printComplex(b);
  add= addComplex(a, b);
  printComplex(add);
  float x;
  printf("Enter real # to add:");
  scanf("%f", &x);
  int *pntr;
  pntr=&a.real;
  addReal(x, pntr);
  printComplex(a);
  printf("%d", compareComplex(a, b));

// Problem 2:
/*
  int n;
  printf("Enter # of students: ");
  scanf("%d", &n);
  // struct
  student std[n];
  readData(std, n);
  raiseGPA(std, n);
  printData(std, n);
  maxGPA(std, n);
*/
}
