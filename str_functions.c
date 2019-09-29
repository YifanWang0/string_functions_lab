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
  }
  dest[len(source)]='\0';
  return dest;
}
char * copy_n(char *dest, char *source, int n){
  int i;
  for (i=0; i<n; i++){
    dest[i] = source[i];
  }
  return dest;
}

char * concatenate_n(char *dest, char *source, int n){
  int i;
  int l = len(dest);
  for (i = 0; i < n; i++) {
    dest[l + i] = source[i];
  }
  dest[l + n] = '\0';
  return dest;
}
char * concatenate(char *dest, char *source){
  int i;
  int l = len(dest);
  for (i = 0; i < len(source)+1; i++) {
    dest[(l) + i] = source[i];
  }
  return dest;
}

int compare (char *s1, char *s2){
  int i;
  int lenOfShorter;
  if (len(s1) > len(s2)) {
    lenOfShorter = len(s2);
  } else{
    lenOfShorter = len(s1);
  }
  for (i = 0; i < lenOfShorter; i++) {
    if (s1[i] != s2[i]) {
      return s1[i] - s2[i];
    }
  }
  if (len(s1) < len(s2)) {
    return -1*s2[i];
  } else if(len(s2) < len(s1)) {
    return s1[i];
  } else {
    return 0;
  }
}

char * locate(char *s, char c){
  int i;
  char *p = NULL;
  for (i = 0; s[i] != '\0'; i++) {
    if (s[i] == c) {
      p = &(s[i]);
      return p;
    }
  }
  return p;
}
int locate_n(char *s, char c, int n){
  int i;
  for (i = 0; s[i] != '\0'; i++) {
    if (s[i] == c) {
      n--;
    }
    if (n==0){
      return i;
    }
  }
  return -1;
}
char* strstrs(char *haystack, char *needle){
  char *p=NULL;
  int i;
  int x=1;
  int w;
  for (x = 1; i !=-1; x++) {
      i=locate_n(haystack,needle[0],x);
      if (i<len(haystack)-len(needle)+1) {
        for (w = 0; w < len(needle); w++) {
          if(haystack[i+w]!=needle[w]){
            w=len(haystack);
          }
        }
        if (w<len(haystack)) {
          p=&(haystack[i]);
          return p;
        }
      }
  }
  return p;
}
