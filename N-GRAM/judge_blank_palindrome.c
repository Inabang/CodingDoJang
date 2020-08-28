// 표준이볅으로 공백이 포함된 길이 30이하의 영문 문자열이 입력된다.
// 입력된 문자열이 회문이면 1, 회문이 아니면 0을 출력하는 프로그램

// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>

// int main()
// {
//   char str[31];
//   char result[31] = {NULL,};
//   bool isTrue = false;


//   scanf("%[^\n]s",str);



//   char *ptr = strtok(str," ");

//   while(ptr != NULL)
//   {
//     strcat(result,ptr);
//     ptr = strtok(NULL," ");
//   }

//   int length = strlen(result);
//   for ( int i = 0; i < length /2; i++)
//   {
//     if(result[i] == result[(length - 1 - i)])
//     {
//       isTrue = true;
//       break;
//     }
//   }

//   printf("%d\n",isTrue);  

//   return 0;
// }