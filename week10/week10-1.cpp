#include <stdio.h>
char name[100][30];
int grade[100];
int main()
{
    FILE * fin= fopen("input.txt","r");
    int N;
    fscanf(fin,"%d",&N);
    //printf("�W��N�O: %d\n",N);
    for(int i=0;i<20;i++){
        fscanf(fin,"%s %d",name[i],&grade[i]);
        //printf("Ū��F %s %d\n",name[i],grade[i]);
    }
    for(int i=0;i<20;i++){
        printf("%s %d\n",name[i],grade[i]);
    }
}
