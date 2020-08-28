// 표준입력으로 정수와 길이 10이하의 문자열입력
// 입력된 문자열을 정수만큼 문자 단위로 Ngram으로 출력하는 프로그램

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//   int gram;
//   char str[11];

//   do
//   {
//     scanf("%d %s",&gram,str);
//   }
//   while(strlen(str) > 11);

//   int length = strlen(str);
//   if(length < gram)
//   {
//     printf("wrong\n");
//   }else{
//     for(int i = 0; i < (length - (gram-1)); i++)
//     {
//       for(int j = 0 ; j < gram; j++)
//       {
//         printf("%c",str[i+j]);
//       }
//       printf("\n");
//     }
//   }
//   return 0;
// }