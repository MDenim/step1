#include <stdio.h>
//#include <stdbool.h>

/*int main(void)
{
    int x;
    if(scanf("%d",&x) ==1)
      {  if(x >= 3 && x <= 11) printf("x in [3;11]"); } 
    else printf("Error input\n");
    return 0;

} */

/*int main(void)
{
    double a = 7.88, b = 4.44;
    double max_ab = a>b?a:b; 
   // printf("Error input\n");
    return 0;

} */

int main(void)
{
    int game_pole[5][3];
    size_t bytes = sizeof(game_pole);
    size_t row_byres = sizeof(game_pole[0]);
    size_t rows = sizeof(game_pole[0]) / sizeof(game_pole[0][0]);

    return 0;

}