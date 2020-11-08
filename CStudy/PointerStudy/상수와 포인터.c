int main() {
	const int num1 = 10;    // int형 상수
	const int* numPtr;      // int형 상수를 가리키는 포인터. int const *numPtr도 같음

	numPtr = &num1;
	*numPtr = 20;    // 컴파일 에러. num1이 상수이므로 역참조로 값을 변경할 수 없음

	int num1 = 10;    // int형 변수
	int num2 = 20;    // int형 변수
	int* const numPtr = &num1;    // int형 포인터 상수

	numPtr = &num2;    // 컴파일 에러. 포인터(메모리 주소)를 변경할 수 없음

	return 0;
}