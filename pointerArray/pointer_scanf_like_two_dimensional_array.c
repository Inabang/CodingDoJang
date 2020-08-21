// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//   int row, col;

//   scanf("%d %d", &row, &col);

//   int **m = malloc(sizeof(int *) * row); // 이중포인터에 int 포인터 * row 크기만큼 메모리 할당

//   for(int i = 0; i < row; i++)
//   {
//     m[i] = malloc(sizeof(int) * col); // int의 크기 * col 만큼 동적메모리 할당(가로)
//   }

//   for( int i = 0; i < row; i++)
//   {
//     for ( int j = 0; j < col; j++)
//     {
//       m[i][j] = i + j;
//     }
//   }

//   for( int i = 0; i < row; i++)
//   {
//     for ( int j = 0; j < col; j++)
//     {
//       printf("%d ", m[i][j]);
//     }
//     printf("\n");
//   }

//   for(int i = 0; i < row; i++)
//   {
//     free(m[i]); // 가로공간의 메모리해제
//   }

//   free(m);


//   return 0; 
// }