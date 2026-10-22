#include <stdio.h>
int main()
{
    printf("long long int: %zu bytes\n", sizeof(long long int));
    printf("float: %zu bytes\n", sizeof(float));
    printf("double: %zu bytes", sizeof(double));
    return 0;
}