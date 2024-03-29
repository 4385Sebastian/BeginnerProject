#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int count_letters(string text, int text_length);
int count_words(string text, int text_length);
int count_sentences(string text, int text_length);

int main(void)
{
    string text = get_string ("Text: ");
    printf ("%s\n", text);
    int text_length = strlen(text);
    int number_of_letters = count_letters(text, text_length);
    printf ("The number of letters: %d\n", number_of_letters);
    int number_of_words = count_words(text, text_length);
    printf("The number of words: %d\n", number_of_words);
    int number_of_sentences = count_sentences(text, text_length);
    printf("The number of sentences: %d\n", number_of_sentences);
    float L = 100.0 * number_of_letters / number_of_words;
    float S = 100.0 * number_of_sentences / number_of_words;
    float index = 0.0588 * L - 0.296 * S - 15.8;
    int rounded_index = round(index);
    if(rounded_index >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (rounded_index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %d\n", rounded_index);
    }
}

int count_letters(string text, int text_length)
{
    int number_of_letters = 0;
    for (int i = 0; i < text_length; i++)
    {
        if (isupper(text[i]) || islower(text[i]))
        {
            number_of_letters ++;
        }
    }
    return number_of_letters;
}

int count_words(string text, int text_length)
{
    int number_of_words = 1;
    for (int i = 0; i < text_length; i++)
    {
        if (' ' == text[i])
        {
            number_of_words ++;
        }
    }
    return number_of_words;
}

int count_sentences(string text, int text_length)
{
    int number_of_sentences = 0;
    for (int i = 0; i < text_length; i++)
    {
        if ('.' == text[i] || '!' == text[i] || '?' == text[i])
        {
            number_of_sentences ++;
        }
    }
    return number_of_sentences;
}