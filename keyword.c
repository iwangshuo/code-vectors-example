#include<string.h>
#include<stdio.h>
#include <malloc.h>


char *var = NULL;
double d_num;
float f_num;
int i_num;
long l_num;

int main()
{   
    do{
    	free(var);
    	scanf("%d",&i_num);
    	
    	if(i_num<=5 && i_num>0){
    		int i=1;
    		l_num = 1;
    		for(i;i<=i_num;i++){
				l_num = l_num * i;
			}
		}
		else if(i_num<=10 && i_num>5){
			int j = 1;
			l_num = 0;
			while(j<=i_num){
				l_num = l_num + j;
				j++;
			}
		}
		else{
			switch(i_num)
			{
				case 11:l_num=111;break;
				case 12:l_num=222;break;
				case 13:l_num=333;break;
				case 14:l_num=444;break;
				case 15:l_num=555;break;
				default:l_num=0;
			}
		}
		if(l_num!=0){
			var = (char*)malloc(l_num*sizeof(char));
			printf("NOT NULL\n");
		}
		else{
			var = NULL;
			printf("NULL\n");
		}
			
		printf("l_num: %ld \n",l_num);
		//printf("var size:%d\n",sizeof(var));

	}while(var!=NULL);
	
	return 0;	
}
