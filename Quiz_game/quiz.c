#include <stdio.h>
#include <ctype.h> // For toupper function

int main()
{
    int input;
    char ans1, ans2, ans3, ans4, ans5;
    int points_1, points_2, points_3, points_4, points_5, total;

    printf("------- IT'S QUIZ TIME ------\n");
    printf("--> Enter 5 to enter the quiz\n");
    printf("--> Enter 0 to exit quiz game\n");
    scanf("%d", &input);

    if (input == 5)
    {
        printf("YOU ENTERED QUIZ----\n");

        // Question 1
        printf("1. What does the term 'HTTP' stand for in the context of web development?\n");
        printf("A. HyperText Transfer Protocol\n");
        printf("B. HighText Transfer Protocol\n");
        printf("C. HyperText Transfer Process\n");
        printf("D. HighText Transfer Process\n");
        scanf(" %c", &ans1);
        ans1 = toupper(ans1); // Convert to uppercase
        if (ans1 == 'A')
        {
            printf("You got it right..\n");
            points_1 = 5;
        }
        else
        {
            printf("Incorrect answer\n");
            points_1 = 0;
        }
        printf("Your points for 1st question is %d\n", points_1);
        printf("********************************\n");

        // Question 2
        printf("2. Which company developed the Java programming language?\n");
        printf("A. Microsoft\n");
        printf("B. Oracle\n");
        printf("C. Sun Microsystems\n");
        printf("D. IBM\n");
        scanf(" %c", &ans2);
        ans2 = toupper(ans2); // Convert to uppercase
        if (ans2 == 'B')
        {
            printf("You got it right..\n");
            points_2 = 5;
        }
        else
        {
            printf("Incorrect answer\n");
            points_2 = 0;
        }
        printf("Your points for 2nd question is %d\n", points_2);
        printf("********************************\n");

        // Question 3
        printf("3. What is the primary purpose of a firewall in a computer network?\n");
        printf("A. To increase internet speed\n");
        printf("B. To block unauthorized access\n");
        printf("C. To store data securely\n");
        printf("D. To perform software updates\n");
        scanf(" %c", &ans3);
        ans3 = toupper(ans3); // Convert to uppercase
        if (ans3 == 'B')
        {
            printf("You got it right..\n");
            points_3 = 5;
        }
        else
        {
            printf("Incorrect answer\n");
            points_3 = 0;
        }
        printf("Your points for 3rd question is %d\n", points_3);
        printf("********************************\n");

        // Question 4
        printf("4. Which of the following is a version control system used for tracking changes in code?\n");
        printf("A. Docker\n");
        printf("B. Git\n");
        printf("C. Jenkins\n");
        printf("D. Kubernetes\n");
        scanf(" %c", &ans4);
        ans4 = toupper(ans4); // Convert to uppercase
        if (ans4 == 'B')
        {
            printf("You got it right..\n");
            points_4 = 5;
        }
        else
        {
            printf("Incorrect answer\n");
            points_4 = 0;
        }
        printf("Your points for 4th question is %d\n", points_4);
        printf("********************************\n");

        // Question 5
        printf("5. In the context of data storage, what does SSD stand for?\n");
        printf("A. Solid State Drive\n");
        printf("B. Secure Storage Device\n");
        printf("C. Super Speed Drive\n");
        printf("D. Systematic Storage Disk\n");
        scanf(" %c", &ans5);
        ans5 = toupper(ans5); // Convert to uppercase
        if (ans5 == 'A')
        {
            printf("You got it right..\n");
            points_5 = 5;
        }
        else
        {
            printf("Incorrect answer\n");
            points_5 = 0;
        }
        printf("Your points for 5th question is %d\n", points_5);
        printf("********************************\n");
        total = points_1 + points_2 + points_3 + points_4 + points_5;
        printf("------- Total points scored is %d out of 25 --------\n", total);
    }
    else if (input == 0)
    {
        printf("QUIZ HAS ENDED---\n");
    }
    else
    {
        printf("Invalid input\n");
    }

    return 0;
}
