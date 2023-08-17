/**
  * https://owasp.org/www-community/attacks/Buffer_overflow_attack
*/
#include <stdio.h>
int main()
{
char buf[8]; // buffer for eight characters
gets(buf); // read from stdio (sensitive function!)
printf("%s\n", buf); // print out data stored in buf
return 0; // 0 as return value
}
