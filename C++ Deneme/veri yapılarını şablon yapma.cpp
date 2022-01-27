#include <iostream>
#include <stdio.h>
using namespace std;
typedef struct veri{
    int k,v;
}v;
v a[27];
int h(int x){
    return (8*x+5)%27;
}
// hash tablosuna veri koyma
int put(v veri){
    if(a[h(veri.k)].k == NULL){
        a[h(veri.k)] = veri;
        return 1;
    }else{
        int donusSayisi = 0;
        int index = h(veri.k);
        while(a[index].k != NULL && a[index].k != NULL){
            index++;
            if(index>= 27){
                if(donusSayisi>=1){
                    cout << "Hash Table is full"<<endl;
                    return -1;
                }
                index = index % 27;
                donusSayisi++;

            }
        }
        a[index].v = veri.v;
        a[index].k = veri.k;
    }
}
int print(){
    for(int i = 0;i<27;i++){
        cout<< "Anahtar Deger: "<< a[i].k << " Istenilen Deger: " << a[i].v << endl;

    }
}
int get(int k){
    if(a[h(k)].k == k){
        return a[h(k)].v;
    }else{
        int donusSayisi = 0;
        int index = h(k);
        while(a[index].k != NULL && a[index].k != k){
            index++;
            if(index>= 27){
                if(donusSayisi>=1){
                    cout << "Hash Table does not contain your searching number"<<endl;
                    return -1;
                }
                index = index % 27;
                donusSayisi++;

            }
        }
        return a[k].v;
    }
}
int main()
{
    v veri;
    for(int i = 0;i<27;i++){
        a[i].k = NULL;
    }
    for(int i = 0;i<25;i++){
        int stabilityValue = 13;
        veri.k=stabilityValue;
        veri.v = 33;
        put(veri);
    }
    print();
    return 0;
}
