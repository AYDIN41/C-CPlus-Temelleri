#include <iostream>
#include <stdio.h>
#include<stdlib.h>
using namespace std;
int *dizi = NULL;
int sira = 0,sirabasi = 0,boyut = 2;
int deque(){
    if(sira==sirabasi){
        cout<< "Sira bos"<<endl;
        return -1;
    }
    if(sira-sirabasi<boyut/4){
        int *dizi2 = (int*)malloc(sizeof(int)*boyut/2);
        for(int i = 0;i<sira-sirabasi;i++){
            dizi[i]= dizi[sirabasi+i];
        }
        sira -=sirabasi;
        sirabasi = 0;
        free(dizi);
        boyut /=2;
        dizi = dizi2;
    }
    return  dizi[sirabasi++];
}
void toparla(){
    if(sirabasi==0){
        return ;
    }
    for(int i = 0;i<boyut;i++){
        dizi[i] = dizi[i+sirabasi];
    }
    sira -=sirabasi;
    sirabasi=0;
}

void enque(int a){
    if(dizi==NULL){
        dizi = (int*)malloc(sizeof(int)*boyut);
    }
    if(sira >= boyut){
        boyut *= 2;
        int *dizi2 = (int*)malloc(sizeof(int)*boyut);
        for(int i = 0;i<boyut/2;i++){
            dizi2[i] = dizi[i];
        }
        free(dizi);
        dizi = dizi2;
    }
    dizi[sira++] = a;

}
int main()
{
    for(int i = 0;i<=20;i++){

        enque(i*2);
    }
    for(int i = 0;i<10;i++){
        cout << deque() << "    "<<endl;
    }




    return 0;
}
