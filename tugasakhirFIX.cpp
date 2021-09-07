#include <iostream>
#include <cmath>
using namespace std;
float theta, r,r2, theta2,sudut, x,y,x2,y2;
void konversiBin(int desimal);
void konversiBin(int desimal)
{ 
     int sisa;
     int hasil;
     
     if ( desimal <=1)
     {
        cout<<desimal;
        return;
     }
     sisa = desimal %2;
     hasil = desimal / 2;
     konversiBin(hasil);
     cout<<sisa;
}
void konversiDes(int bin);
void konversiDes(int bin)
{
   int sisa2,hasil2;
   hasil2=0;
   int pangkat=0;
   while(bin>=1)
   {
               sisa2=bin%2;
      hasil2+=sisa2*pow(2,pangkat);
      bin=bin/10;
      pangkat++;
   }
   cout<<hasil2<<endl;
}

int main(){
	system("cls");
	
	char yn;
	
	login:
	string user = "";
	string pass = "";
	cout<<"\n\n\n";
	cout<<"------- Program MyCalculator --------\n";
	cout<<"--------- By Kelompok 1 GK1 ---------\n\n";
	cout << "    Username : "; cin>>user;
	cout << "    Password : "; cin>>pass;
	if(user == "pemrograman" && pass == "kelasnyapakoktaf"){
		cout << "\n\n Anda berhasil login. \n" << endl;
		system("pause");
		system("cls");
		goto mulaimenu;
	}else{
		cout<<"\n\nPassword Anda Salah \n\n";
   	    system("pause");
   	    system("cls");
	 	goto login;
	}

	
	mulaimenu:
	int pil;
	cout<<"\n\n\n"; 
	cout<<"---- MyCalculator ----"<<endl;
    cout<<"-------- Menu --------\n\n";
    cout<<" 1. Konversi Polar ke Rectangular\n";
    cout<<" 2. Konversi Rectangular ke Polar\n";
    cout<<" 3. Konversi Desimal ke Biner\n";
    cout<<" 4. Konversi Biner ke Desimal\n";
    cout<<" 5. Mencari Akar dari Persamaan Kuadrat\n";
    cout<<" 6. Exit                \n\n";
    cout<<"Masukan Pilihan anda (1 - 6 ) = ";
	cin>>pil; 
    
	if(pil ==1){  
		polar:
		system("cls");
		cout<<"\t\t\tKonversi Polar ke Rectangular"<<endl;
		cout<<"\t\t\t______________________________\n"<<endl;
		cout<<"Masukkan koordinat polar (radius,sudut(dalam radian))"<<endl<<endl;
		cout<<"Masukkan nilai radius : ";
		cin>>r;
		cout<<"Masukkan nilai sudut (dalam radian) : "; cin>>theta;
		cout<<endl;
		x = r*(cos(theta));
		y = r*(sin(theta));
		if(y<0){
		cout <<"Jadi rectangularnya adalah : "<<x<<""<<y<<"j"<<endl;
		}
		else{
		cout<<"Jadi rectangularnya adalah : "<<x<<"+"<<y<<"j"<<endl;
		}
		cout<<"Koordinat x = "<<x<<endl;
		cout<<"Koordinat y = "<<y<<endl<<endl;
		cout<<"Apakah Anda Ingin Menghitung Lagi ? (y/n) :";
		cin>>yn;
		if(yn=='y'||yn=='Y'){
			goto polar;
		}else{cout<<endl;
			system("pause");
			system("cls");
			goto mulaimenu;
		}	
	}
	else if( pil == 2 ){ 
		rect:
		system("cls");
		cout<<"\t\t\tKonversi Polar ke Rectangular"<<endl;
		cout<<"\t\t\t______________________________\n"<<endl;
		cout<<"Masukkan koordinat x : ";
		cin>>x;
		cout<<"Masukkan koordinat y : ";
		cin>>y;
		cout<<endl;
		r2 = sqrt(x*x+y*y);
		cout<<"Nilai Radius = "<<r2<<endl;
		theta2 = atan(y/x);
	 	sudut = theta2*(180/M_PI);
	 	cout<<"Nilai Sudut = "<<sudut<<endl;
	 	cout<<endl<<"Apakah Anda Ingin Menghitung Lagi ? (y/n) :";cin>>yn;
		if(yn=='y'||yn=='Y'){
			goto rect;
		}else{cout<<endl;
			system("pause");
			system("cls");
			goto mulaimenu;
		}
	}
		else if( pil == 3 ){ 
		biner:
		system("cls");
		cout<<"\t\t\tKonversi Desimal ke Biner"<<endl;
		cout<<"\t\t\t______________________________\n"<<endl;
		int a;
	    cout << "Masukkan Bilangan Desimal = ";
	    cin>>a;
	    cout<<endl;
	    cout <<"Desimal " << a << " dalam biner = " ; 
	    konversiBin(a);
	    cout<<endl;
		cout<<endl<<"Apakah Anda Ingin Menghitung Lagi ? (y/n) :";cin>>yn;
		if(yn=='y'||yn=='Y'){
			goto biner;
		}else{cout<<endl;
			system("pause");
			system("cls");
			goto mulaimenu;
		}
	}
	
		else if( pil == 4 ){ 
		desi:
		system("cls");
		cout<<"\t\t\tKonversi Biner ke Desimal"<<endl;
		cout<<"\t\t\t__________________________\n"<<endl;
		int bin,des;
		int pil;
		cout<<"Masukkan Bilangan Biner = ";
		cin>>bin;
		cout<<"Biner "<<bin<< " dalam Desimal = ";
		konversiDes(bin);
	    cout<<endl;
		cout<<endl<<"Apakah Anda Ingin Menghitung Lagi ? (y/n) :";cin>>yn;
		if(yn=='y'||yn=='Y'){
			goto desi;
		}else{cout<<endl;
			system("pause");
			system("cls");
			goto mulaimenu;
		}
	}	
		else if( pil == 5 ){ 
		akar:
		system("cls");
		cout<<"\t\t\tKonversi Biner ke Desimal"<<endl;
		cout<<"\t\t\t__________________________\n"<<endl;
		int a2, b, c, D;
		float x1, x2;
		cout<<"Bentuk persamaan ax^2 + bx + c = 0\n\n";
		cout<<"Masukan nilai a : ";
		cin>>a2;
		cout<<"Masukan nilai b : ";
		cin>>b;
		cout<<"Masukan nilai c : ";
		cin>>c;
		
		D=(b*b)-(4*a2*c);
		
		if (D>0){
			x1 = (-b + sqrt(D)) / (2*a2);
	      	x2 = (-b - sqrt(D)) / (2*a2);	
		}else if (D==0){
			x1 = (-b + sqrt(D)) / (2*a2);
	      	x2 = x1;
		}else {
	      	cout<<"\nAkar Imajiner"<<endl;
	      	goto lagi;
		}
		cout<<"\nAkar persamaan kuadrat diatas adalah \n";
		cout<<"X1 = "<<x1<<endl;
		cout<<"X2 = "<<x2<<endl;
	    cout<<endl;
	    lagi:
		cout<<endl<<"Apakah Anda Ingin Menghitung Lagi ? (y/n) :";cin>>yn;
		if(yn=='y'||yn=='Y'){
			goto akar;
		}else{cout<<endl;
			system("pause");
			system("cls");
			goto mulaimenu;
		}
	}
	else if(pil == 6){ //keluar
		system("cls");
		cout<<"\n\n\n-- Anda Telah Logout -- \n\n\n";
		system("pause");
		system("cls");
		goto login;
	}
	else{ //jika inputan semua salah 
		system("cls");
		cout<<"\n\n\n\n\n";
		cout<<" !!! Inputan anda salah !!!"<<"\n\n\n";
		system("pause");
		system("cls");
		goto mulaimenu;
	}	
	
	return 0;
}
