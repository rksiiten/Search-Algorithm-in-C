#include<stdio.h>

int list[100];
int n;
int i;
char operation;
int KEY;

createList()
{
	printf("\n == CREATE LIST == \n");
	printf(" Enter how many elements to put in the list: ");
	scanf("%d", &n);
	printf("\n");
	
	for(i = 0; i < n; i++)
	{
		printf(" Enter the value for element %d: ", i);
		scanf("%d", &list[i]);
	}
}

search()
{
	printf("\n == SEARCH VALUE == \n");
	printf(" Enter the value to search: ");
	scanf("%d", &KEY);
	
	for(i = 0; i < n; i++)
	{
		if(KEY == list[i])
		{
			printf("\n\t\t %d FOUND AT %d", KEY, i);
			break;
		}
	}
	if(i >= n)
	{
		printf("\n\t\t %d NOT FOUND \n", KEY);
	}
}

menu()
{
	for(;;)
	{
		printf("\n\t     << LIST OPERATION >> \n");
		printf("\n\t\t------------");
		printf("\n\t\t| [C]reate |");
		printf("\n\t\t| [S]earch |");
		printf("\n\t\t| [E]xit   |");
		printf("\n\t\t------------\n");
		
		printf("\n\t Please Select Operation: ");
		scanf(" %c", &operation);
		
		switch(operation)
		{
			case 'C': case 'c':
				createList();
			break;
			
			case 'S': case 's':
				search();
			break;
			
			case 'E': case 'e':
				return 0;
			break;
		}
		
		printf("\n------------------------------------------------\n");
	}
}

main()
{
	menu();
}
