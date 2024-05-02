#include<stdio.h>

int main() {
  int num = 12321;
  int rev = 0, rem, sum;
  int original_num = num;
  while(num != 0) {
    rem = num % 10;
    rev = rev * 10 + rem;
    num = num / 10;
  }
  if(rev == original_num) {
    printf("Given number is Palindrome");
  } else {
    printf("Given number is not a palindrome");
  }

  return 0;
}
