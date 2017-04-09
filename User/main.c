/* Projeto         : STM8S_8bit_music
 * Mano dos código : Diego
 * MCU             : STM8S105C6
 * Compilador      : STTools Cosmic
 * Data            : 31/10/2015
 * Descrição       : 
 */

/* Includes */
#include "stm8s.h"
#include "typedef_gpio.h"
#include "notas.h"

/* Defines de usuário */
#define SILENCIO	0
#define NOTA		1

/* Declaração de Subrotinas */
static void GPIO_Config(void);
static void TIM1_Config_PWM(void);
static void TIM3_Config_OVF(uint16_t TIM3_Period);
void toca(char som, char tab, int tempos);

//Músicas
void eye_of_the_tiger(void);
void super_mario(void);

/* Variáveis globais */
volatile unsigned int cnt = 0;
uint16_t prescaler = 15;
uint16_t period = 999;
uint16_t i = 1;
uint8_t musica = 0;


main()
{
  /* Configuração de Clock        *
   * Prescaler = 1                *
   * Clock = 16MHz                */
  CLK_HSIPrescalerConfig(CLK_PRESCALER_HSIDIV1);
  
  /* Inicializações */
  GPIO_Config();
  TIM1_Config_PWM();
  
  //Permitir interrupções
  enableInterrupts();
  
  notas_PWM();
  
  while(1)
  {
    if(USER_BT == 0)
    {
      if(musica <= 2)
      {
        ++musica;
      }
      else
      {
        musica = 1;
      }
      
      switch(musica)
      {
        case 1 :
          eye_of_the_tiger();
          break;
        case 2 :
          super_mario();
          break;
        default :
          break;
      }
    }
  }
}

/* Subrotina : GPIO_Config
 * Descrição : 
 */
static void GPIO_Config(void)
{
  //Outros
  GPIO_Init(LED_conf, GPIO_MODE_OUT_PP_HIGH_SLOW);      //LED
  GPIO_Init(TIM1_CH2_conf, GPIO_MODE_OUT_PP_LOW_FAST);	//TIM1_CH2
  GPIO_Init(USER_BT_conf, GPIO_MODE_IN_PU_NO_IT);       //User button
}

/* Subrotina : TIM1_Config_PWM
 * Descrição : 
 */
static void TIM1_Config_PWM(void)
{
  //Inicialização do TIM1
  TIM1_TimeBaseInit(prescaler, TIM1_COUNTERMODE_UP, period, 0);

  //Config do PWM1 - Duty Cycle = 50%
  TIM1_OC2Init(TIM1_OCMODE_PWM1, TIM1_OUTPUTSTATE_ENABLE, TIM1_OUTPUTNSTATE_DISABLE, ((period+1)/2), TIM1_OCPOLARITY_HIGH, TIM1_OCNPOLARITY_LOW, TIM1_OCIDLESTATE_RESET, TIM1_OCNIDLESTATE_RESET);
  TIM1_OC2PreloadConfig(ENABLE);

  //Preload o Registrador Auto reload
  TIM1_ARRPreloadConfig(ENABLE);

  //Ativa o periférico TIM1
  TIM1_Cmd(ENABLE);

  //Ativa as saídas do TIM1
  TIM1_CtrlPWMOutputs(DISABLE);
}

/* Subrotina : TIM3_Config_OVF
 * Descrição : 
 */
static void TIM3_Config_OVF(uint16_t TIM3_Period)
{
  //Inicialização do TIM3
  TIM3_TimeBaseInit(TIM3_PRESCALER_256, TIM3_Period);

  //Limpa o flag do TIM3
  TIM3_ClearFlag(TIM3_FLAG_UPDATE);

  //Escolhe quais interrupções serão permitidas
  TIM3_ITConfig(TIM3_IT_UPDATE, ENABLE);

  //Ativa o periférico TIM3
  TIM3_Cmd(ENABLE);
}

/* Subrotina : toca
 * Descrição : 
 */
void toca(char som, char tab, int tempos)
{
  cnt = 0;
  
  while(cnt < tempos)
  {
    switch(som)
    {
      case SILENCIO :
        TIM1_CtrlPWMOutputs(DISABLE);
        break;
      case NOTA :
        prescaler = valores_pwm[0][tab];
        period 	  = valores_pwm[1][tab];
        TIM1_Config_PWM();
        TIM1_CtrlPWMOutputs(ENABLE);
        break;
    }
  }
}

/* Subrotina : eye_of_the_tiger
 * Descrição : 
 */
void eye_of_the_tiger(void)
{
  //Beat da música
  TIM3_Config_OVF(8999);
  
  toca(NOTA, 10, 4);
  toca(SILENCIO, 0, 4);
  
  toca(NOTA, 10, 3);
  toca(NOTA, 8, 3);
  toca(NOTA, 10, 3);
  toca(SILENCIO, 0, 7);
  toca(NOTA, 10, 3);
  toca(NOTA, 8, 3);
  toca(NOTA, 10, 3);
  toca(SILENCIO, 0, 7);
  
  toca(NOTA, 10, 3);
  toca(NOTA, 8, 3);
  toca(NOTA, 6, 9);
  toca(SILENCIO, 0, 9);
}

/* Subrotina : super_mario
 * Descrição : 
 */
void super_mario(void)
{
  //Beat da música
  TIM3_Config_OVF(8999);
  
  toca(NOTA, 12, 1);
  toca(NOTA, 12, 1);
  toca(SILENCIO, 0, 1);
  toca(NOTA, 12, 1);
  
  toca(SILENCIO, 0, 1);
  toca(NOTA, 8, 1);
  toca(NOTA, 12, 1);
  toca(SILENCIO, 0, 1);
  
  toca(NOTA, 15, 1);
  toca(SILENCIO, 0, 1);
}