// #include <stdio.h>
// #include <string.h>

// int main()
// {
//   char s1[30] = "The Little Prince";
//   char *sArr[10] = { NULL, }; // 크기가 10인 문자열포인터 배열을 선언하고 NULL 로 초기화
//   int i = 0; // 문자열 포인터 배열의 인덱스로 사용할 변수

//   char *ptr = strtok(s1, " "); // 공백문자열기준으로 문자열을 자름

//   while(ptr != NULL)
//   {
//     sArr[i] = ptr; // 문자열을 자른뒤 메모리 주소를 문자열 포인터 배열에 저장
//     i++; // 인덱스 증가

//     ptr = strtok(NULL, " ");
//   }

//   for(int i = 0; i < 10; i++)
//   {
//     if(sArr[i] != NULL)
//       printf("%s\n",sArr[i]);
//   }

//   return 0;
// }