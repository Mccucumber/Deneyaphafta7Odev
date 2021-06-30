#include <iostream>

using namespace std;

int isAsal(int sayi){
    if(sayi<2){
        cout<<"En kucuk asal sayi 2'dir, lutfen baska sayi giriniz."<<endl;
    }
    else{
       for(int i=2;i<sayi;i++){
            if(sayi%i==0){
                return 0;
            }
            else{
                return 1;
            }
       }
    }


}


/*
int main(){
    int sayi;
    cout<<"Sayiyi Giriniz:";
    cin>>sayi;

    if(isAsal(sayi)==1){
    cout<<"Sayiniz ASAL"<<endl;
    }

    if(isAsal(sayi)==0){
    cout<<"Sayiniz Asal Degil"<<endl;
    }
}
*/
