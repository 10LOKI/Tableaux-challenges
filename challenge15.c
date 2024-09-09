//challenge13
#include <stdio.h>

int main(){
    
    
    int taille1, i;
    printf("veuillez entre la taille du tab1: ");
    scanf("%d",&taille1);
    int tab1[taille1];
    for(i=0;i<taille1;i++){
        printf("tab1[%d]= ",i+1);
        scanf("%d",&tab1[i]);
    }
    int taille2;
    printf("veuillez entrer la taille du tab2: ");
    scanf("%d", &taille2);
    
    int tab2[taille2];
    for(i=0;i<taille2;i++){
        printf("tab2[%d]=",i+1);
        scanf("%d",&tab2[i]);
    }
    
    int taille3= taille1 +taille2;
    int tab3[taille3];
    for(i=0;i<taille1;i++){
        tab3[i]=tab1[i];
    }
    for(i=0;i<taille2;i++){
        tab3[taille1+i]=tab2[i];
    }
    for(i=0;i<taille3;i++){
        printf("tab3[%d]= %d\n",i+1,tab3[i]);
    }
    
    
    return 0;
}
    
