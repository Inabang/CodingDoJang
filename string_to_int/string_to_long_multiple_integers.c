// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//   char *s1 = "0xaf10 42 0x27c 9952"; // 문자열
//   int num1,num2,num3,num4;
//   char *end;

//   num1 = strtol(s1,&end,16); // 16진법으로 표기된 문자열을 정수로 변환
//   num2 = strtol(end,&end,10); // 10진법으로 표기된 문자열을 정수로 변환
//   num3 = strtol(end,&end,16); // 16진법으로 표기된 문자열을 정수로 변환
//   num4 = strtol(end,NULL,10); // 10진법으로 표기된 문자열을 정수로 변환


//   printf("%x\n",num1); // 16
//   printf("%d\n",num2); // 10
//   printf("%x\n",num3); // 16
//   printf("%d\n",num4); // 10

//   return 0;
// }