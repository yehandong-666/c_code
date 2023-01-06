#include<stdio.h>
int main(void)
{
  float dist;
  int minute;
  float cost;
  printf("Enter distance and time\n");
  scanf("%f%d",&dist,&minute);

  if(dist<=3){
    cost=10;
  }else if(dist<=10){
    cost=10+(dist-3)*2;
  }else 
  {
    cost=10 +10-3*2+(dist-10*3); 
  }

  if (minute<=5)
  { 
    cost +=0;
  }else
  { 
    cost +=minute/5*2;
  }

  printf("Cost is %.2f\n",cost);
  
  
  return 0;
}