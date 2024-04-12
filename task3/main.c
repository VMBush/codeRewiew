#include "stdio.h"
#include "stdlib.h"

typedef struct
{
  char* name;
  char* sname;
  int h;
} man;


int main() {
  int n;
  if (scanf("%d", &n) != 1 || n < 0) {
    printf("n/a");
    return 1;
  }
  man* arr = (man*)malloc(sizeof(man) * n);

  for (int i = 0; i < n; i++) {
    arr[i].name = malloc(sizeof(char) * 25);
    arr[i].sname = malloc(sizeof(char) * 25);
    if (scanf("%s", (arr[i].name)) != 1 || scanf("%s", (arr[i].sname)) != 1 || scanf("%d", &(arr[i].h)) != 1 || arr[i].h < 0) {
      printf("n/a");
      return 1;
    }
  }
  int h;
  if (scanf("%d", &h) != 1) {
    printf("n/a");
    return 1;
  }
  int first = 1;

  for (int i = 0; i < n; i++) {
    if (arr[i].h >= h) {
      if (!first) printf(", "); 
      printf("%s %s", arr[i].name, arr[i].sname);
      first = 0;
    }
  }

  if (first) printf("Nothing");
  for (int i = 0; i < n; i++) {
    free(arr[i].name);
    free(arr[i].sname);
  }
  free(arr);
  return 0;
}

// 3
// John
// Wick
// 190
// Scarlett
// Brown
// 166
// John
// King
// 180
// 170

