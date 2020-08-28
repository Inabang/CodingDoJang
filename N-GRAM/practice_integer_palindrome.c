// 정수 회문이란 앞뒤가 같은수를 의미한다.

// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>

// int main()
// {
//   long long num1;
//   char text[30];

//   printf("정수를 입력하세요 : ");
//   scanf("%lld",&num1);

//   sprintf(text,"%lld",num1);

//   int length;
//   bool isPalidrome = true;

//   length = strlen(text);

//   int begin = 0;
//   int end = length - 1;
//   while (begin < end)
//   {
//     if(text[begin] != text[end])
//     {
//       isPalidrome = false;
//       break;
//     }

//     begin++;
//     end--;
//   }

//   printf("%d\n",isPalidrome);

//   return 0;
// }