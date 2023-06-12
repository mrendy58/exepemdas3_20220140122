#include <iostream>
using namespace std;

class bidangDatar {
private:
    int x; //variabel untuk menyimpan input dari lingkaran maupun bujur sangkar
public:
    bidangDatar() { // constructor
        x = 0;
    }
    virtual void input(){} // fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
    virtual float Luas(int a) { return 0; } // fungsi untuk menghitung Luas
    virtual float keliling(int a) { return 0; } // fungsi untuk menghitung keliling
    void setX(int a) { // fungsi untuk memberi/mengirim nilai pada x
        this->x = a;
    }
    int getX() { // fungsi untuk membaca /mengambil nilai dalam x
        return x;
    }
};

class Lingkaran :public bidangDatar {
public:
    void input() {
        cout << "Lingkaran dibuat" << endl;
        cout << "Masukan Jejari :";
        int r;
        cin >> r;
        setX(r);
    }
    float Luas(int r) {
        return 3.14 * r * r;
    }
    float Keliling(int r) {
        return 2 * 3.14 * r;
    }
};

class Bujursangkar :public bidangDatar {
public:
    void input() {
        cout << "Bujursangkar dibuat" << endl;
        cout << "Masukan sisi :";
        int s;
        cin >> s;
        setX(s);
    }
    float Luas(int s) {
        return s * s;
    }
    float Keliling(int s) {
        return 4 * s;
    }
};

int main(){
    bidangDatar* objek;

    objek = new Lingkaran();
    cout << "Pertama di run" << endl;
    objek->input();
    int r = objek->getX();
    cout << "Luas Lingkaran =" << objek->Luas(r) << endl;
    cout << "Keliling Lingkaran =" << objek->keliling(r) << endl;

    objek = new Bujursangkar();
    cout << "Bujursangkar dibuat" << endl;
    objek->input();
    int s = objek->getX();
    cout << "Luas Bujursangkar = " << objek->Luas(s) << endl;
    cout << "Keliling Bujursangkar = " << objek->Keliling(s) << endl;

    
}

