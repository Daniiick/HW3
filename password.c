// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

bool valid(string password);

bool hasUpperCase(string password);

bool hasLowerCase(string password);

bool isNumber(string password);

bool isSymbol(string password);

bool valid(string password)
{
    if (hasUpperCase(password) == true && hasLowerCase(password) == true && isSymbol(password) == true && isNumber(password) == true)
    {
        return true;
    }
    return false;
}

bool hasUpperCase(string password)
{
    for (int i = 0, n = strlen(password); i < n; i++)
    {
        if ((int) password[i] >= 65 && (int) password[i] <= 90)
        {
            return true;
        }
    }

    return false;
}

bool hasLowerCase(string password)
{
    for (int i = 0, n = strlen(password); i < n; i++)
    {
        if ((int) password[i] >= 97 && (int) password[i] <= 122)
        {
            return true;
        }
    }

    return false;
}
bool isNumber(string password)
{
    for (int i = 0, n = strlen(password); i < n; i++)
    {
        if ((int) password[i] >= 48 && (int) password[i] <= 57)
        {
            return true;
        }
    }

    return false;
}
bool isSymbol(string password)
{
    for (int i = 0, n = strlen(password); i < n; i++)
    {
        if (((int) password[i] >= 33 && (int) password[i] <= 47) || ((int) password[i] >= 58 && (int) password[i] <= 64))
        {
            return true;
        }
    }

    return false;
}

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
