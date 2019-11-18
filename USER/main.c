#include"stm32f10x.h"
#include"delay.h"
#include"key.h"
#include"exti.h"
#include"led.h"
#include"usart.h"
#include"SIM868.h"

int main(){
	unsigned char c[16] = "hello world!";
	key_init();
	led_init();
//	led_on(1);
	key_on();
	delay_init();
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
	exti0_init();
	uart1_init(115200);
	uart2_init(115200);
	uart3_init(115200);
	OPEN_SIM868();
	SIM868_GNSS_UART_OFF;
//	BT_init();
	printf("+++");
	GPS_init();
//	GSM_init();
	while(1){
//		Usart_SendStr_length(USART3,c,16);
//		BT_connect();
//		printf("hello world liu qiang");
		delay_ms(1000);
//		Clear_Buffer1();
	}
}
