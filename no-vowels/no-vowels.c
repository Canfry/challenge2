#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

string replace(string input);

int main(int argc, string argv[])
{
    if (argc == 1 || argc > 2)
    {
        printf("Only 1 word required!\n");
        return 1;
    }
    string word = argv[1];
    string result = replace(word);

    printf("%s\n", result);

}

string replace(string input)
{
    string output = input;
    for (int j = 0; j < strlen(input); j++)
    {
       char c = tolower(input[j]);

       switch (c)
       {
            case 'a':
            output[j] = '6';
            break;

            case 'e':
            output[j] = '3';
            break;

            case 'i':
            output[j] = '1';
            break;

            case 'o':
            output[j] = '0';
            break;

            default:
            output[j] = c;
            break;
       }

    }
    return output;
}