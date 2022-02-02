#include <iostream>
using namespace std;
//trabalho git engenharia de software
//Claudio M dos Reis Junior
//Classe A

class A{
	private:
	int x;
	float y;
	
	public:
	int A1;
	float A2;
	//int A1;
	//float A2;
	
	
    void setA1(int A1){
      x = A1;
    }
    void setA2(float A2){
	  y = A2;
	}      
    int getA1(){
      return A1;
   }
   float getA2(){
	  return A2;
   }
};

	
//metodos classe A
void MA1(){
	cout << "Metodo MA1" << endl;
}

void MA2(){
	cout << "Metodo MA2" << endl;
}

int main(){
	A eng;
	cin >> eng.A1 >> eng.A2;//leitura entradas class
	
	//eng.setA1(12);
	//eng.setA2(1.2);
	
      
    cout << eng.getA1() << endl;
    cout << eng.getA2() << endl;
	
	MA1();
	MA2();

	return 0;
}
