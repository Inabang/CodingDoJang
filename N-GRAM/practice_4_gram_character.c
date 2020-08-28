// 문자 단위로 4gram을 출력한다
// 3글자 이하의 단어가 입력되면 wrong

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//   char text[30];
//   int length;
//   int n = 4;

//   scanf("%s",text);

//   length = strlen(text);

//   if(length < n)
//   {
//     printf("wrong\n");
//   }
//   else
//   {
//     for(int i = 0; length < n; i++)
//     {
//       for(int j=0; j<n; j++)
//       {
//         printf("%c",text[i+j]);
//       }
//       printf("\n");
//     }
//   }

//   return 0;
// }