#include <my.h>
#include <my_printf.h>

int main(int argc, char const *argv[])
{
    my_printf ("[%%%d%i%lx%lX%lu%s%p]", INT32_MAX, INT32_MAX, INT64_MAX,
    INT64_MAX, UINT64_MAX, "toto\n", "toto\n");
    printf("\n\n");
    printf("[%%%d%i%lx%lX%lu%s%p]", INT32_MAX, INT32_MAX, INT64_MAX,
    INT64_MAX, UINT64_MAX, "toto\n", "toto\n");
    return 0;
}