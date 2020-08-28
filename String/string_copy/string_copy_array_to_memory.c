// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int main()
// {
//   char s1[10] = "Hello"; // 크기가 10인 char 배열 선언후 문자열 할당

//   char *s2 = malloc(sizeof(char) * 10);// char 10개 크기만큼의 메모리 할당.

//   strcpy(s2,s1);

//   printf("%s\n",s2);

//   // H e l l o (NULL \0)
//   // s1 문자열이 s2 포인터 메모리로 복사가된다.
//   // H e l l o (Null \0)

//   free(s2);
// }