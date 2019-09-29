 #include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

int main(int argc, char const *argv[]) {
  char str1[100] = "happiness";
  char str2[100] = "sadness";
  char str3[1] = "";
  char str4[100] = "anger";
  char str5[20] = "data";
  char str6[20] = "Data";
  char str7[100]="suprise";
  char str8[20] = "itemize";
  char str9[20] = "itemize";
  char str10[20] = "pair programming";
  char str11[20] = "gram";
  char str12[20] = "par";
  char str13[20] = "hello";
  char str14[20] = "universe";
  int i;

  //test for len
  printf("This is the test for the length of a string:\n");
  printf("The length of the string \"happiness\" is: %d\n",len(str1));
  printf("The length of the string \"sadness\" is: %d\n",len(str2));
  printf("The length of a empty string is: %d\n\n",len(str3));

  //test for copy
  printf("This is the test for copying an entire string:\n");
  printf("Copying string \"happiness\":\n");
  copy(str3,str1);
  for (i = 0; i < len(str3); i++) {
    printf("%c",str3[i] );
  }
  printf("\n");
  printf("Copying string \"sadness\":\n");
  copy(str3,str2);
  printf("this is string %d\n", len(str3));
  for (i = 0; i < len(str3); i++) {
    printf("%c",str3[i] );
  }
  printf("\n\n" );

  //test for copy_n
  printf("This is the test for copying part of a string:\n" );
  printf("Copying \"happi\" from string \"happiness\" \n");
  copy_n(str3,str1,5);
  for (i = 0; i < len(str3); i++) {
    printf("%c",str3[i] );
  }
  printf("\n");
  printf("Copying string \"sad\" \n");
  copy_n(str3,str2,3);
  for (i = 0; i < len(str3); i++) {
    printf("%c",str3[i] );
  }
  printf("\n\n" );

  //test for concatenate
  printf("The test for concatenating a string and another string:\n");
  printf("Concatenating \"happiness\" and \"sad\"");
  concatenate(str1, str3);
  for (i = 0; i < len(str1); i++) {
    printf("%c",str1[i] );
  }
  printf("\n" );
  printf("Concatenating \"happinesssad\" with \"anger\":" );
  concatenate(str1,str4);
  for (i = 0; i < len(str1); i++) {
    printf("%c",str1[i] );
  }
  printf("\n\n" );

  //test for concatenate_n
  printf("The test for concatenating a string and part of a string:\n ");
  printf("Concatenating \"hello\" with first five letters of \"universe\"\n");
  concatenate_n(str13, str14, 5);
  for (i = 0; i < len(str13); i++) {
    printf("%c",str13[i] );
  }
  printf("\n\n");

  //tests for compare
  printf("The test for comparing:\n");
  printf("Comparing \"data\" with \"Data\": %d, %d\n", compare(str5, str6),strcmp(str5,str6));
  printf("Comparing \"anger\" with \"suprise\": %d,%d\n",compare(str4, str7),strcmp(str4,str7));
  printf("Comparing \"itemize\" with \"itemize\": %d,%d\n\n", compare(str8, str9),strcmp(str8,str9));

  //test for locate
  char *p=&(str10[11]);
  printf("The test for locating first occurence of a single character in a string\n");
  printf("Pointer of \"m\" in \"pair programming\": %p \n Locating \"m\" in \"pair programming\": %p\n",p,locate(str10, 'm'));
  printf("Locating \"x\" in \"pair programming\": %p\n\n", locate(str10, 'x'));

  // test for strstrs
  p=&(str10[8]);
  printf("The test for locating first occurence of a substring in a string\n");
  printf("Pointer of \"gram\" in \"pair programming\": %p\n Locating \"gram\" in \"pair programming\": %p\n",p,strstrs(str10,str11));
  printf("Locating \"par\" in \"pair programming\":%p\n\n", strstrs(str10,str12));

  return 0;
}
