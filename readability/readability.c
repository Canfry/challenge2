#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);

int main (void)
{
    string text = get_string("Text: ");
    int letters = count_letters(text);
    int words = count_words(text);
    printf("%i letters, %i words\n", letters, words);
}

int count_letters(string text)
{
    int letters = 0;
    int spaces = 0;
    int words = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if(isalpha(tolower(text[i])))
        {
        letters = strlen(text);
        }

        if (isblank(text[i]))
        {
          spaces++;
        }

        if (spaces)
        {
            words = spaces + 1;
            letters = letters - spaces;
        }
    }
    return letters;
}

int count_words(string text){
  int spaces = 0;
  int words = 0;
  for (int i = 0; i < strlen(text); i++)
    {
        words++;
        if (isblank(text[i]))
        {
          spaces++;
        }

        if (spaces)
        {
            words = spaces + 1;
        }
    }
        return words;

}