#include <stdio.h>
#include <string.h>
int main(){
  char str[100];
  int len, i;

  scanf("%[^\n]s", str);
  len = strlen(str);

  if(str[len-1] == '\n'){
    str[len-1] = '\0';
  }

  int count = 0;
  for(i = 0; i <len; i++){
    if(str[i] == ''){
      printf("%d", count);
      count = 0;
    }
    else{
      count ++;
    }
  }

  printf("%d\n", count);
  return 0;
}
