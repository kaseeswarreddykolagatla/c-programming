#include <stdio.h>
#include <string.h>

struct customer {
    int account_no;
    char name[50];
    float balance;
};

void print_low_balance_customers(struct customer bank_customers[], int size) {
    printf("Customers with balance less than 100 Rs:\n");
    int i;
    for (i = 0; i < size; i++) {
        if (bank_customers[i].balance < 100) {
            printf("Account No: %d, Name: %s\n", bank_customers[i].account_no, bank_customers[i].name);
        }
    }
}

int main() {
    struct customer bank_customers[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("Enter details for customer %d:\n", i+1);
        printf("Account No: ");
        scanf("%d", &bank_customers[i].account_no);
        printf("Name: ");
        scanf("%s", bank_customers[i].name);
        printf("Balance: ");
        scanf("%f", &bank_customers[i].balance);
    }

    print_low_balance_customers(bank_customers, 3);

    return 0;
}



