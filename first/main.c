#include <stdio.h>

int main(void)	//main �Լ��� �ݵ�� 1���� �־���Ѵ�.
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

    printf("%d�� %d�� ���� %d�Դϴ�.\n", 10, 20, 10+20);
	printf("%.1lf - %.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);

	printf("%d�� %d�� ������ %lf�Դϴ�\n", 1, 2, 0.5);
	/*��ǻ�� ���α׷��� ���ؼ��� ���� ǥ�� ���(����, ����)�� �˾ƾ��Ѵ�.*/
	/*10���� : 0~9������ ���� ǥ���ϴ� ��*/
	/*2���� : 0~1������ ���� ǥ���ϴ� �� : ��ǻ�Ͱ� �˾Ƹ���*/
	/*���� �Է��� �����ʹ� �������ϰ� �Ǹ� 2������ ��ȯ�ȴ�.*/
	/*10����, 2����, 8����, 16����(0~F)  */

	printf("%d\n", 12);
	printf("%d\n", 014);	//12�� 8������ ǥ���ϸ� 014
	printf("%d\n", 0xc);	//12�� 16������ ǥ���ϸ� 0xc

	printf("%o\n", 12); //12�� 8������ ����Ҷ� %o
	printf("%x\n", 12);	//12�� 16������ ǥ���ϸ� %x (�ҹ���)
	printf("%X\n", 12);	//12�� 16������ ǥ���ϸ� %x (�빮��)

	/*0.0000314 = 3.14e-5 = 314e-7 */
	printf("%.1lf\n", 1e6);
	printf("%.7lf\n", 3.14e-5);
	printf("%le\n", 0.0000314);
	printf("%.2le\n", 0.0000314);

	printf("%c\n", 'A');
	printf("%s\n", "A");
	printf("%d�� %s�Դϴ�.\n", '1', "first");

	printf("%d\n", 'A');    //65  �ƽ�Ű �ڵ�
	printf("%d\n", 'A'+1);    //66
	printf("%c\n", 'A' + 1);  //B
	printf("%c\n", 'A' + 32);  //a
	printf("%c\n", 'A' + 9);  //J

	printf("�й� : %d\n","11009");
	printf("%�̸� : %s\n","������");
	printf("���� : %c\n",'A');

	return 0;

}