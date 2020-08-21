// 입력값의 범위는 3~10
// 입력된 높이만큼 산 모양으로 별을 출력하는 프로그램.

// #include <stdio.h>

// int main()
// {
//   int height;

//   scanf("%d",&height);

//   for ( int i = 0; i < height; i++ )
//   {
//     for ( int j = height -1 ; j >= 0; j--)
//     {
//       if( j > i)
//         printf(" ");
//       else
//         printf("*");
//     }
//     for ( int k = 0; k < height -1; k++)
//     {
//       if( k < i)
//         printf("*");
//     }
//     printf("\n");
//   }

//   return 0;
// }