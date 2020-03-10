#include <config.h>
#include <stdio.h>
#include <test.h>

int main (void)
{
  puts("Hello World!");
  puts("This is " PACKAGE_STRING ".");
  printTest();
  return 0;
}
