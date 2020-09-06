#include <string.h>
#include <iostream>
#include "../lib/catch.hpp"
#include "../lib/submain.hpp"

using namespace std;

class clsStudent {
	public:
		void funcWrite(int ID, int Grad, char Frame[], char Lname[]){
			m_ID = ID;
			m_Graduation = Grad;
			strcpy(m_First, Frame);
			strcpy(m_Last, Frame);
		}


		void funcDisplay(){
			cout  << "Display func... \n"
			<< endl;
   	}
   private:
   	int m_ID, m_Graduation;
   	char m_First[16], m_Last[16];
};

int main(){

	clsStudent myStudent;
	myStudent.funcWrite(10, 1, "Bob", "Smith");
	myStudent.funcDisplay();

	return 0;
}