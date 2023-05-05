#include <iostream>
#include <string>
using namespace std;

class TPen {
private:
	string FColor = "TBlack";
public:
	TPen() {}
	string GetColor() {
		return FColor;
	} 
	void SetColor(string color) {
		FColor = color;
	}
};

int main()
{
	TPen pencil;
	cout << pencil.GetColor() << endl;
	pencil.SetColor("TRed");
	cout << pencil.GetColor() << endl;
	return 0;
}
