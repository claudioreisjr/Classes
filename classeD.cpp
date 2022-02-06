#include <iostream>
using namespace std;
//trabalho git engenharia de software
//Claudio M dos Reis Junior
//Classe D

class D{
	private:
	int x;
	float y;
	
	public:
	int D1;
	float D2;
	
    void setD1(int D1){
      x = D1;
    }
    void setD2(float D2){
	  y = D2;
	}      
    int getD1(){
      return D1;
   }
   float getD2(){
	  return D2;
   }
};

	
//metodos classe D
void MD1(){
	cout << "Metodo MD1" << endl;
}

void MD2(){
	cout << "Metodo MD2" << endl;
}
//novo metodo item 17 lista exercicios
void MD3(){
	cout << "Metodo MD3" << endl;
}



int main(){
	D eng;
	cin >> eng.D1 >> eng.D2;//leitura entradas class
	
      
    cout << eng.getD1() << endl;
    cout << eng.getD2() << endl;
	
	MD1();
	MD2();

	return 0;
}
