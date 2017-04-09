/* Arquivo    : typedef_gpio.h
 * Compilador : STTools Cosmic
 * Empresa    : Karimex Componentes Eletronicos LTDA
 */

/* Includes */
#include "iostm8.h" // Este arquivo foi copiado da pasta do Cosmic

typedef struct
{
  unsigned char    bit0:1;
  unsigned char    bit1:1;
  unsigned char    bit2:1;
  unsigned char    bit3:1;
  unsigned char    bit4:1;
  unsigned char    bit5:1;
  unsigned char    bit6:1;
  unsigned char    bit7:1;
} flags;

/* New Type: "char_bit":
unsigned char, accessed as individual bits as well as whole byte 
ex:  char_bit Var;
use: Var.bit.bit5; Var.byte; 
*/
typedef union
{
  unsigned char	byte;
  flags	bit;
} char_bit;


//Definição para atuar diretamete no pino atraves de union
volatile char_bit PAODR	@0x5000;	//Para Saída
#define	PAO0	PAODR.bit.bit0
#define PAO1	PAODR.bit.bit1
#define PAO2	PAODR.bit.bit2
#define	PAO3	PAODR.bit.bit3
#define PAO4	PAODR.bit.bit4
#define PAO5	PAODR.bit.bit5
#define PAO6	PAODR.bit.bit6
#define PAO7	PAODR.bit.bit7

//Definição para atuar diretamete no pino atraves de union
volatile char_bit PAIDR	@0x5001;  // Para Entrada
#define	PAI0	PAIDR.bit.bit0
#define PAI1	PAIDR.bit.bit1
#define PAI2	PAIDR.bit.bit2
#define	PAI3	PAIDR.bit.bit3
#define PAI4	PAIDR.bit.bit4
#define PAI5	PAIDR.bit.bit5
#define PAI6	PAIDR.bit.bit6
#define PAI7	PAIDR.bit.bit7


//Definição para atuar diretamete no pino atraves de union
volatile char_bit PCODR	@0x500a;	//Para Saída
#define	PCO0	PCODR.bit.bit0
#define PCO1	PCODR.bit.bit1
#define PCO2	PCODR.bit.bit2
#define	PCO3	PCODR.bit.bit3
#define PCO4	PCODR.bit.bit4
#define PCO5	PCODR.bit.bit5
#define PCO6	PCODR.bit.bit6
#define PCO7	PCODR.bit.bit7

//Definição para atuar diretamete no pino atraves de union
volatile char_bit PCIDR	@0x500b;  // Para Entrada
#define	PCI0	PCIDR.bit.bit0
#define PCI1	PCIDR.bit.bit1
#define PCI2	PCIDR.bit.bit2
#define	PCI3	PCIDR.bit.bit3
#define PCI4	PCIDR.bit.bit4
#define PCI5	PCIDR.bit.bit5
#define PCI6	PCIDR.bit.bit6
#define PCI7	PCIDR.bit.bit7

//Definição para atuar diretamete no pino atraves de union
volatile char_bit PBODR	@0x5005;	//Para Saída
#define	PBO0	PBODR.bit.bit0
#define PBO1	PBODR.bit.bit1
#define PBO2	PBODR.bit.bit2
#define	PBO3	PBODR.bit.bit3
#define PBO4	PBODR.bit.bit4
#define PBO5	PBODR.bit.bit5
#define PBO6	PBODR.bit.bit6
#define PBO7	PBODR.bit.bit7

//Definição para atuar diretamete no pino atraves de union
volatile char_bit PBIDR	@0x5006;  // Para Entrada
#define	PBI0	PBIDR.bit.bit0
#define PBI1	PBIDR.bit.bit1
#define PBI2	PBIDR.bit.bit2
#define	PBI3	PBIDR.bit.bit3
#define PBI4	PBIDR.bit.bit4
#define PBI5	PBIDR.bit.bit5
#define PBI6	PBIDR.bit.bit6
#define PBI7	PBIDR.bit.bit7


//Definição para atuar diretamete no pino atraves de union
volatile char_bit PDODR	@0x500f;	//Para Saída
#define	PDO0	PDODR.bit.bit0
#define PDO1	PDODR.bit.bit1
#define PDO2	PDODR.bit.bit2
#define	PDO3	PDODR.bit.bit3
#define PDO4	PDODR.bit.bit4
#define PDO5	PDODR.bit.bit5
#define PDO6	PDODR.bit.bit6
#define PDO7	PDODR.bit.bit7

//Definição para atuar diretamete no pino atraves de union
volatile char_bit PDIDR	@0x5010;  // Para Entrada
#define	PDI0	PDIDR.bit.bit0
#define PDI1	PDIDR.bit.bit1
#define PDI2	PDIDR.bit.bit2
#define	PDI3	PDIDR.bit.bit3
#define PDI4	PDIDR.bit.bit4
#define PDI5	PDIDR.bit.bit5
#define PDI6	PDIDR.bit.bit6
#define PDI7	PDIDR.bit.bit7


//Definição para atuar diretamete no pino atraves de union
volatile char_bit PEODR	@0x5014;	//Para Saída
#define	PEO0	PEODR.bit.bit0
#define PEO1	PEODR.bit.bit1
#define PEO2	PEODR.bit.bit2
#define	PEO3	PEODR.bit.bit3
#define PEO4	PEODR.bit.bit4
#define PEO5	PEODR.bit.bit5
#define PEO6	PEODR.bit.bit6
#define PEO7	PEODR.bit.bit7

//Definição para atuar diretamete no pino atraves de union
volatile char_bit PEIDR	@0x5015;  // Para Entrada
#define	PEI0	PEIDR.bit.bit0
#define PEI1	PEIDR.bit.bit1
#define PEI2	PEIDR.bit.bit2
#define	PEI3	PEIDR.bit.bit3
#define PEI4	PEIDR.bit.bit4
#define PEI5	PEIDR.bit.bit5
#define PEI6	PEIDR.bit.bit6
#define PEI7	PEIDR.bit.bit7


//Definição para atuar diretamete no pino atraves de union
volatile char_bit PGODR	@0x501e;	//Para Saída
#define	PGO0	PGODR.bit.bit0
#define PGO1	PGODR.bit.bit1

//Definição para atuar diretamete no pino atraves de union
volatile char_bit PGIDR	@0x501f;  // Para Entrada
#define	PGI0	PGIDR.bit.bit0
#define PGI1	PGIDR.bit.bit1

#define NAO_ATUADO	0
#define ATUADO          1

/****************************  DEFINES DE I/Os  *******************************/

/* OUTs */
#define 	LED_conf                GPIOD, GPIO_PIN_0
#define 	LED                     PDO0
#define 	TIM1_CH2_conf		GPIOC, GPIO_PIN_2
#define 	TIM1_CH2                PCO2

/* INs */
//User_button
#define 	USER_BT_conf		GPIOB, GPIO_PIN_7
#define 	USER_BT                 PBI7

/******************************************************************************/


/*********************************  EXEMPLO  ***********************************

//LED1
#define 	LED_conf                GPIOD, GPIO_PIN_0
#define 	LED                     PDO0

//User_button
#define 	Pino_RF_conf            GPIOB, GPIO_PIN_7
#define 	Pino_RF_in              PBI7

*******************************************************************************/