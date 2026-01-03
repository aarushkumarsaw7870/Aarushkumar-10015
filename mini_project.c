#include <stdio.h>
int main() {
    printf("name:Aarush kumar\n");
    printf("ERP:10015\n");
    int password = 1234;     
    int input;
    int attempts = 3; 
    while (attempts > 0) {
        printf("Enter password: ");
        scanf("%d", &input);
        if (input == password) {
            printf("Access Granted\n");
            break;
        } else {
            attempts--;
            printf("Wrong Password. Attempts left: %d\n", attempts); }
    }
    if (attempts == 0) {
        printf("Access Blocked. System Locked\n");
    }
    return 0;
}
