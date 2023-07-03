#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x, y;
public:
	bidangDatar() {
		x = 0;
		y = 0;
	}
	virtual void input() {}
	virtual float Luas(int a) { return 0; }
	virtual float Keliling(int a) { return 0; }
	virtual void cekUkuran() { return; }
	void setX(int a) {
		this->x = a;
	}
	void setY(int b) {
		this->x = b;            
	}
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
	/*lengkapi disini*/
};
class Lingkaran :public bidangDatar {
private:
	float r;
public:
	void input() {
		cout << "Lingkaran dibuat: " << endl;
		cout << "Masukkan jejari: ";
		int x;
		cin >> x;
		setX(x);
	}

	float luas(int x) {
		return 3.14 * x * x;
	}

	float keliling(int x) {
		return 2 * 3.14 * x;
	}
	void ceUkuran() {

	}
};

class Persegipanjang :public bidangDatar { /*lengkapi disini*/ 
public:
	void input() {
		int x, y;
		cout << "persei panjang dibuat:";
		cout << "Masukkan Panjang: ";
		cin >> x;
		cout << "Masukkan lebar: ";
		cin >> y;
		setX(x);
		setY(y);
	}

	float luas(int x,int y) {
		return 	x * y;
	}

	float keliling(int x, int y) {
		return 2 * (x + y);
	}
	void ceUkuran() {

	}
};

int main() { /*lengkapi disini*/	bidangDatar* obj;	Lingkaran lingkaran;	Persegipanjang persegipanjang;	obj = &lingkaran;	obj->input();	int x = obj->getX();	cout << "Luas lingkaran= " << lingkaran.luas(x) << endl;	cout << "keliling lingkaran= " << lingkaran.keliling(x) << endl;	obj = &persegipanjang;	obj->input();	int x = obj->getX();	int y = obj->getY();	cout << "luas persegipanjang= " << persegipanjang.luas(x,y) << endl;	cout << "keliling persegipanjang= " << persegipanjang.keliling(x,y) << endl;	return 0;}