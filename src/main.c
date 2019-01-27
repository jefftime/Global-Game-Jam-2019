#include <stdio.h>
#include <stdlib.h>

/* shape, color, number */

void get_roots(char *in, char *out_1, char *out_2, char *out_3) {
  int ret;

  ret = sscanf(in, "%[^,],%[^,],%[^,]", out_1, out_2, out_3);
  if (ret != 3) {
    puts("problem in parsing first word");
    exit(-1);
  }
}

int main(int argc, char **argv) {
  char r11[32], r12[32], r13[32];
  char r21[32], r22[32], r23[32];
  char r31[32], r32[32], r33[32];

  if (argc < 2) {
    printf("usage:\n\t%s <word1> <word2> <word3>\n", argv[0]);
    exit(-1);
  }
  get_roots(argv[1], r11, r12, r13);
  get_roots(argv[2], r21, r22, r23);
  get_roots(argv[3], r31, r32, r33);

  /* generation */
  puts("Group one");
  printf(" 1: %s%s%s\n", r31, r32, r13);
  printf(" 2: %s%s%s\n", r11, r12, r23);
  printf(" 3: %s%s%s\n", r21, r22, r33);

  puts("Group two");
  printf(" 1: %s%s%s\n", r21, r22, r13);
  printf(" 2: %s%s%s\n", r31, r32, r23);
  printf(" 3: %s%s%s\n", r11, r12, r33);

  puts("Group three");
  printf(" 1: %s%s%s\n", r11, r12, r13);
  printf(" 2: %s%s%s\n", r21, r22, r23);
  printf(" 3: %s%s%s\n", r31, r32, r33);
  return 0;
}
