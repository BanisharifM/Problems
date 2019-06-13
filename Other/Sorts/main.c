#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<time.h>
//for bool
#include <stdbool.h>

void Sorting(char type,int unsorted[],int size);
void New_array(int arr[],int size);
void Make_unsorted_arr(int unsorted[],int arr[],int size);
void pint_array(int arr[],int size);
void Bubble_sort(int arr[],int size);
void Modified_Bubble_sort(int arr[],int size);
void Selection_sort(int arr[],int size);
void Insertion_sort(int arr[],int size);


int main()
{
	int size=0;
	int unsorted[100000];
	char input;
	while(1)
	{
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t    ");
		printf("W E L C O M E\n");
		printf("\n\n\n\n\n\n\n\n\n\t\t 1- New_array\n\n\t\t 2- Bubble_sort\n\n\t\t 3- Modified_Bubble_sort\n\n\t\t 4- Selection_sort\n\n\t\t 5- Insertion_sort\n\n\t\t 6- Quit\n\n");
		printf("\n\n\t\tEnter a number     ");
		input=_getch();
		if(input=='1')
	  	{
	  		system("cls");
	  		printf("Input array number\n");
			scanf("%d",&size);
			New_array(unsorted,size);
			printf("Do you want to print arrays? (y/n) \n");
			char answer=_getch();
			if(answer=='y')
			{
				pint_array(unsorted,size);
				Sleep(3000);
			}
	  	}
		else if((input=='2'||input=='3'||input=='4'||input=='5')&&size!=0)
		{
            Sorting(input,unsorted,size);
		}
		else if(input=='6')
		  exit(0);
	}

	return 0;
}
void New_array(int arr[],int size)
{
	char inputing;
	printf("Random Input ? (y/n)\n");
	scanf("%s",&inputing);
	if(inputing=='y')
	{
		srand(time(0));
		int w=size;
		if(w>1000)
            w=1000;
		for(int i=0;i<size;i++)
			arr[i]=rand()%(w);
	}
	else
	{
		printf("pleas enter array items!\n");
		for(int i=0;i<size;i+=1)
			scanf("%d",&arr[i]);
	}
}
void Sorting(char type,int unsorted[],int size)
{
    system("cls");
	int arr[size];
	clock_t begin,end;
	for(int i=0;i<size;i++)
		arr[i]=unsorted[i];
	begin = clock();
	switch (type)
	{
		case '2':
			Bubble_sort(arr,size);
			break;
		case '3' :
			Modified_Bubble_sort(arr,size);
			break;
		case '4' :
			Selection_sort(arr,size);
			break;
		case '5':
			Insertion_sort(arr,size);
			break;
	}
	end = clock();
	printf("Do you want to print arrays? (y/n) \n");
	char ans;
	scanf("%s",&ans);
	if(ans=='y')
	{
		pint_array(unsorted,size);
		pint_array(arr,size);
		Sleep(3000);
	}
    printf("\n %f\n",(double)(end-begin));
    Sleep(3000);
}
void pint_array(int arr[],int size)
{
	printf("\n[");
	for(int i=0;i<size-1;i++)
		printf("%d, ",arr[i]);
	printf("%d] \n",arr[size-1]);
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Bubble_sort(int arr[], int size)
{
   for (int i = 0; i < size-1; i++)
   {
   		for (int j = 0; j < size-i-1; j++)
   		{
   			if (arr[j] > arr[j+1])
	          swap(&arr[j], &arr[j+1]);
   		}
   }
}
void Modified_Bubble_sort(int arr[],int size)
{
	bool q;
	for (int i = 0; i < size-1; i++)
   {
   		q=true;
   		for (int j = 0; j < size-i-1; j++)
   		{
   			if (arr[j] > arr[j+1])
	          swap(&arr[j], &arr[j+1]);
	      	q=false;
   		}
   		if(q==true)
   			break;
   }
}
void Selection_sort(int arr[], int size)
{
    int index;
    for (int i = 0; i < size-1; i++)
    {
        index = i;
        for (int j = i+1; j < size; j++)
        {
        	if (arr[j] < arr[index])
            index = j;
        }
        swap(&arr[index], &arr[i]);
    }
}
void Insertion_sort(int arr[], int size)
{
   int i, x, j;
   for (int i = 1; i < size; i++)
   {
       x = arr[i];
       j = i-1;
       while (j >= 0 && arr[j] > x)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = x;
   }
}
