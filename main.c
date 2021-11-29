#include "grlist.h"

int main () {
  Graph g;
  FILE *fpointer;
  int size, x, y;

  if ((fpointer = fopen("text", "r")) != NULL) {
    fscanf(fpointer, "%d", &size);
    g = GRAPHinit(size);

    while ((fscanf(fpointer, "%d %d", &x, &y)) != EOF){
      //printf("%d, %d\n", x, y);
      GRAPHinsertArc(g, x, y);
    }
  }
  else {
    printf("Something went wrong.\n");
  }

  GRAPHshow(g);
  GRAPHdfsPrint(g);

  return 0;
}