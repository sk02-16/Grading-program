#include<stdio.h>
#include<stdlib.h>


 int main()
{
    int n;
    
    printf("enter the marks ");
    
    scanf("%d",&n);
    
    if(n<=100 && n>=85){
    	printf("Grade obtained = A");
	}
	else if(n>=69 && n<85){
		printf("Grade obtained = B");
	}
	else if(n>=54 && n<69){
		printf("Grade obtained = C");
	}
	
	else if(n>=40 && n<54){
	printf("Grade obtained = D");
	}
	
	else 
	 {
	 printf("Grade obtained = F");
	};
	
	
	return 0;
	
}
