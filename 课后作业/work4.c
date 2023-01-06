 #include<stdio.h>
 int main(void)
 {
     double x,y;
     printf("Enter x(x>=0):\n");

     scanf("%lf",&x);

     if (x<=50){
         y=0.53*x;
     }
     else
     {
         y=0.05*x+26.5;
     }
     printf("y=f(%f)=%.2f\n",x,y); 

     return 0;
     
 }
     
      
     
     