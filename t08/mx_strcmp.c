int mx_strcmp(const char *s1, const char *s2){
   while(*s1 == *s2 && *s1 && *s2) {
        s1++;
        s2++;
        if (*s1 != *s2)
            break;
   }
   return *s1 - *s2;
}
