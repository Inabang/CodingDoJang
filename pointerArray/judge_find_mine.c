// // 표준입력으로 행렬의크기 Row,Col 
// // 문자 (Char)행렬이 입력된다.
// // Row,Col은 공백으로 구분되며
// // 행렬안에서 *은 지뢰이고 .은 지뢰가 아니다.
// // 지뢰가 아닌 요소에는 인접한 지뢰의 개수를 출력하는 프로그램을 만들어라


// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//   int row,col;
  
//   scanf("%d %d", &row, &col);
  
//   char **cm = (char **)malloc(sizeof(char *) * row);
//   for (int i = 0; i < row; i++)
//   {
//     cm[i] = (char *)malloc(sizeof(char) * (col + 1));
//   }

//   for ( int i = 0; i < row; i++)
//   {
//     scanf("%s", cm[i]);
//   }

//   for( int i = 0; i < row; i++)
//   {
//     for ( int j = 0; j < col; j++)
//     {
//       if(cm[i][j] == '.')
//       {
//         cm[i][j] += 2; // ASCII 코드 0으로 변환
//       }
//     }
//   }

//   for(int i = 0; i < row; i++)
//   {
//     for(int j = 0; j < col; j++)
//     {
//       if(cm[i][j] == '*')
//       {
//         for(int m = i - 1 ; m < i + 2; m++)
//         {
//           for(int n = j -1; n < j + 2; n++)
//           {
//             if (m>=0 && m < row && n >= 0 && n < col && cm[m][n] >= '0')
//             {
//               cm[m][n] += 1;
//             }
//           }
//         }
//       }
//     }
//   }


//   for(int i=0; i<row; i++)
//   {
//     printf("%s\n", cm[i]);
//   }
//   printf("\n");




// // 메모리해제
//   for(int i = 0; i < row; i++)
//   {
//     free(cm[i]);
//   }

//   free(cm);
  
//   return 0;
// }