#include <stdio.h>


int getChange(float M , float P) {
int Money= (int)(M*100);
  int Price= (int)(P*100);
  int change[6] = {0};
  int denomination[6] = {1, 5, 10, 25, 50, 100};
  int di = 5;

  Money = Money-Price;
  while (Money > 0) {
    while (denomination[di] > Money) {
      di--;
    }
   
    Money -= denomination[di];
    change[di]++;
  }
  

  for (int index = 0; index < 6 ; index++) {
    printf("%d ",change[index]);
  }
}
int main()
{
    getChange(5, 0.99); // should return [1,0,0,0,0,4]
}