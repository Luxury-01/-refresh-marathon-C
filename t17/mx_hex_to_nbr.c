#include <stdbool.h>
int mx_strlen(const char *hex) {
int count = 0;
while(*hex) {
count++;
hex++;
}
return count;
}
unsigned long retAlp(char c) {
if (c == 'a' || c == 'A') {
return 10;
}
if (c == 'b' || c == 'B') {
return 11;
}
if (c == 'c' || c == 'C') {
return 12;
}
if (c == 'd' || c == 'D') {
return 13;
}
if (c == 'e' || c == 'E') {
return 14;
}
if (c == 'f' || c == 'F') {
return 15;
}
return 0;
}
bool isAlp(char c) {

if (c == 'a' || c == 'A' ||

c == 'b' || c == 'B' ||

c == 'c' || c == 'C' ||

c == 'd' || c == 'D' ||

c == 'e' || c == 'E' ||

c == 'f' || c == 'F') 

{
return true;
}
return false;
}
unsigned long mx_pow(unsigned long n, int pow) {
if (pow == 0) {
return 1;
}
if (pow == 1) {
return n;
}
return n * mx_pow(n, pow - 1);
}
unsigned long mx_hex_to_nbr(const char *hex) {
unsigned long num = 0;
for (int i = mx_strlen(hex) - 1, n = 0; i >= 0; i--, n++) {
if (isAlp(hex[i])) {
num += retAlp(hex[i]) * mx_pow(16, n);
} else {
num += (hex[i] - '0') * mx_pow(16, n);
}
}
return num;
}
