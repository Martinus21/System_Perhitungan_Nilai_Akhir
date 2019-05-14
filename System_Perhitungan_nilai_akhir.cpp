#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdio.h>

using namespace std;

int mhs;
float n_tugas, n_UTS, n_UAS, nilai_akhir_mahasiswa;
char grade;

int main(){
	cout << "PROGRAM HITUNG NILAI AKHIR" << endl;
	cout << "MATERI PEMPROGRAMAN C++" << endl << endl;
	
	cout << "Masukan Banyak Data Mahasiswa -> ";
	cin >> mhs;
	
	char jumlah_mahasiswa[mhs][50];
	int nilai_tugas[mhs], nilai_UTS[mhs], nilai_UAS[mhs];
	
	for(int i = 0 ; i < mhs ; i++) {
		cout << endl;
		cout << "Masukan data mahasiswa ke - " << i+1 << " : ";
		cin.ignore();
		gets(jumlah_mahasiswa[i]);

		cout << "Masukan Nilai Tugas : ";
		cin >> nilai_tugas[i];
		
		cout << "Masukan Nilai UTS : ";
		cin >> nilai_UTS[i];
		
		cout << "Masukan Nilai UAS : ";
		cin >> nilai_UAS[i];
		
	}
	system("CLS");
	
	
		
	cout << "===============================================================================" << endl;
	cout << setw(46) << "DAFTAR NILAI" << endl;
	cout << setw(52) << "MATERI PEMPROGRAMAN C++" << endl;
	cout << "-------------------------------------------------------------------------------" << endl << endl;
	
	cout << "No." << setw(20) << "Nama Mahasiswa" << setw(28) << "Nilai" << setw(28) << "Grade" << endl;
	cout << setw(71) << "--------------------------------------------" << endl;
	cout << setw(33) << "Tugas" << setw(12) << "UTS" << setw(12) << "UAS" << setw(13) << "Akhir" << endl << endl;
	cout << "===============================================================================" << endl;

	for (int i=0;i<mhs;i++){
		
		n_tugas 				= nilai_tugas[i]*0.3;
		n_UTS 					= nilai_UTS[i]*0.35;
		n_UAS 					= nilai_UAS[i]*0.35;
		nilai_akhir_mahasiswa 	= n_tugas + n_UTS + n_UAS;
		
		if(nilai_akhir_mahasiswa >= 80){
			grade = 'A';
    	}else if(nilai_akhir_mahasiswa >= 70){
        	grade = 'B';
	    }else if(nilai_akhir_mahasiswa >= 50){
    	    grade = 'C';
	    }else if(nilai_akhir_mahasiswa >= 30){
        	grade = 'D';
    	}else{
    		grade = 'E';
    	}
							
		cout << endl << i+1 << setw(15) << jumlah_mahasiswa[i] << setw(15) << n_tugas << setw(15) << n_UTS << setw(13) 
					 << n_UAS << setw(12) << nilai_akhir_mahasiswa << setw(7) << grade << endl;
	}
	
	cout << "===============================================================================" << endl;

}
