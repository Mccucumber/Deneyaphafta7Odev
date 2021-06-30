#include <iostream>

using namespace std;
int ogrencisayisi =0;

int nottoplam2(int osayi,int notlar[]){
  int sayac;
    for(int i=0;i<osayi;i++){
        if(notlar[i]<=0){
            sayac+1;
          }
    return sayac;
}
}

int nottoplam(int osayi,int notlar[]){
  int toplam;
  int sayac=0;
    for(int i=0;i<osayi;i++){

        if(notlar[i]<=0){
            toplam+=0;
            sayac+1;
        }
        else{
        toplam+=notlar[i];
        }
    }
    return toplam;
}



/*int main(){
    cout<<"Ogrenci Sayisini Giriniz:";
    cin>>ogrencisayisi;
    int puanlar[ogrencisayisi];
    for(int i=0;i<ogrencisayisi;i++){
        cout<<i+1<<". Ogrenci Notu:";
        cin>>puanlar[i];
        cout<<"\n";
    }
    cout<<"Notlarin Toplami:"<<nottoplam(ogrencisayisi,puanlar)<<endl;
    cout<<"0 Alan Ogrenciler:"<<nottoplam2(ogrencisayisi,puanlar);
    return 0;


}
*/
