// // 표준입력으로 길이 1,000 이하의 문자열이 입력된다.
// // 입력된 문자열에서 공백의 개수를 출력하는 프로그램을 만들어라.

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//   char s1[1001];

//   scanf("%[^\n]s",s1);

//   char *ptr = strchr(s1,' ');
//   int temp = 0;

//   while(ptr != NULL)
//   {
//     temp++;
//     ptr = strchr(ptr+1,' ');
//   }

//   printf("%d\n",temp);
//   return 0;
// }