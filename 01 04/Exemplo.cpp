#include <string>
#include <iostream>

using namespace std;

class pessoa{

private:
	string nome;
	int idade;
	string endereco;
	string profissao;
	
	public:
		//Constructor of class
		pessoa(string nome, int idade, string endereco, string profissao){
			this->nome = nome;
			this->idade = idade;
			this->endereco = endereco;
			this->profissao = profissao;
		}
		
		// Metodo para definir o nome
		void setNome(string novoNome){
			nome = novoNome;
		}
		string getNome(){
			return nome;
		}
		
		//Metodo para obter idade
		void setIdade(int novaIdade){
			idade = novaIdade;
		}
		int getIdade(){
			return idade;
		}
		
		// Metodo para definir o profissão
		void setProfissao(string novoProfissao){
			profissao = novoProfissao;
		}
		string getProfissao(){
			return profissao;
		}
		
			// Metodo para definir o endereço
		void setEndereco(string novoEndereco){
			endereco = novoEndereco;
		}
		string getEndereco(){
			return endereco;
		}
		
		//
		void mostrarInfo(){
			cout << " " << " " << endl;
			cout << "Nome: " << nome << endl;
			cout << "Idade: " << idade << endl;
			cout << "Endereço: " << endereco << endl;
			cout << "Profissão: " << profissao << endl;
		
		}	
};

	int main(){
		
			setlocale(LC_ALL, "portuguese");
		
		//Criando uma instância da classe Pessoa
		pessoa pessoa1("João", 30, "Rua Principal, 123", "Engenheiro");
		
		//Exibir informaçães da pessoa
		pessoa1.mostrarInfo();
		
		//Modificando o Nome, Idade, Endereço e Profissão
		pessoa1.setNome("Maria");
		pessoa1.setIdade(25);
		pessoa1.setEndereco("Avenida Secundária, 456");
		pessoa1.setProfissao("Médica");
		
		//Exibindo as inforações atualizados da pessoa
		pessoa1.mostrarInfo();
		
		
			//Modificando o Nome, Idade, Endereço e Profissão
		pessoa1.setNome("Felipe");
		pessoa1.setIdade(100);
		pessoa1.setEndereco("Céu, 359");
		pessoa1.setProfissao("Dio");
		
		//Exibindo as inforações atualizados da pessoa
		pessoa1.mostrarInfo();
		
		return 0;
	}

