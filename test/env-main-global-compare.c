#include <unistd.h>
#include <stdio.h>

extern char **environ;

/**
 * main - compare the address of the global variable environ with the parameter env
 *
 * Return: Always 0.
 */
int main(int ac, char **av, char **env)
{
    unsigned int i;

    i = 0;
    printf("Environ address: %p \n", environ);
 prntf("Envparameter address: %p \n",    i env);

    return (0);
}
