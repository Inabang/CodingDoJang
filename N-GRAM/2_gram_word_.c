// #include <stdio.h>
// #include <string.h>

// int main()
// {
//   char text[100] = "this is c language";
//   char *tokens[30] = {NULL,}; // NULL로 초기화

//   int count = 0;

//   char *ptr = strtok(text," "); // 공백 문자를 기준으로 문자열을 자른다. 

//   while(ptr != NULL)
//   {
//     tokens[count] = ptr; // 문자열을 자른뒤 메모리 주소를 문자열 포인터배열에 저장
//     count++;
//     ptr = strtok(NULL," ");
//   }

//   //2-gram 이므로 배열의 마지막 요소에서 한개 앞까지만.
//   for(int i = 0; i < count - 1; i++)
//   {
//     printf("%s %s\n",tokens[i],tokens[i+1]);
//   }

//   return 0;
// }