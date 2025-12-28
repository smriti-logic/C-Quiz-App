#include <stdio.h>
int ask_question(char *question, char options[5][100], int correct_option)
{
    int user_answer;
    printf("\n%s\n", question);
    for (int i = 0; i < 4; i++)
    {
        printf("%d. %s\n", i + 1, options[i]);
    }
    printf("Your Answer : ");
    scanf("%d",&user_answer);
    if (user_answer == correct_option)
    {
        printf("Correct !\n");
        return 1;
    }
    else
    {
        printf("Wrong. Correct answer was : %d. %s\n", correct_option, options[correct_option - 1]);
        return 0;
    }    
}    
int main()
{
    int score = 0;
    printf("Welcome to the Quiz App ! \n");

    char q1[] = "Q1. Which variable is used to declare a variable in c ?";
    char o1[5][100] = {"var" , "declare", "int,float,char" , "variable"};
    score += ask_question(q1,o1,3);

    char q2[] = "Q2. What is the correct format to declare pointer in c ?";
    char o2[5][100] = {"int ptr;" , "int *ptr", "pointer int ptr;", "int &ptr;"};
    score += ask_question(q2,o2,2);

    char q3[] = "Q3. Which of the following is a keyword in c ?";
    char o3[5][100] = {"default" , "function" , "then" , "define"};
    score += ask_question(q3,o3,1);

    char q4[] = "Q4. Which data type is used to store a whole number ?";
    char o4[5][100] = {"float" , "double" , "int" , "char"};
    score += ask_question(q4,o4,3);

    printf("\nQuiz Completed!\n");
    printf("Your Score: %d out of 4\n ", score);
    if (score==4)
    {
        printf("Excellent !, You nailed it !\n");    
    }
    else if (score == 3)
    {
        printf("Well Done!, you are so close\n");
    }
    else if (score == 2)
    {
        printf("Good Job, keep improving");
    }
    else
    {
        printf("Keep practicing.You'll get better .\n");
    }
    return 0;
}    
