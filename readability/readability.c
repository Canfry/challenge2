#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

// index = 0.0588 * L - 0.296 * S - 15.8

int main (void)
{
    string text = get_string("Text: ");
    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);

    float L = (float) letters / (float) words * 100;
    float S = (float) sentences / (float) words * 100;
    int grade = round(0.0588 * L - 0.296 * S - 15.8);

    if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", grade);
    }
}

int count_letters(string text)
{
    int letters = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if(isalpha(tolower(text[i])))
        {
        letters++;
        }
    }
    return letters;
}

int count_words(string text){

  int words = 1;
  for (int i = 0; i < strlen(text); i++)
    {
        if (isblank(text[i]))
        {
          words++;
        }
    }
        return words;

}

int count_sentences(string text)
{
    int sentences = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
       {
        sentences++;
       }
    }
       return sentences;
}