#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char name[20];
int acc_no, amt_dpt, amt = 1000;

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
    printf("--DEPOSITING MONEY--\n");

    printf("Enter the amount to be deposited: ");
    scanf("%d", &amt_dpt);
    amt += amt_dpt;
    printf("----Money Deposited----\n");
    printf("Current balance in your account is: %d\n", amt);
    fprintf(ptr, "Rs%d has been deposited to Your account\n", amt_dpt);
    fprintf(ptr, "Date and time of transcation %s", ctime(&tm));
}

void withdraw_money()
{
    printf("--WITHDRAWING MONEY--\n");
    // Implement the withdraw_money function here
}

void transfer_money()
{
    printf("--TRANSFERRING MONEY--\n");
    // Implement the transfer_money function here
}

void account_details()
{
    printf("--ACCOUNT DETAILS--\n");
    // Implement the account_details function here
}

void transaction_details()
{
    printf("--TRANSACTION DETAILS--\n");
    // Implement the transaction_details function here
}

void exit_details()
{
    printf("--EXITING--\n");
    // Implement any necessary exit details here
}
