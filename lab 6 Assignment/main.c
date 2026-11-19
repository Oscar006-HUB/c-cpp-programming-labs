/*
 * Lab 6 Assignment: ABC Bank ATM simulation.
 *
 * - The user has up to 4 attempts to enter the correct 4-digit PIN,
 *   after which the account is locked.
 * - Menu: Check Balance, Withdrawal, Deposit, Transfer.
 * - The user can perform several transactions in one session.
 *
 * Demo PIN: 1234   Starting balance: 1000.50
 */
#include <stdio.h>
#include <stdlib.h>

float balance = 1000.5;

int authenticate(int pin);
float requestAmount(void);
void deposit(void);
void withDraw(float amount);
void transfer(void);

int main()
{
    static int tries = 0;
    int pin;
    int menu_item;
    int response;

    /* Login: keep asking for the PIN until it is correct or the account locks */
    for (;;) {
        puts("WELCOME TO ABC BANK\nEnter your four digit pin");
        pin = 0;
        scanf("%d", &pin);

        if (authenticate(pin))
            break;

        tries++;
        printf("Invalid pin after %d tries\n", tries);

        if (tries > 3) {
            puts("Account locked. Too many failed attempts.");
            return 0;
        }
    }

    /* Transaction loop */
    do {
        puts("Select an option\n1. Check Balance\n2. Withdrawal\n3. Deposit\n4. Transfer");
        scanf("%d", &menu_item);

        switch (menu_item) {
            case 1:
                printf("%g\n", balance);
                break;
            case 2:
                withDraw(requestAmount());
                break;
            case 3:
                deposit();
                break;
            case 4:
                transfer();
                break;
        }

        puts("Would you like to perform another transaction?\n1. Yes\n2. No");
        scanf("%d", &response);
    } while (response == 1);

    puts("Thank you for banking with us");
    return 0;
}

/* Returns 1 if the PIN is correct, otherwise 0 */
int authenticate(int pin)
{
    if (pin == 1234)
        return 1;
    return 0;
}

/* Prompts for and returns an amount */
float requestAmount(void)
{
    float amount;
    printf("Enter amount: ");
    scanf("%f", &amount);
    return amount;
}

void deposit(void)
{
    float amount = requestAmount();
    balance += amount;
    puts("Deposit successful. ");
}

void withDraw(float amount)
{
    if (balance >= amount) {
        balance -= amount;
        puts("Withdrawal successful. ");
    } else {
        puts("Insufficient balance.");
    }
}

void transfer(void)
{
    int account_number;
    float amount;

    printf("Enter recipient's account number: ");
    scanf("%d", &account_number);
    amount = requestAmount();

    if (balance >= amount) {
        balance -= amount;
        puts("Transfer successful.");
    } else {
        puts("Insufficient balance for transfer.");
    }
}
