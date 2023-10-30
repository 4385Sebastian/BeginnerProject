#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // TODO
    string message = get_string("Message: ");
    int message_length = strlen(message);
    int decimal[message_length];
    int binary_number[] = {0, 0, 0, 0, 0, 0, 0, 0};

    for (int i = 0; i < message_length; i++)
    {
    //Turn the text into decimal numbers.
        decimal[i] = message[i];
        printf("%d\n", decimal[i]);
    //Convert the decimal number, decimal[i], into equivalent binary number.
        for (int j = 0; j < BITS_IN_BYTE; j++)
        {
            binary_number[BITS_IN_BYTE - (j + 1)] = decimal[i]%2;
            decimal[i] /= 2;
        }
        for (int k = 0; k < BITS_IN_BYTE; k++)
        {
            print_bulb(binary_number[k]);
        }
        printf("\n");
    }

}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
