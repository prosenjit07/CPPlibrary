#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void dec_oct(void);
void dec_hex(void);
void reverse(char *str, int, int);
int main()
{
    int choice;
    printf("\t--------------\n");
    printf("\tRadix converter\n\t----------------\n");
    while (1)
    { // uncomment for repetitive conversion
        printf("Select conversion type\n");
        printf("1.Decimal to octal\n2.Decimal to hexadecimal\n3.Exit\n");
        scanf("%d", &choice);

        if (choice == 1)
            dec_oct();
        else if (choice == 2)
            dec_hex();
        else if (choice == 3)
            return 0;
        else
        {
            printf("Invalid choice \n");
            printf("Try again!! \n");
        }
    }
    return 0;
}
void dec_oct()
{
    int dec, dec_h;
    int i = 0;
    char oct_val[10];
    bool end_conv = false;
    printf("\n Enter the decimal number (interger) \n");
    scanf("%d", &dec);
    dec_h = dec;
    while (!end_conv)
    {
        int mod;

        if (dec < 8)
        {
            oct_val[i] = dec + 48; // 48 comes from ascii table
            // printf("%c",oct_val[i]);
            end_conv = true;
        }
        else
        {
            mod = dec % 8;
            dec = (dec - mod) / 8;
            oct_val[i] = mod + 48;
        }
        i++;
    }
    oct_val[i] = '\0';
    reverse(oct_val, 0, strlen(oct_val) - 1);
    printf("%d in octal is: %s\n\n", dec_h, oct_val);
}
void dec_hex()
{
    int dec, dec_h, i = 0;
    bool end_conv = false;
    char hex_val[10];

    printf("\n Enter the decimal number (interger) \n");
    scanf("%d", &dec);
    dec_h = dec;
    while (!end_conv)
    {
        int mod;
        if (dec < 16)
        {
            if (dec > 9)
                hex_val[i] = dec + 55; // 55 comes from ascii table
            else
                hex_val[i] = dec + 48;

            end_conv = true;
        }
        else
        {
            mod = dec % 8;
            dec = (dec - mod) / 16;
            if (mod > 9)
                hex_val[i] = mod + 55;
            else
                hex_val[i] = mod + 48;
        }
        i++;
    }
    hex_val[i] = '\0';
    reverse(hex_val, 0, strlen(hex_val) - 1);
    printf("%d in hex is: %s\n\n", dec_h, hex_val);
}

// reversing string by recursion
void reverse(char *str, int begin, int end)
{
    char c;

    if (begin >= end)
        return;

    c = *(str + begin);
    *(str + begin) = *(str + end);
    *(str + end) = c;

    reverse(str, ++begin, --end);
}
