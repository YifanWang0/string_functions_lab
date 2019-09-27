#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int len(char *s){
  int counter = 0;
  int i;
  for (i=0; s[i]!='\0'; i++){
    counter++;
  }
  return counter;
}

char * copy(char *dest, char *source){
  int i;
  for (i=0; i<len(source); i++){
    dest[i] = source[i];
    printf("%c", dest[i]);
  }
  dest[len(source)] = '\0';
  return dest;
}

char * concatenate_n(char *dest, char *source, int n){
  int i;
  int l = len(dest);
  printf("%s", dest);
  for (i = 0; i < n; i++) {
    dest[l + i] = source[i];
    printf("%c", dest[l+i]);
  }
  dest[l + n] = '\0';
  return dest;
}

int compare (char *s1, char *s2){
  int i;
  for (i = 0; s1[i]!='\0' || s2[i]!='\0'; i++) {
    if (s1[i] < s2[i]) {
      return -1;
    }
    if (s1[i] > s2[i]){
      return 1;
    }
  }
  return 0;
}

char * locate(char *s, char c){
  int i;
  char *p;
  for (i = 0; s[i] != '\0'; i++) {
    if (s[i] == c) {
      p = i + s;
      printf("%s\n", p);
      return p;
    }
  }
  printf("%s\n", p);
  return p;
}
