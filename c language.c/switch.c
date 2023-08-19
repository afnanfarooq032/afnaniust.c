 //use of switch
 #include<stdio.h>
 int main()
 {
 	int sw;
 	printf("Enter 1 for urdu,Enter 2 for hindi,Enter 3 for english   \n");
 	scanf("%d",&sw);
 	switch(sw)
 	case 1:
 	{
		printf("Haa");
 		 break;
 	case 2:
 		printf("JI");
 		break;
 	case 3:
 		printf("Hii");
 		break;
 	default:
 		printf("Not available");
 	}
 	return 0;
 }