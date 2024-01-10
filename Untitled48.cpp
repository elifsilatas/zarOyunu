#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	cout << "Lutfen kac zar atilacagini yaziniz.." << endl;
	int n;
	cin >> n;//kullanıcıdan kaç zar atılacağını girmesini istiyoruz.
	
	srand(time(NULL));
	int skor = 0;
	int a[n];
	int b[n];//zar değerlerinin tutulması için.
	for(int i=0; i<n; i++){
		int z1 = rand()%6+1;//birinci kullanıcının zarları
		int z2 = rand()%6+1;//ikinci kullanıcının zarları
		
		a[i] = z1;//her atanan değeri hafızada tutabilmek için.
		b[i] = z2;
		
		//skorun arttırılmas ve azaltılması için
		if(z1>z2){
			skor++;
		}
		else if(z2>z1){
			skor--;
		}
	}
	//atılan her zar değerinin ekranda bastırılması için
	for(int i=0; i<n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	
	for(int i=0; i<n; i++){
		cout << b[i] << " ";
	}
	cout << endl;
	
	//skorun belirlenebilmesi için.
	if(skor>0){
		cout << "Birinci kullanici kazanmistir.." << endl;
	}
	else if(skor<0){
		cout << "Ikinci kullanici kazanmistir.." << endl;
	}
	else{
		cout << "Oyun beraberedir.." << endl;
	}
}