
void mx_printchar(char c);
void mx_print_alphabet(void) {
    int b = 97;
    for(int i = 65;i <= 90 && b <= 122;i++){
    if(( i % 2) == 0){
     mx_printchar((char)i + 32);
    }else { 
    mx_printchar((char)i); 
}
   b++;
}  
   mx_printchar('\n');
}
