#include<iostream>
#include<string>
using namespace std;

class Vehiculo {
	public:
		Vehiculo(string numeroPlaca, string color, string marca);
};
class Automovil : public Vehiculo {
	public:
		Automovil(string numeroPlaca, string color, string marca);
};

Automovil::Automovil(string numeroPlaca, string color, string marca)
	: Vehiculo(numeroPlaca, color, marca){
		
}
class Vehiculo {
	protected:
		string numeroPlaca;
		string color;
		string marca;
	public:
		Vehiculo(string, string, string);
		void mostrarDatos();
};
Vehiculo::Vehiculo(string n, string c, string m){
	numeroPlaca = n;
	color = c;
	marca = m;
}
void Vehiculo::mostrarDatos(){
	cout << " tiene el numero de placa " << numeroPlaca << " es de color " << color << " y de la marca " << marca << endl;
}
class Automovil : public Vehiculo {
	private:
		int cantPuertas;
		int cantPasajeros;
	public:
		Automovil(string, string, string, int, int);
		void mostrarAutomovil();
		// void subirPasajeros();
		// void bajarPasajeros();
};
Automovil::Automovil(string n, string c, string m, int cp, int cpa)
	: Vehiculo(n, c, m){
	cantPuertas = cp;
	cantPasajeros = cpa;	
}

void Automovil::mostrarAutomovil() {
	mostrarDatos();
	cout<< " la cantidad de puertas es: " << cantPuertas << " y la cantidad de pasajeros son: " << cantPasajeros << endl;
}
class Camion : public Vehiculo {
	private:
		int carga;
	public:
		Camion(string string, string, int);
		void mostrarCamion();
		// void cambiarCarga();
};
Camion::Camion(string n, string c, string m, int ca){
	carga = ca;
}
void Camion::mostrarCamion() {
	mostrarCamion();
	cout << " el camion posee una carga de " << carga;
}

int main(){
	string numeroPlaca;
}