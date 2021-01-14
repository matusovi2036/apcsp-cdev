#include <stdio.h>



// student structure
struct Student {
	char firstName[50];
	char lastName[50];
	int age;
	int studentid;
}
//struct Student...
struct Student stud1;
struct Student stud2;

strcpy(stud1.firstName, "John");
strcpy(stud1.lastName, "Greyson");
strcpy(stud1.age, 16)
strcpy(stud1.studentid, 14380746);

strcpy(stud2.firstName, "Iris");
strcpy(stud2.lastName, "Sanchez");
strcpy(stud2.age, 14);
strcpy(stud2.studentid, 29834732);


void printStudent(struct Student* student)
{
}


void printAllStudents(struct Student students[], int num)
{
 	 printStudent(stud1);
 	 printStudent(stud2);
}


int main()
{

  // an array of students
  //xxx students;

  int numStudents = 0;
  while (1)
  {
    char c;
    printf("\nEnter a to add, p to print, q to quit:");
    fgets(input, 256, stdin);
    if (sscanf(input, "%c", &c) != 1) continue;
    if (c == 'q') 
    {
      break;
    }
    else if (c == 'p')
    {
      // print all students
      printAllStudents(students, numStudents);
      continue;
    }
    else if (c == 'a')
    {
      // enter a new student
    
      numStudents++;
    }
  }
  
  printf("\nGoodbye!\n");
}
