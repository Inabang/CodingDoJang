// // 5x5 정사각 행렬
// // 전치행렬을 출력시킨다 -> 왼쪽위부터 오른쪽 아래까지 대각선을 기준으로
// // 값을 뒤집은 행렬.





// #include <stdio.h>

// int main()
// {
//     int matrix[5][5];

//     scanf("%d %d %d %d %d", 
//         &matrix[0][0], &matrix[0][1], &matrix[0][2], &matrix[0][3], &matrix[0][4]);
//     scanf("%d %d %d %d %d", 
//         &matrix[1][0], &matrix[1][1], &matrix[1][2], &matrix[1][3], &matrix[1][4]);
//     scanf("%d %d %d %d %d", 
//         &matrix[2][0], &matrix[2][1], &matrix[2][2], &matrix[2][3], &matrix[2][4]);
//     scanf("%d %d %d %d %d", 
//         &matrix[3][0], &matrix[3][1], &matrix[3][2], &matrix[3][3], &matrix[3][4]);
//     scanf("%d %d %d %d %d", 
//         &matrix[4][0], &matrix[4][1], &matrix[4][2], &matrix[4][3], &matrix[4][4]);

//     int tempArray[5][5];
   
//     for(int i = 0; i < 5; i++)
//     {
//       for(int j = 0; j < 5; j++)
//       {
//         tempArray[i][j] = matrix[j][i];
//       }
//     }

//     for(int i = 0; i < 5; i++)
//     {
//       for(int j = 0; j < 5; j++){
//         printf("%d ", tempArray[i][j]);
//       }
//       printf("\n");
//     } 
    
  


//     return 0;
// }