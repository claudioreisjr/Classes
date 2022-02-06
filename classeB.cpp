#include <iostream>
using namespace std;
//trabalho git engenharia de software
//Claudio M dos Reis Junior
//Classe B

class B{
	private:
	int x;
	float y;
	
	public:
	int B1;
	float B2;
	//int A1;
	//float A2;
	
	
    void setB1(int B1){
      x = B1;
    }
    void setB2(float B2){
	  y = B2;
	}      
    int getB1(){
      return B1;
   }
   float getB2(){
	  return B2;
   }
};

	
//metodos classe A
void MB1(){
	cout << "Metodo MB1" << endl;
}

void MB2(){
	cout << "Metodo MB2" << endl;
}

void MB3(){
	cout << "Metodo MB3" << endl;
}

int main(){
	B eng;
	cin >> eng.B1 >> eng.B2;//leitura entradas class
	
	//eng.setA1(12);
	//eng.setA2(1.2);
	
      
    cout << eng.getB1() << endl;
    cout << eng.getB2() << endl;
	
	MB1();
	MB2();

	return 0;
}
