#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

bool only_digits(string key);
char rotate(char c, int key);

int main(int argc, string argv[])
{
    //Make sure the program is run with only one command-line argument.
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    //Make sure every character in argv[1] is a digit.
    if (!only_digits(argv[1]))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    //Convert argv[1] from a string to a integer.
    int key = atoi(argv[1]);
    string plaintext = get_string("Plaintext: ");
    int plaintext_length = strlen(plaintext);
    printf("Ciphertext: ");
    for (int i = 0; i < plaintext_length; i++)
    {
        printf("%c", rotate(plaintext[i], key));
    }
    printf("\n");
}

bool only_digits(string key)
{
    int key_length = strlen(key);
    for (int i = 0; i < key_length; i++)
    {
        if(!isdigit(key[i]))
        {
            return false;
        }
    }
    return true;
}

char rotate(char plain_character, int key)
{
    char cipher_character;
    if(isalpha(plain_character))
    {
        //Shifting each character by certain amount using alphabetical index.
        if(isupper(plain_character))
        {
            cipher_character = (plain_character - 65 + key) % 26 + 65;
        }
        else
        {
            cipher_character = (plain_character - 97 + key) % 26 + 97;
        }
        return cipher_character;
    }
    else
    {
        return plain_character;
    }
}