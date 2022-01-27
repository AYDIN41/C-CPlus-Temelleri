#include <iostream>

using namespace std;
class Node{
public:
    int data;
    Node* next;
};
printList(Node* r){
    while(r != NULL){
        cout<< r->data <<endl;
        r = r->next;
    }
}


int main()
{
    Node* root;
    root = (Node*)malloc(sizeof(Node));
    root -> data = 1;
    root -> next = (Node*)malloc(sizeof(Node));
    root -> next -> data = 2;
    root ->next ->next = (Node*)malloc(sizeof(Node));
    root -> next -> next -> data = 22;
    root ->next ->next ->next = NULL;
    //Node* iter;
    //iter = root;
    int i = 0;



    while(root->next != NULL){
        i++;
        cout<< i<<". eleman: "<< root->data<<endl;
        root = root->next;
    }
    for(i=0;i<5;i++){
        root->next = (Node*)malloc(sizeof(Node));
        root = root->next;
        root ->data=i*10;
        root->next = NULL;
        printList(root);
    }








    /*
    int numara;
    cout <<"Lutfen ogrenci sayinizi giriniz."<<endl;
    cin>>numara;
    int ogrenciSayi[numara];
    int ogrenciNo[numara];
    string ogrenciIsim[numara],ogrenciSoyisim[numara];
    double arasinavnotu[numara],finalnotu[numara],dersOrtalama[numara];
    string harfNotu[numara];


    for(int i=0;i<=numara;i++){


    ogrenciSayi[i] = i+1;
    cout<<"Ogrenci numarasini giriniz."<<endl;
    cin>>ogrenciNo[i];

    cout<<"Ogrenci ismini ve soy ismini giriniz:"<<endl;
    cin>>ogrenciIsim[i]>>ogrenciSoyisim[i];

    cout<<"Ara sinav ve final notlarini giriniz."<<endl;
    cin>>arasinavnotu[i]>>finalnotu[i];

    dersOrtalama[i]=(arasinavnotu[i]*40/100)+(finalnotu[i]*60/100);
    cout<<dersOrtalama[i]<<endl;


        if(dersOrtalama[i]>=90 && dersOrtalama[i]<=100){

            harfNotu[i]="AA";
        }
        else if(dersOrtalama[i]>=85 && dersOrtalama[i]<=89){

            harfNotu[i]="BA";
        }
        else if(dersOrtalama[i]>=80 && dersOrtalama[i]<=84){

            harfNotu[i]="BB";
        }
        else if(dersOrtalama[i]>=75 && dersOrtalama[i]<=79){
            harfNotu[i]="CB";
        }
        else if(dersOrtalama[i]>=70 && dersOrtalama[i]<=74){
            harfNotu[i]="CC";
        }
        else if(dersOrtalama[i]>=60 && dersOrtalama[i]<=69){
            harfNotu[i]="CC";
        }
        else if(dersOrtalama[i]>=60 && dersOrtalama[i]<=69){
            harfNotu[i]="DC";
        }
        else if(dersOrtalama[i]>=50 && dersOrtalama[i]<=59){
            harfNotu[i]="DD";
        }
        else if(dersOrtalama[i]>=40 && dersOrtalama[i]<=50){
            harfNotu[i]="FD";
        }
         else if(dersOrtalama[i]>=0 && dersOrtalama[i]<=39){
            harfNotu[i]="FF";
        }
         cout<<"Ogrenci sira"<<"   "<<ogrenciSayi[i]<<" Ogrenci numarasi"<<"   "<<ogrenciNo[i]<<" Ogrenci Ad Soyad"<<"   "<<ogrenciIsim[i]<<" "<<ogrenciSoyisim[i]<<" Ara sinav notu"<<arasinavnotu[i]<<"   "<<" Final notu"<<finalnotu[i]<<"   "<<" Harf notu "<<harfNotu[i]<<endl;
    }
    */

    return 0;
}
