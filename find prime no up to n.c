#include<stdio.h>
int main(){
  int l,count=0;
  printf("no to find prime");
  scanf("%d",&l);
  for (int n=1;n<=l;n++){
    int check=2 ,flag=0;
  while(check<n){
    if(n%check==0){
       flag++;
break;}
check++  ;
  }  
  if(flag==0 && n!=1){
    count++;
    printf("%d ",n);
  }
  }
  printf("\n no of prine is %d",count);
  return 0;
}
