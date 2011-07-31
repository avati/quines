/* what's in a comment, anyways? */
#include <stdio.h>
#define Q(str) #str
#define NL putchar(10)
void printc(char *str) { while (*str) { if (*str != 34) putchar(*str); str++; } }
void func (char *fmt) { printc (Q("/* what's in a comment, anyways? */")); NL; printf (Q(#include <stdio.h>)); NL; printf (Q(#define Q(str) #str)); NL; printf (Q(#define NL putchar(10))); NL; printf (Q(void printc(char *str) { while (*str) { if (*str != 34) putchar(*str); str++; } })); NL; printf (Q(%s), fmt); NL; printf (Q(int main() { func (Q(%s)); }), fmt); NL;}
int main() { func (Q(void func (char *fmt) { printc (Q("/* what's in a comment, anyways? */")); NL; printf (Q(#include <stdio.h>)); NL; printf (Q(#define Q(str) #str)); NL; printf (Q(#define NL putchar(10))); NL; printf (Q(void printc(char *str) { while (*str) { if (*str != 34) putchar(*str); str++; } })); NL; printf (Q(%s), fmt); NL; printf (Q(int main() { func (Q(%s)); }), fmt); NL;})); }
