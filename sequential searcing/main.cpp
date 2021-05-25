#include <iostream>
#include <conio.h>

using namespace std;

main()
{
    int Arr[50];
    int N, key;
    int indeks=-1;
    
	cout<<"Masukan Banyak Array : ";
    cin>>N;
    
    for(int i=0;i<N;i++)
    {
        cout<<"Masukan Data ["<<i+1<<"] : ";
        cin>>Arr[i];
    }
    cout<<endl;
   
    cout<<"Masukan Angka yang Ingin Dicari : ";
    cin>>key;
    cout<<endl;

    for(int j=0;j<N;j++){
    	if(Arr[j] == key)
    	indeks=j;
    }
    
    if(indeks != -1){
    	cout<<"Angka Ditemukan Pada Indeks Ke-"<<indeks+1;
    	cout<<endl;
    }else
    	cout<<"Angka Tidak Ditemukan ";
    getch();
}
