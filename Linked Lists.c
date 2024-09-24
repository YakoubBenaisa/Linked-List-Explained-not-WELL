
// Created by Yakoub

#include <stdio.h>  // Importing standard input/output library
#include <stdlib.h> // This lib contains malloc function


 // Creating a Node called Student:
 /* To simplify : Imagine a memory case called "Student" which is composed of mini case "Name", "Age" and other one called
  "next" which contains the pointer of the next node */

 struct Students{
    char *Name;  // main info {Name}
    int Age;    // main info {Age}
    struct Students *next; // Pointer to the next
};
int main() // Main function
{
    struct Students *Student1;  // "Student1" is the head of the linked list "Students" and can assign its value directly as in "Student2" AND "Student3"
    Student1 = malloc(sizeof (struct Students));    // allocating memory for "Student1"

    Student1 ->Name = "Yakoub"; // Student1 name value
    Student1->Age = 20; // Student1 Age value
    Student1->next = NULL; // initialize it temporary with null             *TODO*

    //printf("Name : %s \nAge : %d",head->Name,head->Age);

    struct Students *Student2 = malloc(sizeof(struct Students)); // allocation

    Student2->Name = "Ziad"; // posting values
    Student2->Age = 10; // posting values
    Student2->next = NULL;  // posting values

    Student1->next = Student2;  // initialize "Student1" -next- pointer by "Student2" address focus on *TODO*

    struct Students *Student3 = malloc(sizeof(struct Students)); // same damn thing..

    Student3->Name = "Test";    // same damn thing..
    Student3->Age = 12; // same damn thing..
    Student3->next = NULL;  // same damn thing..

    Student2->next = Student3;  // same damn thing..             *TODO*

    printf("Name : %s \nAge : %d",Student1->Name,Student1->Age); // Printing "Student1" info
    printf("\n\nName : %s \nAge : %d",Student2->Name,Student2->Age);// Printing "Student2" info
    printf("\n\nName : %s \nAge : %d",Student3->Name,Student3->Age);// Printing "Student3" info

    /* NOTICE: I used *TODO* just to get your attention */

    return 0;
}

/* Hope you DID understand it well,
 * Here is some resources you should check!
    1. YouTube channels:
        * Neso Academy: https://www.youtube.com/@nesoacademy
        * MyCodeSchool: https://www.youtube.com/@mycodeschool
        * FreeCodeCamp: https://www.youtube.com/watch?v=KJgsSFOSQv0
    2. Websites:
        * Stackoverflow: https://stackoverflow.com/
        * GeekforGeeks: https://www.geeksforgeeks.org/
        * w3school: https://www.w3schools.com/
*/
