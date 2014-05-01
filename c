#include<stdio>
int main(void){
printf("Hello World");

int fk[100],fks[100],i,n;
fk[0]=0;fk[1]=1;
for(i=2;i<100;i++){
fk[i]=fk[i-1]+fk[i-2];
}
fks[0]=fk[0];
for(i=1;i<100;i++){
fks[i]=fks[i-1]+fk[i];
}
for(i=0;i<100;i++){
printf("%d ",fk[i]);
}
printf("\n\n");
for(i=0;i<100;i++){
printf("%d ",fks[i]);
}

}
