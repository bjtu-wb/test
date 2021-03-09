#include <stdio.h> 
int main(void)
{
	int a[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	
	//int **p;//指向指针的指针变量 
	int i ,j;
	int (*p)[4];//数组指针 变量
	int *q, *r, *s;//指针变量 
	int *x;//指针变量
	int *pArr[3];//指针数组
	
	x = &a[0][0];
	//p =(int**) a;
	p = a;
	q = a[0];
	r = a[1];
	s = a[2];
	

	pArr[0] = a[0];
	pArr[1] = a[1];
	pArr[2] = a[2];
	
	printf("p[0]=%d p[1]=%d  p[2]=%d p[3]=%d \n", p[0], p[1], p[2], p[3]);
	printf("p[0]=%d p[1]=%d  p[2]=%d p[3]=%d \n", *p[0], *p[1], *p[2], *p[3]);
	
	printf("p=%d &a[0]=%d  q=%d *(a+0)=%d x=%d\n", p, &a[0], q, *(a+0), x);
	printf("a+2=%d &a[2]=%d a[2]=%d *(a+2)=%d &a[2][0]=%d\n", 
			a+2, &a[2], a[2], *(a+2), &a[2][0]);
	
	printf("*(pArr+2)=%d pArr[2]=%d  &a[2][0]=%d\n", *(pArr+2), pArr[2], &a[2][0]);
	printf("*(*(pArr+2)+1)=%d *(pArr[2]+1)=%d  a[2][0]=%d\n", 
			*(*(pArr+2)+1), *(pArr[2]+1), a[2][1]);
	
/*	
	printf("%d %d %d\n", *(p + 1), a[1], *(a + 1) );
	
	printf("%d %d %d %d\n", *(*(p + 1)+1), *(a[1]+1), *(*(a + 1)+1), a[1][1]);

	printf("%d %d %d %d\n", *(s+2), *(a[2]+2), *(q+10), a[2][2] );
	printf("%d %d %d %d\n", *(r), *(a[1]+0), *(q+4), a[1][0] );
	printf("%d %d %d %d\n", *(r+2), *(a[1]+2), *(q+6), a[1][2] );
	printf("%d %d %d %d\n", *(r+2), *(a[1]+2), *(x+6), a[1][2] );
*/
	printf("\n"); 
	for (i = 0; i < 3; i++)
	{
	    for (j = 0; j < 4; j++)
	    {
			printf("%3d",*(*(a + i) + j));
	    }
		printf("\n");
	    
	}

	printf("\n"); 
	for (i = 0; i < 3; i++)
	{
	    for (j = 0; j < 4; j++)
	    {
			printf("%3d",*(*(p + i) + j));
	    }
		printf("\n");
	    
	}
	printf("\n"); 
	for (i = 0; i < 3; i++)
	{
	    for (j = 0; j < 4; j++)
	    {
			printf("%3d",*(*(pArr + i) + j));
	    }
		printf("\n");
	    
	}

	return 0;	
} 

