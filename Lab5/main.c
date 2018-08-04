#include <stdio.h>
#include <stdlib.h>

typedef struct{
 int ID;
 char firstName[20];
 char lastName[20];
 float GPA;
 char grade;
}student;

char determineGrade(student* std){
if(std->GPA>3.5){
    return 'A';
}
if(std->GPA>3){
    return 'B';
}
if(std->GPA>2.5){
    return 'C';
}
if(std->GPA>2){
    return 'D';
}
return 'F';
}

void readData(student* std, int* numStudents){
   int i=0;
   FILE *fptr;
   fptr = fopen("student_file.txt", "r");
   if(fptr==NULL){
     printf("Error opening file!");
     exit(1);
   }
   while(!feof(fptr)){
     fscanf(fptr, "%d %s %s %f", &((std+i)->ID), (std+i)->firstName, (std+i)->lastName, &((std+i)->GPA));
     fscanf(fptr, "\n");
     (std+i)->grade=determineGrade((std+i));
      i++;
      (*numStudents)++;
     }
   fclose(fptr);
}

float maxMinAvg(student* std, int numStudents, float* max, float* min){
   *max=0; *min=5; int i; float sum=0;
   for(i=0; i<numStudents; i++){
      sum+=(std+i)->GPA;
      if((std+i)->GPA>*max)
         *max=(std+i)->GPA;
      if((std+i)->GPA<*min)
         *min=(std+i)->GPA;
   }
   return (sum/numStudents);
}

void printList (student* std,int numStudents, float max, float min, float avg){
   int i;
   printf("STUDENT ID\tSTUDENT NAME\tGPA\tGRADE\n");
   for(i=0; i<numStudents; i++){
      printf("%10d\t%s %s\t%.2f\t%c\n", (std+i)->ID, (std+i)->firstName, (std+i)->lastName, (std+i)->GPA, (std+i)->grade);
   }
   printf("hhhhh");
   printf("Max GPA: %f\nMin GPA: %f\nAverage GPA: %f\n", max, min, avg);
}

void copyFile(char* src, char* dest){
    char line[70];
    FILE* srcptr=fopen(src, "r");
    if(srcptr==NULL){
        printf("Error opening file");
        exit(1);
    }
    FILE* destptr=fopen(dest, "w");
    if(destptr==NULL){
        fclose(srcptr);
        printf("Error opening file");
        exit(1);
    }
    while(!feof(srcptr)){
        fgets(line, 70, srcptr);
        fputs(line, destptr);
    }
    fclose(srcptr);
    fclose(destptr);

    /*
    FILE *srcPtr, *destPtr;
    errno_t err1=0, err2=0;
    err1=fopen_s(&srcPtr, src);
    err2=fopen_s(&destPtr, dest);
    int a;
    if(err1!=0){
        return -1;
    }
    if (err2 !=0){
        fclose(srcPtr);
        return -1;
    }
    while(!feof(srcPtr)){
        a=fgetc(srcPtr);
       if(a!=feof(srcPtr))
        fputc(a, destPtr);
       else break;
    }
    fclose(srcPtr);
    fclose(destPtr);
    */
}

int main()
{
  student std[50];
  int numStudents=0;
  float max, min, avg;
  char sourceFile[50], destFile[50];
  /*
  printf("please enter source file name: ");
  gets(sourceFile); */
  readData(std, &numStudents);
  /*
   int i=0;
   FILE *fptr = fopen("student_file.txt", "r");
   if(fptr==NULL){
     printf("Error opening file!");
     exit(1);
   }
   while(!feof(fptr)){
     fscanf(fptr, "%d %s %s %f\n", &std[i].ID, std[i].firstName, std[i].lastName,&std[i].GPA);
     std[i].grade=determineGrade(&std[i]);
     i++;
     numStudents++;
   }
   printf("%d\n",numStudents);
  fclose(fptr);
  */
  avg =maxMinAvg(std, numStudents, &max, &min);
  printList(std, numStudents, max, min, avg);
  printf("please enter source file name: ");
  scanf("%s", sourceFile);
  printf("please enter destination file name: ");
  scanf("%s", destFile);
  copyFile(sourceFile, destFile);
}
