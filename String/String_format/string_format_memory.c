// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//   char *s1 = malloc(sizeof(char) * 20);

//   sprintf(s1, "Hello, %s", "world");

//   printf("%s\n",s1);

//   free(s1);

//   return 0;
// }

// // 배열과 마찬가지로 s1과 같이 문자열을 생성할 메모리 공간도 버퍼다.


// // 문자열 사용이 끝낫다면 free 함수로 동적 할당한 메모리를 해제한다.
// // 문자열 포인터 사용은 malloc -> 사용 -> free 패턴이다.