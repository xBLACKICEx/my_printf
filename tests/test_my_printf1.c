/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** test_my_printf1
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <unitest.h>
#include <my.h>
#include <my_printf.h>

Test (my_printf, test_fagl_x, .init = redirect_all_std)
{
    char res[1024];

    my_printf ("%x", 255);
    sprintf(res, "%x", 255);
    cr_assert_stdout_eq_str (res);
}

Test (my_printf, test_fagl_S, .init = redirect_all_std)
{
    my_printf ("%S", "\ntoto");
    char res[] = "\\012toto";
    cr_assert_stdout_eq_str (res);
}

Test (my_printf, multipel_flag, .init = redirect_all_std)
{
    char res[1024];
    my_printf ("%%%d%i%lx%lX%lu%s%p", INT32_MAX, INT32_MAX, INT64_MAX,
    INT64_MAX, UINT64_MAX, "toto\n", "toto\n");
    sprintf(res, "%%%d%i%lx%lX%lu%s%p", INT32_MAX, INT32_MAX, INT64_MAX,
    INT64_MAX, UINT64_MAX, "toto\n", "toto\n");
    cr_assert_stdout_eq_str (res);
}