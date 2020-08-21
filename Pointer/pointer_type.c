// #include <stdio.h>

// int main()
// {
//   long long *numPtr1; 
//   float *numPtr2;
//   char *cPtr1;

//   long long num1 = 10;
//   float num2 = 3.5f;
//   char c1 = 'a';

//   numPtr1 = &num1;
//   numPtr2 = &num2;
//   cPtr1 = &c1;

//   printf("%lld\n", *numPtr1);
//   printf("%f\n", *numPtr2);
//   printf("%c\n", *cPtr1);

//   return 0;
// }

// C언어 에서 사용할 수 있는 모든 자료형은 포인터로 만들 수 있다.
// 포인터에 저장되는 메모리 주솟값은 정수형으로 동일하지만
// 선언하는 자료형에따라 메모리에 접근하는 방법이 달라진다.
// 즉 다음과 같이 포인터를 역 참조하면 선언한 자료형의 크기에 맞춰서 값을 가져오거나 저장한다.

// long long *numPtr1 -> 8byte(longlong)
// float *numPtr2 -> 4byte(float)
// char *cPtr1 -> 1byte(char)

// 즉 long long 포인터는 8바이트만큼 , char는 1바이트만큼 값을 가져오거나 저장한다
