/* Projeto   : mini_piano
 * Arquivo   : notas.c
 * Descrição :
 */

/* Includes */
#include "stm8s.h"
#include "notas.h"

/* Variáveis globais */
uint16_t valores_pwm[2][25];

/* Subrotina : notas_PWM
 * Descrição : 
 */
void notas_PWM(void)
{
  // Corda E    Casa
  valores_pwm[0][0] = 15;
  valores_pwm[1][0] = 12194;
  valores_pwm[0][1] = 15;
  valores_pwm[1][1] = 11493;
  valores_pwm[0][2] = 15;
  valores_pwm[1][2] = 10869;
  valores_pwm[0][3] = 15;
  valores_pwm[1][3] = 10203;
  valores_pwm[0][4] = 15;
  valores_pwm[1][4] = 9614;
  valores_pwm[0][5] = 15;
  valores_pwm[1][5] = 9090;
  valores_pwm[0][6] = 15;
  valores_pwm[1][6] = 8546;
  valores_pwm[0][7] = 15;
  valores_pwm[1][7] = 8129;
  valores_pwm[0][8] = 15;
  valores_pwm[1][8] = 7633;
  valores_pwm[0][9] = 15;
  valores_pwm[1][9] = 7193;
  valores_pwm[0][10] = 15;
  valores_pwm[1][10] = 6802;
  valores_pwm[0][11] = 15;
  valores_pwm[1][11] = 6409;
  valores_pwm[0][12] = 15;
  valores_pwm[1][12] = 6060;
  valores_pwm[0][13] = 15;
  valores_pwm[1][13] = 5713;
  valores_pwm[0][14] = 15;
  valores_pwm[1][14] = 5404;
  valores_pwm[0][15] = 15;
  valores_pwm[1][15] = 5101;
  valores_pwm[0][16] = 15;
  valores_pwm[1][16] = 4807;
  valores_pwm[0][17] = 15;
  valores_pwm[1][17] = 4544;
  valores_pwm[0][18] = 15;
  valores_pwm[1][18] = 4291;
  valores_pwm[0][19] = 15;
  valores_pwm[1][19] = 4048;
  valores_pwm[0][20] = 15;
  valores_pwm[1][20] = 3816;
  valores_pwm[0][21] = 15;
  valores_pwm[1][21] = 3609;
  valores_pwm[0][22] = 15;
  valores_pwm[1][22] = 3400;
  valores_pwm[0][23] = 15;
  valores_pwm[1][23] = 3214;
  valores_pwm[0][24] = 15;
  valores_pwm[1][24] = 3029;
}