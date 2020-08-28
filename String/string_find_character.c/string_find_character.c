// #include <stdio.h>
// #include <string.h>

// int main()
// {
//   char s1[30] = "A Garden Diary";

//   char *ptr = strchr(s1,'a'); // 'a' 로 싲가하는 문자열 검색 => 포인터로 반환

//   while(ptr != NULL) // 문자열이 없을때 가지 반복.
//   {
//     printf("%s\n",ptr); // 검색된 문자열을 출력
//     ptr = strchr(ptr + 1,'a'); // 포인터에 1을 더하여 a다음을 검색
//   } 
//   return 0;
// }

// strchr 함수에 문자열과 검색할 문자를 넣어주면 
// 해당 문자로 시작하는 문자열의 위치(포인터) 를 반환한다.
