//
//  wider.c
#include <stdio.h>
#include <wchar.h>
int main(void)
{
    wchar_t value = L'\u00f6';
    wchar_t wch = L'I';
    wchar_t w_arr[20] = L"am wide!";
    printf("%lc %ls  %lc\n", wch, w_arr, value);
    puts("Enter your grade:");
    scanf("%lc", &wch);
    puts("Enter your first name:");
    scanf("%ls",w_arr);
    printf("%lc %ls\n", wch, w_arr);
    wchar_t * pw = L"Points to a wide-character string";
    int dozen = 12;
    wprintf(L"Item %d: %ls\n", dozen, pw);
    return 0;
}