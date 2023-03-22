#include <iostream>
using namespace std;
//Punteros con asignacion de memoria dinamica;
//new = reservar un espacio, en memoria
//delete [ = Liberar la Memoria
// Recolector de Basura
main(){
	int fil = 0, col=0,**pm_notas;
	cout<<"Ingrese la Canitidad  Estudiantes:";
	cin>>fil;
	cout<<"Ingrese la Cantdad de Notas por estudiantes:";
	cin>>col;
	
	
pm_notas = new int *[fil];
for (int i=0;i<fil;i++){
	pm_notas[i] = new int[col];
	
}
for  (int i=0;i<fil;i++){
	cout<<"____________Estudiante____________"<<i<<endl;

	for (int ii=0;ii<col;ii++){
		cout<<"Nota:"<<ii<<" : ";
		cin>>*(*(pm_notas+i)+ii);
}
cout<<"__________________________________"<<endl;
}
cout<<"------------ Mostrar Notas ------------"<<endl;	
for  (int i=0;i<fil;i++){
	
	for (int ii=0;ii<col;ii++){
		cout<<*(*(pm_notas+i)+ii)<<endl;
}
cout<<"_______________________________________"<<endl;
}
for (int i=0;i<fil;i++){
	delete [] pm_notas [i];
}
delete [] pm_notas;

	system("pause");
}
