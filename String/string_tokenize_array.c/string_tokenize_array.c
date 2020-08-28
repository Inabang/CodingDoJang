// #include <stdio.h>
// #include <string.h>

// int main()
// {
//   char s1[30] = "The Little Prince";

//   char *ptr = strtok(s1, " ");

//   while(ptr != NULL) // 자른 문자열이 나오지 않을때 까지 반복
//   {
//     printf("%s\n",ptr); // 자른 문자열을 출력
//     ptr = strtok(NULL, " "); // 다른 문자열을 잘라서 포인터 반환
//   }

// // strok는 " " 공백을 찾아서 NULL 을 채운뒤 첫부분인 "The"를 자른다
// // 이제 while안의 strtok 에 NULL 을 넣어주어 앞에서 잘린 문자열만큼 다른 문자로 이동한다
// // 그리고 다시 공백 문자를 찾아서 NULL을 채운뒤 Little을 자른다
// // 하지만 아직 문자열 끝의 NULL을 찾지 못했으니 반복한다.

//   return 0;
// }