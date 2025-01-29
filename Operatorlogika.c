#include <stdio.h>

int main() {
  int x = 5;
  int y = 3;
  
  // Returns 0 (false) karena nilainya baru true ketika 2 2nya benar
  printf("%d\n", x < 3 && x < 10);
  //Returns 1 (True) karena nilainya baru true ketika minimal salah satunya benar
  printf("%d\n", x < 3 || x < 10);
  //Return 1 (True) kebalikan dari false.
  printf("%d\n",!x<3);
  return 0;
}
