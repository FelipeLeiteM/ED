#include <string>
#include <iostream>

using namespace std;

class carro{

private:
	string cor;
	int placa;
	string tipo;
	string marca;
	
	public:
		//Constructor of class
		carro(string cor, int placa, string tipo, string marca){
			this->cor = cor;
			this->placa = placa;
			this->tipo = tipo;
			this->marca = marca;
		}
		
		// Metodo para definir o nome
		void setCor(string novoCor){
			cor = novoCor;
		}
		string getCor(){
			return cor;
		}
		
		//Metodo para obter idade
		void setPlaca(int novaPlaca){
			placa = novaPlaca;
		}
		int getPlaca(){
			return placa;
		}
		
		// Metodo para definir o profissão
		void setTipo(string novoTipo){
			tipo = novoTipo;
		}
		string getTipo(){
			return tipo;
		}
		
			// Metodo para definir o endereço
		void setMarca(string novoMarca){
			marca = novoMarca;
		}
		string getEndereco(){
			return marca;
		}
		
		//
		void mostrarInfo(){
			cout << " " << " " << endl;
			cout << "Cor: " << cor << endl;
			cout << "Placa: " << placa << endl;
			cout << "Tipo: " << tipo << endl;
			cout << "Marca: " << marca << endl;
		
		}	
};

	int main(){
		
			setlocale(LC_ALL, "portuguese");
		
		//Criando uma instância da classe Pessoa
		carro carro1("Cinza", 135796, "Elétrico", "Honda");
		
		//Exibir informaçães da pessoa
		carro1.mostrarInfo();
		
		//Modificando o Nome, Idade, Endereço e Profissão
		carro1.setCor("Vermelho");
		carro1.setPlaca(957624);
		carro1.setTipo("Flex");
		carro1.setMarca("Honda");
		
		return 0;
	}

