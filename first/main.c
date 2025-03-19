#include <stdio.h>

int main(void)	//main 함수는 반드시 1개만 있어야한다.
{
	printf("Be happy!\n");
	printf("My friend");

	printf("Be happy\n");
	printf("12345678901234567890\n");
	printf("My\tfriend\n");
	printf("Goot\bd\tchance\n");
	
	printf("Cow\rW\a\n");

	printf("%\n", 10);
	printf("%lf\n", 3.4);
	printf("1.lf\n", 3.45);
	printf("%.10lf\n", 3.4);

    printf("%d과 %d의 합은 %d입니다.\n", 10, 20, 10+20);
	printf("%.1lf - %.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);

	printf("%d를 %d로 나누면 %lf입니다\n", 1, 2, 0.5);
	/*컴퓨터 프로그램을 위해서는 수의 표현 방법(진수, 진법)을 알아야한다.*/
	/*10진수 : 0~9까지의 수로 표현하는 수*/
	/*2진수 : 0~1까지의 수로 표현하는 수 : 컴퓨터가 알아먹음*/
	/*내가 입력한 데이터는 컴파일하게 되면 2진수로 변환된다.*/
	/*10진수, 2진수, 8진수, 16진수(0~F)  */

	printf("%d\n", 12);
	printf("%d\n", 014);	//12를 8진수로 표현하면 014
	printf("%d\n", 0xc);	//12를 16진수로 표현하면 0xc

	printf("%o\n", 12); //12를 8진수로 출력할때 %o
	printf("%x\n", 12);	//12를 16진수로 표현하면 %x (소문자)
	printf("%X\n", 12);	//12를 16진수로 표현하면 %x (대문자)

	/*0.0000314 = 3.14e-5 = 314e-7 */
	printf("%.1lf\n", 1e6);
	printf("%.7lf\n", 3.14e-5);
	printf("%le\n", 0.0000314);
	printf("%.2le\n", 0.0000314);

	printf("%c\n", 'A');
	printf("%s\n", "A");
	printf("%d은 %s입니다.\n", '1', "first");

	printf("%d\n", 'A');    //65  아스키 코드
	printf("%d\n", 'A'+1);    //66
	printf("%c\n", 'A' + 1);  //B
	printf("%c\n", 'A' + 32);  //a
	printf("%c\n", 'A' + 9);  //J

	printf("학번 : %d\n","11009");
	printf("%이름 : %s\n","방정진");
	printf("학점 : %c\n",'A');

	return 0;

}