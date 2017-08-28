#include<stdio.h>
#include<stdlib.h>
int main()
{
	system("color 97");
	int s[7][3]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21};
	int s1[7][3]={2,3,1,5,6,4,8,9,7,12,10,11,15,13,14,18,16,17,19,20,21};
	int s2[7][3]={3,2,5,1,4,7,8,9,6,10,12,15,11,14,13,18,16,17,19,20,21};
	int num[10][10];
	int (*ptr)[3];
	int (*par)[3];
	int i,j,x,n,p,m,k,y,w,b;
	for(i=0;i<=6;i++)
	{
			for(j=0;j<=2;j++)
			{
					printf("\t%d",s[i][j]);
					x++;
					if(x==3)
					{
						printf("\n");
						x=0;
					}
			}
			
	}	
    printf("\nENTER THE NO. OF COLUMN:-");
	scanf("\n%d",&n);
	system("cls");
		for(i=0;i<=6;i++)
	{
			for(j=0;j<=2;j++)
			{
					printf("\t%d",s1[i][j]);
					x++;
					if(x==3)
					{
						printf("\n");
						x=0;
					}
			}
			
	}	
    printf("\nENTER THE NO. OF COLUMN:-");
	scanf("\n%d",&p);
	system("cls");
		printf("\n");
		for(i=0;i<=6;i++)
	{
			for(j=0;j<=2;j++)
			{
					printf("\t%d",s2[i][j]);
					x++;
					if(x==3)
					{
						printf("\n");
						x=0;
					}
			}
			
	}	 
    printf("\nENTER THE NO. OF COLUMN:-");
	scanf("\n%d",&m);
	system("cls");
	for(b=1;b<500;b++)
	 {
	 	 system("color 41");
	 	
	 	system("color b4");
	 }
		for(i=0;i<=6;i++)
    	{
    			for(j=0;j<=6;j++)
    		   	{    				
				   	for(k=0;k<=6;k++)
					  {
												   	    					
    			if(s[i][n]==s1[j][p] && s[i][n]==s2[k][m])
			           {	
					    ptr=s;	
						 printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");	   
						printf("\n\t\t\t\t\t\t\t %d",*(*(ptr+i)+n) )  ;
							    
						 printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");	     	 																																															
		             	}
		            	}
                     }	     	 																																																   
		        }
		        
	}
		    
	
	





 
