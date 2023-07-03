#include <iostream>
using namespace std;

class Matakuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;

public:
	Matakuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;
	}

	virtual float hitungNilaiAkhir() { return 0; }
	virtual void cekKelulusan() { return 0; }
	virtual void input() { return 0; }

	void setPresensi(float nilai) {
		this->presensi = nilai;
	}

	float getPresensi() {
		return presensi;
	}

	void setActivity(float nilai) {
		this->activity = nilai;
	}

	float getActivity() {
		return activity;
	}

	void setExercise(float nilai) {
		this->exercise;
	}

	float getExercise() {
		return exercise;
	}

	void setTugasAkhir(float nilai) {
		this->tugasAkhir = nilai;
	}

	float getTugasAkhir() {
		return tugasAkhir;
	}

	string Y, N;

	void setXY(string a, string b) {
		Y = a;
		N = b;
	}

	void input() {
		if nilai > 75
	}


	void display() {
		cout << "Y =" <<  Y << endl;
		cout << "N =" <<  N << endl;
	}

	void cekKelulusan() {

	}
};

class pemrograman : public Matakuliah {
public: cekKelulusan() {
	return 0;
	}
};

int main() {
	Matakuliah a;
	a.setXY("lulus", "Tidak Lulus");
	a.display();

	return 0;

}