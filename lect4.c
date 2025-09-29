 #include <stdio.h>

int main() {
    int amount;
    printf("Enter an amount in Indian Rupees: ");
    scanf("%d", &amount);


    getchar();

    char ch;
    printf("Which currency do you want to convert to? ($ for USD): ");
    scanf("%c", &ch);

    switch (ch) {
        case '$':
            printf("Converted amount: %.2f USD\n", (float)amount / 87);
            break;
        default:
            printf("Invalid currency choice.\n");
            break;
    }

 
    return 0;
}