#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int arr[100];
int arr_length;
bool visited[100];
bool result=false;

void walk(int index , int step){

    int current_location=index+step;

    if(result==true){
        return;
    }
    else if(current_location<0||current_location>=arr_length){
        return;
    }
    else if(current_location==arr_length-1){
        result=true;
        printf("->go from %d  to  END width %d steps  \n",index+1,step);
        return;
    }
    else{

        if(visited[current_location]==false)
            visited[current_location]=true;
        else
            return;

        printf("->go from %d  to  %d width %d steps  \n",index+1,current_location+1,step);

        int new_step=arr[current_location];

        walk(current_location,new_step);

        walk(current_location,new_step*-1);
    }

}

int main()
{

    scanf("%d",&arr_length);
    for(int i=0;i<arr_length;i++)
    {
        scanf("%d", &arr[i]);
        visited[i]=false;
    }

    walk(0,arr[0]);

    if(result==true)
    {
        printf("\nYES");
    }
    else
    {
        printf("\nNO");
    }

    return 0;
}
