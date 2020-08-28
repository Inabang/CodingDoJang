// 문자열이 회문인지 판별하려면
// 첫글자와 마지막글자가 같아야하며
// 안쪽으로 한 글자씩 좁혔을 때 글자가 서로 같으면 회문.

// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>

// int main()
// {
//   char word[30]; // 단어를 저장할 배열
//   int length; // 문자열 길이
//   bool isPalindrome = true; // 회문 판별값을 저장할 변수, 초기값 => true

//   printf("단어를 입력하세요 : ");
//   scanf("%s", word);

//   length = strlen(word); // 문자열의 길이를 구함
   
//    // 0부터 문자열 길이의 절반만큼 반복
//   for(int i = 0; i < length / 2; i++)
//   {
//     // 왼쪽 문자와 오른쪽 문자를 비교하여 문자가 다르다면 
//     if( word[i] != word[length-1-i])
//     {
//       // 회문이 아니다.
//       isPalindrome = false; 
//       break;
//     }
//   }

//   printf("%d\n",isPalindrome); // 판별값을 출력

//   return 0;
// }