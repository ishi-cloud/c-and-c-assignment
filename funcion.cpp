#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main()
{char s1[]="YOGI";
char s2[]="modi";
int result =strcmp(s1,s2);
if(result=0)
{printf("STRINGS ARE EQUAL\n");
}
if(result>1)
{printf("STRING S1 IS GREATER THAN STRING S2\n");
}
else
{printf("STRING S2 IS LESSER THAN STRING S2\n");
}
char s3[8];
strcpy(s3,s1);
strlwr(s3);
printf("%s\n",s3);
strupr(s2);
printf("%s\n",s2);
strrev(s3);
printf("REVERSE STRING IS %s\n",s3);
int lengthres=strlen(s1);
printf("LENGTH OF STRING IS : %d\n",lengthres);
float x=25,y=8.387;

float res=pow(x,y);
printf("%f RAISED TO POWER %f IS %.1f\n",x,y,res);
printf("SQUARE ROOT OF %.2f is %.2f\n",x,sqrt(x));
printf("INTEGER GREATER THAN OR EQUAL TO %.2f : %.2lf\n",y,ceil(y));
printf("INTEGER SMALLER THAN OR EQUAL TO %.2f : %.2lf\n",y,floor(y));
srand(time(0));
int random=0;
random =rand()%10+1;
printf("RANDOM VALUE BETWEEN 1 AND 10 IS %d\n",random);



}
