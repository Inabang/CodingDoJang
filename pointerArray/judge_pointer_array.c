// // 표준입력으로 정사각행렬의 크기가 입력된다
// // 입력범위 2~10
// // 단위 행렬을 출력하는 프로그램을 만든다.
// // 숫자와 숫자사이는 공백

// // 단위행렬 => 왼족위부터 오른쪽 아래까지의 대각선이 1이며 나머지는 모두 0인 행렬

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main()
// {
//   int row;

//   scanf("%d",&row);

//   int **m = malloc(sizeof(int *) * row);

//   for(int i = 0; i < row; i++)
//   {
//     m[i] = malloc(sizeof(int) * row);
//   }

//   for(int i = 0; i < row; i++)
//   {
//     memset(m[i],0,sizeof(int) * row);
//   }

//   for ( int i = 0; i < row; i++)
//   {
//     for ( int j = 0; j < row; j++)
//     {
//       if(i == j)
//       {
//         m[i][j] = 1;
//       }
//       printf("%d ",m[i][j]);
//     }
//     printf("\n");
//   }

//   for(int i=0; i<row; i++)
//   {
//     free(m[i]);
//   }

//   free(m);


//   return 0;
// }