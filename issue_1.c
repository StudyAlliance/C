#include <stdio.h>

int main(int argc, char** argv) {
  /* PASS */
  int array_1[3] = {0, 1, 2};

  /* PASS */
  int array_2[][3] = {
    {1, 2, 3},
    {1, 3, 4},
    {2, 3}
  };

  /* PASS */
  int array_3[][2][3] = {
    {{1, 2}, {3}},
    {{1, 2}, {1, 3}},
    {{1, 2, 3}}
  };

  /* ERROR */
  int array_4[][][3] = {
    {{1, 2}, {3}},
    {{1, 2}, {1, 3}},
    {{1, 2, 3}}
  };
  return 0;
}
