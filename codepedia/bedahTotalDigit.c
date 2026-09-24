#include <stdio.h>

int main() {
  char elainaOtwSeason2[1000144]; // nim 144 tetep hadir mas, btw masih pake clangd mas buat formatnya
                                   
  long long totalPesonaElaina = 0;

  if (scanf("%s", elainaOtwSeason2) == 1) {
    for (int apakahIniMyElaina = 0;
         elainaOtwSeason2[apakahIniMyElaina] != '\0'; apakahIniMyElaina++) {
      if (elainaOtwSeason2[apakahIniMyElaina] >= '0' &&
          elainaOtwSeason2[apakahIniMyElaina] <= '9') {
        totalPesonaElaina += elainaOtwSeason2[apakahIniMyElaina] - '0';
      }
    }
    printf("%lld\n", totalPesonaElaina);
  }

  // elaina tetep nomor satu di hati, sory ngetroll dikit mas hanya nama variabel mas:v
  return 0;
}
