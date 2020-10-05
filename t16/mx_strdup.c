#include <stdlib.h>
#include <stdio.h>
char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);

char *mx_strdup(const char *str) 
{
    char *str1 = mx_strnew(mx_strlen(str));
    return mx_strcpy(str1, str);
}
