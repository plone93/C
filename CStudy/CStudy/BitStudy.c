#include<stdio.h>

int main() {
    int* numPtr1;     // 단일 포인터 선언
    int* numPtr2;    // 이중 포인터 선언
    int num1 = 10;

    numPtr1 = &num1;    // num1의 메모리 주소 저장 

    numPtr2 = &numPtr1; // numPtr1의 메모리 주소 저장

    printf("%d\n", *numPtr2);    // 20: 포인터를 두 번 역참조하여 num1의 메모리 주소에 접근



	return 0;
}

/*
임베디드에서의 사용방식

0 : 전류 차단
1 : 전류 통과

포트번호 : 8765 4321
동작신호 : 0000 0000


포트번호 1 : 첫번째 LED ON
포트번호 2 : 두번째 LED ON
..
..

이라고 가정하면

//초기값
int keyPin = 0; // 0000 0000

//LED컨트롤
int LED1 = 1; //0000 0001, 첫번째 LED를 키는 신호
int LED2 = 2; //0000 0010, 두번째 LED를 키는 신호
int OFF = 0; //0000 0000, 모든 LED를 끔

keyPin = keyPin | LED1; //1번 LED ON
keyPin = keyPin | LED2; //2번 LED ON

keyPin = OFF; //LED 전부 끄기


*/