#include <iostream>

using namespace std;

int bk(float dizi[2]){
        int enbuyuk=dizi[0];
        int enkucuk=dizi[1];
        for(int i=0;i<2;i++){
            if(enbuyuk<dizi[i]){
               enbuyuk=dizi[i];
            }
        }
        for(int i=1;i>=0;i--){
            if(enkucuk>dizi[i]){
                enkucuk=dizi[i];
            }
        }
        return enbuyuk%enkucuk;

}

/*int main()
{   float sayilar[2];
    for(int i=0;i<2;i++){
        cin>>sayilar[i];
    }
    cout<<bk(sayilar)<<endl;
return 0;
}
*/
