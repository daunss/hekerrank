#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
  char mantraSihirElaina[1000144]; // nim saya mas 144, btw ini format pake clangd mas

  if (fgets(mantraSihirElaina, sizeof(mantraSihirElaina), stdin) != NULL) {
    mantraSihirElaina[strcspn(mantraSihirElaina, "\r\n")] =
        '\0'; // elaina dikit ngga ngaruh

    for (int apakahIniMyElaina = 0;
         mantraSihirElaina[apakahIniMyElaina] != '\0'; apakahIniMyElaina++) {
      mantraSihirElaina[apakahIniMyElaina] =
          toupper((unsigned char)mantraSihirElaina[apakahIniMyElaina]);
    }

    printf("%s\n", mantraSihirElaina);
  }
 
  // tetap my favorit witch in my heart, sory ngetroll lagi mas
  return 0;
}