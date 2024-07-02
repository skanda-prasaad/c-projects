#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char name[20];
int acc_no, amt_dpt, amt = 1000, amt_with, amt_transf;

void deposit_money();
void withdraw_money();
void transfer_money();
void account_details();
void transaction_details();
void exit_details();
void menu();

int main()
{
    int choice;
    printf("         ********        \n");
    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter account number: ");
    scanf("%d", &acc_no);

    while (1)
    {
        menu();

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            deposit_money();
            break;

        case 2:
            withdraw_money();
            break;

        case 3:
            transfer_money();
            break;

        case 4:
            account_details();
            break;

        case 5:
            transaction_details();
            break;

        case 6:
            exit_details();
            exit(0);

        default:
            printf("Invalid choice\n");
            break;
        }
    }
}

void menu()
{
    printf("\n**MAIN MENU**\n");
    printf("1. Deposit Money\n");
    printf("2. Withdraw Money\n");
    printf("3. Transfer Money\n");
    printf("4. Account details\n");
    printf("5. Transaction details\n");
    printf("6. Exit\n");
}

void deposit_money()
{
    time_t tm;
    time(&tm);
    FILE *ptr = fopen("Account.txt", "a");
    if (ptr == NULL)
    {
        printf("Error opening file!\n");
        return;
    }

    printf("--DEPOSITING MONEY--\n");
    printf("Enter the amount to be deposited: ");
    scanf("%d", &amt_dpt);
    amt += amt_dpt;
    printf("----Money Deposited----\n");
    printf("Current balance in your account is: %d\n", amt);
    fprintf(ptr, "Rs %d has been deposited to your account\n", amt_dpt);
    fprintf(ptr, "Date and time of transaction: %s\n", ctime(&tm));
    fclose(ptr);
}

void withdraw_money()
{
    time_t tm;
    time(&tm);
    FILE *ptr = fopen("Account.txt", "a");
    if (ptr == NULL)
    {
        printf("Error opening file!\n");
        return;
    }

    printf("--WITHDRAWING MONEY--\n");
    printf("Enter the amount to withdraw: ");
    scanf("%d", &amt_with);
    amt -= amt_with;
    printf("AMOUNT WITHDRAWN\n");
    printf("Current balance in your account is: %d\n", amt);
    fprintf(ptr, "Rs %d has been withdrawn from your account\n", amt_with);
    fprintf(ptr, "Date and time of transaction: %s\n", ctime(&tm));
    fclose(ptr);
}

void transfer_money()
{
    int ac;
    time_t tm;
    time(&tm);
    FILE *ptr = fopen("Account.txt", "a");
    if (ptr == NULL)
    {
        printf("Error opening file!\n");
        return;
    }

    printf("--TRANSFERRING MONEY--\n");
    printf("Enter the amount to be transferred: ");
    scanf("%d", &amt_transf);
    printf("Enter the account number to transfer the amount to: ");
    scanf("%d", &ac);
    if (amt < amt_transf)
    {
        printf("Insufficient balance...!\n");
    }
    else
    {
        amt -= amt_transf;
        printf("--AMOUNT TRANSFERRED--\n");
        printf("Current balance in your account is: %d\n", amt);
        fprintf(ptr, "Rs %d has been transferred to account %d\n", amt_transf, ac);
        fprintf(ptr, "Date and time of transaction: %s\n", ctime(&tm));
    }
    fclose(ptr);
}

void account_details()
{
    printf("--ACCOUNT DETAILS--\n");
    printf("Name: %s\n", name);
    printf("Account Number: %d\n", acc_no);
    printf("Current Balance: %d\n", amt);
}

void transaction_details()
{
    printf("--TRANSACTION DETAILS--\n");
    char ch;
    FILE *ptr = fopen("Account.txt", "r");
    if (ptr == NULL)
    {
        printf("Error opening file!\n");
        return;
    }

    while ((ch = fgetc(ptr)) != EOF)
    {
        putchar(ch);
    }
    fclose(ptr);
}

void exit_details()
{
    printf("--EXITING--\n");
}
