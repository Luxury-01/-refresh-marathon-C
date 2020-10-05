int mx_strcmp(const char *s1, const char *s2) {
    int count = 0;

    for (int i = 0; s1[i] != '\0' || s2[i] != '\0'; i++) {
        if (count == 0) {
             count = *s1++ - *s2++;
        }   
    }
    return count;
}
