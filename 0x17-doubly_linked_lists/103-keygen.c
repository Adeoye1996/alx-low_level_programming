#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - generate a key depending on a username for crackme5
 * @argc: number of arguments passed
 * @argv: arguments passed to main
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Correct usage: ./keygen5 username\n");
        return (1);
    }

    char *charset = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
    char key[7] = "      ";

    size_t len = strlen(argv[1]);
    size_t add = 0;
    unsigned int b;

    key[0] = charset[(len ^ 59) & 63];

    for (size_t i = 0; i < len; i++)
        add += argv[1][i];
    key[1] = charset[(add ^ 79) & 63];

    b = 1;
    for (size_t i = 0; i < len; i++)
        b *= argv[1][i];
    key[2] = charset[(b ^ 85) & 63];

    b = (unsigned int)argv[1][0];
    for (size_t i = 0; i < len; i++)
        if ((char)b <= argv[1][i])
            b = argv[1][i];
    srand(b ^ 14);
    key[3] = charset[rand() & 63];

    unsigned int sum_squares = 0;
    for (size_t i = 0; i < len; i++)
        sum_squares += argv[1][i] * argv[1][i];
    key[4] = charset[(sum_squares ^ 239) & 63];

    b = 0;
    for (size_t i = 0; (char)i < argv[1][0]; i++)
        b = rand();
    key[5] = charset[(b ^ 229) & 63];

    printf("%s\n", key);
    return (0);
}
