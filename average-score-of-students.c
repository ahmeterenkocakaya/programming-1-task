#include <stdio.h>
#include <stdlib.h>

int main(void)

 {
     float midterm;
     float pop_quiz;
     float final;
     float average;
     char name[50], surname[50];

     //First we need a name and surname of student.
     printf("Please enter of your name:");
     scanf("%s",&name);

     printf("Please enter your surname;");
     scanf("%s",&surname);
     //Then we can take student's score
     printf("\nEnter your midterm score:");
     scanf("%f",&midterm);

     printf("\nEnter your pop quiz score:");
     scanf("%f",&pop_quiz);

     printf("\nEnter your final score:");
     scanf("%f",&final);
     //calcuteeee
     average= midterm*0.3+pop_quiz*0.2+final*0.5;
     //Final message
     printf("\ndear %s %s\nyour average scor is %.2f",name,surname,average);

    return 0;
}
