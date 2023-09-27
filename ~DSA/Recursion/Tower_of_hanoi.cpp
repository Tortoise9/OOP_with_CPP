#include<iostream>
void TOH(int n , char S , char D , char T){
    // S=source D=destination and T = temp
    if(n==1){
        // if only one disk move source to destination
        printf("\nMove disk 1 from %c to %c\n",S,D);
        return ;
    }
    TOH(n-1, S, T, D);
    printf("\nMove disk %d from %c to %c",n-1,S,T);
    TOH(n-1,T,D,S);


}
int main(){
    int n ;
    printf("Enter the No of disk : ");
    scanf("%d",&n);
    TOH(n,'S','D','T');
    return 0;
}