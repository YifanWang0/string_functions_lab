//Amanda Zheng and Yifan Wang

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

int main(int argc, char const *argv[]) {

  //test for len
  char str1[100] = "happiness";
  char str2[100] = "sadness";
  char str3[10] = "";
  printf("str1: [happiness]\n");
  printf("str2: [sadness]\n");
  printf("str3: []\n");
  printf("Testing strlen(str1):\n");
  printf("Mine: [%d]\n",len(str1));
  printf("Standard: [%lu]\n\n",strlen(str1));
  printf("Testing strlen(str2):\n");
  printf("Mine: [%d]\n",len(str2));
  printf("Standard: [%lu]\n\n",strlen(str2));
  printf("Testing strlen(str3):\n");
  printf("Mine: [%d]\n",len(str3));
  printf("Standard: [%lu]\n\n",strlen(str3));
  printf("-------------------------------------------\n");

  //test for copy
  printf("str1: [happiness]\n");
  printf("str2: [sadness]\n");
  printf("str3: []\n");
  printf("Testing strcpy(str3,str1):\n");
  printf("Mine: [%s]\n",copy(str3,str1));
  strcpy(str1,"happiness");
  strcpy(str2,"sadness");
  strcpy(str3,"");
  printf("Standard: [%s]\n\n",strcpy(str3,str1));
  strcpy(str1,"happiness");
  strcpy(str2,"sadness");
  strcpy(str3,"");
  printf("Testing strcpy(str3,str2)\n");
  printf("Mine: [%s]\n",copy(str3,str2));
  strcpy(str1,"happiness");
  strcpy(str2,"sadness");
  strcpy(str3,"");
  printf("Standard: [%s]\n\n",strcpy(str3,str2));
  strcpy(str1,"happiness");
  strcpy(str2,"sadness");
  strcpy(str3,"");
  printf("Testing strcpy(str1,str3)\n");
  printf("Mine: [%s]\n",copy(str1,str3));
  strcpy(str1,"happiness");
  strcpy(str2,"sadness");
  strcpy(str3,"");
  printf("Standard: [%s]\n\n",strcpy(str1,str3));
  printf("-------------------------------------------\n");

  //test for copy_n
  char str4[100] = "Wonderful";
  char str5[100] = "Snowing";
  char str6[100] = "Birthday";
  printf("str4: [Wonderful]\n");
  printf("str5: [Snowing]\n");
  printf("str6: [Birthday]\n");
  printf("Testing strncpy(str5,str4,5):\n");
  printf("Mine: [%s]\n",copy_n(str5,str4,5));
  strcpy(str4,"Wonderful");
  strcpy(str5,"Snowing");
  strcpy(str6,"Birthday");
  printf("Standard: [%s]\n\n",strncpy(str5,str4,5));
  strcpy(str4,"Wonderful");
  strcpy(str5,"Snowing");
  strcpy(str6,"Birthday");
  printf("Testing strncpy(str5,str6,6):\n");
  printf("Mine: [%s]\n",copy_n(str5,str6,6));
  strcpy(str4,"Wonderful");
  strcpy(str5,"Snowing");
  strcpy(str6,"Birthday");
  printf("Standard: [%s]\n\n",strncpy(str5,str6,6));
  strcpy(str4,"Wonderful");
  strcpy(str5,"Snowing");
  strcpy(str6,"Birthday");
  printf("Testing strncpy(str6,str4,7):\n");
  printf("Mine: [%s]\n",copy_n(str6,str4,7));
  strcpy(str4,"Wonderful");
  strcpy(str5,"Snowing");
  strcpy(str6,"Birthday");
  printf("Standard: [%s]\n\n",strncpy(str6,str4,7));
  printf("-------------------------------------------\n");

  //test for concatenate
  char str7[100] = "Super";
  char str8[100] = "Woman";
  char str9[100] = "Man";
  printf("str7: [Super]\n");
  printf("str8: [Woman]\n");
  printf("str9: [Man]\n");
  printf("Testing strcat(str7,str8):\n");
  printf("Mine: [%s]\n",concatenate(str7,str8));
  strcpy(str7,"Super");
  strcpy(str8,"Woman");
  strcpy(str9,"Man");
  printf("Standard: [%s]\n\n",strcat(str7,str8));
  printf("Testing strcat(str7,str9):\n");
  strcpy(str7,"Super");
  strcpy(str8,"Woman");
  strcpy(str9,"Man");
  printf("Mine: [%s]\n",concatenate(str7,str9));
  strcpy(str7,"Super");
  strcpy(str8,"Woman");
  strcpy(str9,"Man");
  printf("Standard: [%s]\n\n",strcat(str7,str9));
  printf("Testing strcat(str8,str9):\n");
  strcpy(str7,"Super");
  strcpy(str8,"Woman");
  strcpy(str9,"Man");
  printf("Mine: [%s]\n",concatenate(str8,str9));
  strcpy(str7,"Super");
  strcpy(str8,"Woman");
  strcpy(str9,"Man");
  printf("Standard: [%s]\n\n",strcat(str8,str9));
  printf("-------------------------------------------\n");

  //test for concatenate_n
  char str10[100] = "Cat";
  char str11[100] = "Fishies";
  char str12[100] = "Dog";
  printf("str10: [Cat]\n");
  printf("str11: [Fishies]\n");
  printf("str12: [Dog]\n");
  printf("Testing strncat(str10,str11,10):\n");
  printf("Mine: [%s]\n",concatenate_n(str10,str11,10));
  strcpy(str10,"Cat");
  strcpy(str11,"Fishies");
  strcpy(str12,"Dog");
  printf("Standard: [%s]\n\n",strncat(str10,str11,10));
  strcpy(str10,"Cat");
  strcpy(str11,"Fishies");
  strcpy(str12,"Dog");
  printf("Testing strncat(str12,str11,4):\n");
  printf("Mine: [%s]\n",concatenate_n(str12,str11,4));
  strcpy(str10,"Cat");
  strcpy(str11,"Fishies");
  strcpy(str12,"Dog");
  printf("Standard: [%s]\n\n",strncat(str12,str11,4));
  printf("Testing strncat(str10,str12,2):\n");
  strcpy(str10,"Cat");
  strcpy(str11,"Fishies");
  strcpy(str12,"Dog");
  printf("Mine: [%s]\n",concatenate_n(str10,str12,2));
  strcpy(str10,"Cat");
  strcpy(str11,"Fishies");
  strcpy(str12,"Dog");
  printf("Standard: [%s]\n\n",strncat(str10,str12,2));
  printf("-------------------------------------------\n");

  //tests for compare
  char str13[100] = "Item";
  char str14[100] = "Itemize";
  char str15[100] = "Itemize";
  char str16[100] = "itemize";
  char str17[100] = "stuff";
  printf("str13: [Item]\n");
  printf("str14: [Itemize]\n");
  printf("str15: [Itemize]\n");
  printf("str16: [itemize]\n");
  printf("str17: [stuff]\n");
  printf("Testing strcmp(str13,str14):\n");
  printf("Mine: [%d]\n",compare(str13,str14));
  printf("Standard: [%d]\n\n",strcmp(str13,str14));
  printf("Testing strcmp(str14,str13):\n");
  printf("Mine: [%d]\n",compare(str14,str13));
  printf("Standard: [%d]\n\n",strcmp(str14,str13));
  printf("Testing strcmp(str13,str16):\n");
  printf("Mine: [%d]\n",compare(str13,str16));
  printf("Standard: [%d]\n\n",strcmp(str13,str16));
  printf("Testing strcmp(str13,str17):\n");
  printf("Mine: [%d]\n",compare(str13,str17));
  printf("Standard: [%d]\n\n",strcmp(str13,str17));
  printf("Testing strcmp(str14,str15):\n");
  printf("Mine: [%d]\n",compare(str14,str15));
  printf("Standard: [%d]\n\n",strcmp(str14,str15));
  printf("-------------------------------------------\n");

  //test for locate
  char str18[100] = "Universe";
  printf("str18: [Universe]\n");
  printf("Testing strchr(str18,\'U\'):\n");
  printf("Mine: [%p]\n",locate(str18,'U'));
  printf("Standard: [%p]\n\n",strchr(str18,'U'));
  printf("Testing strchr(str18,\'u\'):\n");
  printf("Mine: [%p]\n",locate(str18,'u'));
  printf("Standard: [%p]\n\n",strchr(str18,'u'));
  printf("Testing strchr(str18,\'r\'):\n");
  printf("Mine: [%p]\n",locate(str18,'r'));
  printf("Standard: [%p]\n\n",strchr(str18,'r'));
  printf("Testing strchr(str18,\'x\'):\n");
  printf("Mine: [%p]\n",locate(str18,'x'));
  printf("Standard: [%p]\n\n",strchr(str18,'x'));
  printf("-------------------------------------------\n");

  // test for strstrs
  char str19[100] = "Pair Programming";
  char str20[100] = "gram";
  char str21[100] = "par";
  printf("str19: [Pair Programming]\n");
  printf("str20: [gram]\n");
  printf("str21: [par]\n");
  printf("Testing strstr(str19,str20):\n");
  printf("Mine: [%p]\n",strstrs(str19,str20));
  printf("Standard: [%p]\n\n",strstr(str19,str20));
  printf("Testing strstr(str19,str21):\n");
  printf("Mine: [%p]\n",strstrs(str19,str21));
  printf("Standard: [%p]\n\n",strstr(str19,str21));
  printf("-------------------------------------------\n");

  return 0;
}
