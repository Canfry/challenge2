#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string password)
{
    bool isnumber = false;
    bool isuppercase = false;
    bool issymbol = false;
    bool islowercase = false;

    for (int i = 0; i < strlen(password); i++)
    {
        char c = password[i];

        if (isdigit(c))
        {
            isnumber = true;
        }
         if (islower(c))
        {
            islowercase = true;
        }
         if (isupper(c))
        {
            isuppercase = true;
        }
         if (!isalnum(c))
        {
            issymbol = true;
        }

        if(isnumber == true && islowercase == true && isuppercase == true && issymbol == true)
        {
            return true;
        }

    }
    return false;
}