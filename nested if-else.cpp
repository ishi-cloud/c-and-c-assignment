#include<stdio.h>
int per=0;
int main()
{printf("ENTER THE PERCENTAGE OF STUDENT\n");
scanf("%d",&per);
if(per>80)
{printf("A GRADE\n");
}
else if(per <80 && per>=70)
{printf("B GRADE\n");
}
else if(per<70 && per>=60)
{printf("C GRADE\n");
}
else if(per<60 && per>=45)
{printf("D GRADE\n");}
else
{printf("FAIL\n");
}
return 0;
}
