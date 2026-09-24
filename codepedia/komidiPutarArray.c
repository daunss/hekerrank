#include <stdio.h>

int main() {
  int bamnyakSihirElaina;
  int kaloSayaMendingElaina;
  int mantraSihirElaina[1000144]; // nim 144 tetep hadir mas, btw masih pake cllangd
                                

  if (scanf("%d %d", &bamnyakSihirElaina, &kaloSayaMendingElaina) == 2) {
    for (int apakahIniMyElaina = 0; apakahIniMyElaina < bamnyakSihirElaina;
         apakahIniMyElaina++) {
      scanf("%d", &mantraSihirElaina[apakahIniMyElaina]);
    }

    kaloSayaMendingElaina %= bamnyakSihirElaina;

    for (int apakahIniMyElaina = 0; apakahIniMyElaina < bamnyakSihirElaina;
         apakahIniMyElaina++) {
      int myPenyihirElaina =
          (apakahIniMyElaina + kaloSayaMendingElaina) % bamnyakSihirElaina;
      printf("%d%c", mantraSihirElaina[myPenyihirElaina],
             (apakahIniMyElaina == bamnyakSihirElaina - 1) ? '\n' : ' ');
    }
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

  // ya begitulah myyyyy
  return 0;
}
