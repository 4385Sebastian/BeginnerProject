#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void encryption (string plaintext, string key);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    int key_length = strlen(argv[1]);
    if (key_length != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }
    for (int i = 0; i < 26; i++)
    {
        if (!isalpha(argv[1][i]))
        {
            printf("Key must contain alphabetical characters.\n");
            return 1;
        }
    }
    //Check if every character in the key is unique.
    for (int i = 0, j = 1; i < 26; i ++, j++)
    {
        for (; j < 26; j++)
        {
            //Convert each character in the key to uppercase to make it easier to compare two characters regardless of their cases.
            if(toupper(argv[1][i]) == toupper(argv[1][j]))
            {
                printf("Key must not contain repeated characters.\n");
                return 1;
            }
        }
    }
    string plaintext = get_string("Plaintext: ");
    encryption(plaintext, argv[1]);
}

void encryption (string plaintext, string key)
{
    int plaintext_length = strlen(plaintext);
    printf("Ciphertext: ");
    string ciphertext = plaintext;
    for (int i = 0; i < plaintext_length; i++)
    {
        if(isalpha(plaintext[i]))
        {
            if(isupper(plaintext[i]))
            {
                ciphertext[i] = toupper(key[plaintext[i]-65]);
            }
            else
            {
                ciphertext[i] = tolower(key[plaintext[i]-97]);
            }
        }
        printf("%c", ciphertext[i]);
    }
    printf("\n");
}