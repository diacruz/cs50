#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <cs50.h>

    int main(int argc, string argv[])
    {

    if (argc != 2)
    {
        printf("Try again!\n");

        return 1;
    }
    else
    {

        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            if (!isalpha(argv[1][i]))
            {
                printf("Alphabetic keys only.");

                return 1;
            }
        }
    }

    string keyword = argv[1];
    int kLen = strlen(keyword);


    string p = get_string("plain Text: ");

    printf("ciphertext: ");
    for (int i = 0, j = 0, n = strlen(p); i < n; i++)
    {

        int letterKey = tolower(keyword[j % kLen]) - 'a';


        if (isupper(p[i]))
        {

            printf("%c", 'A' + (p[i] - 'A' + letterKey) % 26);
            j++;
        }
        else if (islower(p[i]))
        {
            printf("%c", 'a' + (p[i] - 'a' + letterKey) % 26);
            j++;
        }
        else
        {
            printf("%c", p[i]);
        }
    }

    printf("\n");

    return 0;
}
