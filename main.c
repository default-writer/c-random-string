#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void allocate_1d_color(char* array_color[], int M) {
  *array_color = (char*)malloc(sizeof(char*) * M);
}

void fill_1d_color(char* array_color[], char** color, int M) {
  for (int i = 0; i < M; i++) {
    array_color[i] = color[rand() % M];
  }
}
void print_1d_colors(char* array_color[], int M) {
  for (int i = 0; i < M; i++) {
    printf("%s ", array_color[i]);
  }
}
char* color[] = { "red", "green", "blue", "white", "black" };

int main() {
  srand(time(NULL));

  int M = 5;
  int N = 5;

  char* array_color[M];

  allocate_1d_color(array_color, M);
  fill_1d_color(array_color, color, M);
  print_1d_colors(array_color, M);

  return 0;
}