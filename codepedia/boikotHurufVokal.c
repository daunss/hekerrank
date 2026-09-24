#include <stdio.h>
#include <string.h>

int main() {
  char mantraSihirElaina[1000144]; /*nim 144 tetep hadir mas, btw masih pake
  clangd hidupp clangd*/

  if (fgets(mantraSihirElaina, sizeof(mantraSihirElaina), stdin) != NULL) {
    mantraSihirElaina[strcspn(mantraSihirElaina, "\r\n")] = '\0';

    for (int apakahIniMyElaina = 0;
         mantraSihirElaina[apakahIniMyElaina] != '\0'; apakahIniMyElaina++) {
      char myPenyihirElaina = mantraSihirElaina[apakahIniMyElaina];
      if (myPenyihirElaina != 'a' && myPenyihirElaina != 'i' &&
          myPenyihirElaina != 'u' && myPenyihirElaina != 'e' &&
          myPenyihirElaina != 'o' && myPenyihirElaina != 'A' &&
          myPenyihirElaina != 'I' && myPenyihirElaina != 'U' &&
          myPenyihirElaina != 'E' && myPenyihirElaina != 'O') {
        putchar(myPenyihirElaina);
      }
    }
    putchar('\n');
  }

  /*
@@@@=                                  .::*@%@@@@@
@@%.                                   .:-:+@@@@@@
@#         .                           .:--:*@@@@@
*                                      .:----*@@@@
    .                                  .:-----%@@@
   .               ..                   ::---==@@@
  .   ..           -                    -:---=-#@@
..                = -: :         .. . .:=------+@%
..  :            ++-=: =.   .... :::=--:=-::::==@%
.. .::-   .     -=-:.:::=  .:::-:==-:=-:--:---==%@
.:...-:   .:::=*%%%%#%#-:-.-:::-=+=:-++-=-----==%@
:-.-:::. . :. =+%@*#@@**::=:.:-:-+:::==--:----==%%
.:-=-::: -..-  =+=-+%-::::===-.-%#@@#%++::--:-*+%%
.::----=.:-:--.:..::........:.:*=@%--#*-:--::*#+@%
-----:=-----:---              .::=:-+= .-:..=@*#@%
--:---=::==-=----....    ... .. . :=: -#:..+@%*%%%
----:--:::==-:::--::............ :=-=*%:.-#%##%%%%
----:=--:::=-...:::::......:   .:=-*@%-=#%%**#####
=--::=---:::-:..::-:.       ...-:--+###%##########
:      .--::--.:..:+-:..::-:::-:::-###############
         .--:-:...:+::::.:...:-.::-#########**####
   ..:::.. :-:--...::::... .:-:...-#####*##****###
  .:::::::. =-:-::.   ..:  .:::...:*#*#*#****#####
 .:::::::::.=-:----..   :  .--:....=#*###**#######
  */

  // yaaa begitulah
  return 0;
}
