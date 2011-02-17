#include <stdio.h>
#define Q(str) #str
#define NL putchar(10)
void func (char *fmt) { printf (Q(#include <stdio.h>)); NL; printf (Q(#define Q(str) #str)); NL; printf (Q(#define NL putchar(10))); NL; printf (Q(%s), fmt); NL; printf (Q(int main() { func (Q(%s)); }), fmt); NL;}
int main() { func (Q(void func (char *fmt) { printf (Q(#include <stdio.h>)); NL; printf (Q(#define Q(str) #str)); NL; printf (Q(#define NL putchar(10))); NL; printf (Q(%s), fmt); NL; printf (Q(int main() { func (Q(%s)); }), fmt); NL;})); }
