/*
Name:Simon Rukungu Njiiri 
Reg no:CT101/G/26500/25
Description: password program
/*
#include <stdio.h>
#include <string.h>

int main() {
    char password[50];
    const char correct_password[] = "1234";

    do {
        printf("Enter the password: ");
        scanf("%s", password);
    } while (strcmp(password, correct_password) != 0);

    printf("Access Granted\n");

    return 0;
}
