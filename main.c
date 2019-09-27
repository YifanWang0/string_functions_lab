#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

int main(int argc, char const *argv[]) {
  //test for len
  char str1[100] = "happiness";
  char *p = str1;
  printf("%s", "The length of the string is: ");
  printf("%d\n",len(str1));

  //test for copy
  char str2[100];
  printf("%s", "The dest string is: ");
  copy(str2, str1);
  printf("\n");

  //test for concatenate_n
  char str3[20] = "sadness";
  printf("%s", "The result of the concatenation is: ");
  concatenate_n(str1, str3, 3);
  printf("\n");

  //tests for compare
  char str4[20] = "data";
  char str5[20] = "Data";
  printf("%d\n", compare(str4, str5));
  char str6[20] = "itemize";
  char str7[20] = "itemize";
  printf("%d\n", compare(str6, str7));

  //test for locate
  char str8[20] = "pair programming";
  locate(str8, 'i');

  return 0;
}
