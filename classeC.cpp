#include <iostream>
#include <string>
using namespace std;
//trabalho git engenharia de software
//Claudio M dos Reis Junior
//Classe C

class C{
	private:
	string x;
	int y;
	
	public:
	string C1;
	int C2;
	
    void setC1(string C1){
      x = C1;
    }
    void setC2(int C2){
	  y = C2;
	}      
    string getC1(){
      return C1;
   }
   int getC2(){
	  return C2;
   }
};

	
//metodos classe C
void MC1(){
	cout << "Metodo MC1" << endl;
}

void MC2(){
	cout << "Metodo MC2" << endl;
}

void MC3(){
	cout << "Metodo MC3" << endl;
}

int main(){
	C eng;
	cin >> eng.C1 >> eng.C2;//leitura entradas class
	
	//eng.setA1(12);
	//eng.setA2(1.2);
	
      
    cout << eng.getC1() << endl;
    cout << eng.getC2() << endl;
	
	MC1();
	MC2();

	return 0;
}
