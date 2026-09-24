#include <stdio.h>

int main() {
  int bamnyakSihirElaina;
  int mantraSihirElaina[1000144]; // nim 144 tetep hadir mas, btw masih pake clangd, setia aku mas:v
                                  

  if (scanf("%d", &bamnyakSihirElaina) == 1) {
    for (int apakahIniMyElaina = 0; apakahIniMyElaina < bamnyakSihirElaina;
         apakahIniMyElaina++) {
      scanf("%d", &mantraSihirElaina[apakahIniMyElaina]);
    }

    // bagian ngurutin mas, tapi kalo aku sih elaina tetep no 1
    for (int apakahIniMyElaina = 0;
         apakahIniMyElaina < bamnyakSihirElaina - 1; apakahIniMyElaina++) {
      for (int kaloSayaMendingElaina = 0;
           kaloSayaMendingElaina < bamnyakSihirElaina - apakahIniMyElaina - 1;
           kaloSayaMendingElaina++) {
        if (mantraSihirElaina[kaloSayaMendingElaina] >
            mantraSihirElaina[kaloSayaMendingElaina + 1]) {
          int myPenyihirElaina = mantraSihirElaina[kaloSayaMendingElaina];
          mantraSihirElaina[kaloSayaMendingElaina] =
              mantraSihirElaina[kaloSayaMendingElaina + 1];
          mantraSihirElaina[kaloSayaMendingElaina + 1] = myPenyihirElaina;
        }
      }
    }

    // bagian percetakan mas, tapi masih tetep setia sama elaina mas hehe:v
    for (int apakahIniMyElaina = 0; apakahIniMyElaina < bamnyakSihirElaina;
         apakahIniMyElaina++) {
      printf("%d%c", mantraSihirElaina[apakahIniMyElaina],
             (apakahIniMyElaina == bamnyakSihirElaina - 1) ? '\n' : ' ');
    }
  }

  // kalo disuruh milih hidup sehat atau hidup jokowi, aku milih elaina
  return 0;
}
