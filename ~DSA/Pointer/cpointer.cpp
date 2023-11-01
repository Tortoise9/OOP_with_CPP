#include<stdlib.h>//for malloc
#include<stdio.h>
int main(){
    int *ptr ;
    int n;

   printf("Enter the number of element  :");
   scanf("%d",&n);
    ptr = (int*)(malloc(sizeof(int)*n));
   if(ptr == NULL){
    printf("Memory is not allocate");
    // ptr hold the address if allocated
    exit(0); 
    // program is terminated sucessfuly without any error 

   }
   else{
    for(int i=0;i<n;i++){
        printf("\nEnter the %d element",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<5;i++){
        printf("\t %d",ptr[i]);
    }
   }

   free(ptr);

    return 0;
}
