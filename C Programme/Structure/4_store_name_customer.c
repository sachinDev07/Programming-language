#include <conio.h>
#include <stdio.h>

struct customer
{
    char name[10];
    int acc_no;
    int bal;
};

void displaybalance(struct customer cus[], int n);
void addbalance(struct customer cus[], int n);

void displaybalance(struct customer cus[], int n)
{
    printf("\n\nName of customer having balance less than 200rs :");
    for (int i = 0; i < n; i++)
    {
        if (cus[i].bal < 200)
        {
            printf("\nCustomer name : %s", cus[i].name);
        }
    }
}

void addbalance(struct customer cus[], int n)
{
    printf("\n\nName of all customers having more than 1000 balance :");
    for (int i = 0; i < n; i++)
    {
        if (cus[i].bal > 1000)
        {
            printf("\nCustomer name : %s", cus[i].name);
            int sum = cus[i].bal + 100;
            printf("\nNew balance : %d", sum);
        }
    }
}

int main()
{
    int n;

    printf("Enter no of customers : ");
    scanf("%d", &n);

    struct customer cus[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nCustomers : %d", i + 1);
        printf("\nCustomer name : ");
        scanf("%s", cus[i].name);
        printf("Account number : ");
        scanf("%d", &cus[i].acc_no);
        printf("Balance of Customer : ");
        scanf("%d", &cus[i].bal);
    }

    displaybalance(cus, n);
    addbalance(cus, n);
}