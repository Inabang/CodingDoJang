// #include <stdio.h>
// #include <string.h>

// int main()
// {
//   char s1[20];
//   char s2[20];

//   printf("문자열 두 개를 입력하세요 : ");
//   scanf("%s %s", s1,s2);

//   int ret = strcmp(s1,s2); // 비교
//   printf("반환값 : %d\n",ret);


//   // switch(ret)
//   // {
//   //   case 0:
//   //     printf("같아요");
//   //     break;
//   //   case 1:
//   //     printf("%s보다 %s가 큼\n",s2,s1);
//   //     break;
//   //   case -1:
//   //     printf("%s보다 %s가 작음\n",s1,s2);
//   //     break;
//   // }

//   // 리눅스와 Mac에서는 ASICC 코드값의 차이를 반환
//   if(ret == 0)
//   {
//     printf("같네요");
//   }
//   else if(ret > 0)
//   {
//     printf("%s보다 %s가 크네\n",s2,s1);
//   }
//   else if(ret < 0)
//   {
//     printf("%s보다 %s가 크네\n",s1,s2);
//   }
//   return 0;
// }

