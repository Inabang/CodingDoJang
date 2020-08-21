// #include <stdio.h>

// int main()
// {
//   char *s1 = "Hello"; 

//   printf("문자열을 입력하세요 : ");
//   scanf("%s", s1);

//   printf("%s\n", s1);

//   return 0;
// }

// 읽기 전용 메모리에는 scanf 입력 값을 저장할 수 없음.
// 입력 값을 문자열 포인터에 저장하려면 문자열이 들어갈 공간을 마련해야한다.
// malloc 함수로 메모리를 할당한 뒤 문자열을 저장한다.