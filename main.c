#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
float change;
scanf("%f", &change);


int count_change=0;

    while(change>=1.0){
        if(change>=2.00){change-=2.00; count_change++;}
        else if(change>=1.00){change-=1.00; count_change++;}

}
    if(change>0.49995){change-=0.50; count_change++;}
    if(change>0.19995){change-=0.20; count_change++;}
    if(change>0.19995){change-=0.20; count_change++;}
    if(change>0.09995){change-=0.10; count_change++;}
    if(change>0.04995){change-=0.05; count_change++;}
    if(change>0.01995){change-=0.02; count_change++;}
    if(change>0.01995){change-=0.02; count_change++;}
    if(change>0.00995){change-=0.01; count_change++;}
   printf("%d", count_change);
}
