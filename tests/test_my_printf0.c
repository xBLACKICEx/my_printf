/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** tests0
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <unitest.h>
#include <my.h>
#include <my_printf.h>

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test (my_printf, simple_string, .init = redirect_all_std)
{
    my_printf("hello world");
    cr_assert_stdout_eq_str("hello world");
}

Test (my_printf, test_fagl_d, .init = redirect_all_std)
{
    my_printf("%d\n", 123);
    char res[] = "123\n";
    cr_assert_stdout_eq_str(res);
}

Test (my_printf, test_print_positive_d, .init = redirect_all_std)
{
    char res[1024];

    my_printf("%++++d", 123);
    sprintf(res, "%++++d", 123);
    cr_assert_stdout_eq_str (res);
}