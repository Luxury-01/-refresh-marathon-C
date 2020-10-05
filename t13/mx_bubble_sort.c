#include <stdio.h>
int mx_strcmp(const char *s1, const char *s2);

int mx_bubble_sort(char **arr, int size) {
    char *save;
    int count = 0;

    for (int i = 1; i < size; i++) {
        for (int k = 0; k < size - i; k++) {
            if (mx_strcmp(arr[k], arr[k+1]) > 0) {
                count++;
                save = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = save;
            }
        }
    }
    return count;
}
