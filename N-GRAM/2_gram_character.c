// // N=gram 은 문자열에서 N개의 연속된 요소를 추출하는 방법
// // Hello라는 문자열을 문자 단위 (2-gram) 으로 추출하면
// // He el ll lo 가된다.

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//   char text[30] = "Hello";
//   int length;

//   length = strlen(text);
//   // 2-gram이므로 문자열의 끝에서 한글자 앞까지만 반복
//   for ( int i = 0; i < length - 1; i++)
//   {
//     printf("%c%c\n",text[i],text[i+1]);
//   }

//   return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//   char text[30] = "Hello";
//   int length;

//   length = strlen(text);
//   // 3-gram이므로 문자열의 끝에서 두글자 앞까지만 반복
//   for ( int i = 0; i < length - 2; i++)
//   {
//     printf("%c%c%c\n",text[i],text[i+1],text[i+2]);
//   }

//   return 0;
// }