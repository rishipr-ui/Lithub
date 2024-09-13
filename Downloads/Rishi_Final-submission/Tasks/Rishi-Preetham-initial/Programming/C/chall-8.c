#include <stdio.h>
int main() {
    int a[10];
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    int key,max=a[0],min=a[0],c=0;
    scanf("%d",&key);
    for(int i=0;i<10;i++){
        if(a[i]==key){
            c++;
        }
        if(max<a[i]){
            max=a[i];
        }
        if(min>a[i]){
            min=a[i];
        }
    }
    printf("%d",c);
    printf("%d",max);
    printf("%d",min);
    return 0;
}