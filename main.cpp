#include <iostream>
using namespace std;

int main() {
    int yuk, hiz, yukseklik;
    double pil;

    cout << "Tasiyacagi Yuk : ";
    cin >> yuk;

    cout << "Hiz : ";
    cin >> hiz;

    cout << "Yukseklik : ";
    cin >> yukseklik;

    pil = 100 - (hiz / 10.0f) * 5;


    if (yuk > 500) {
        cout << "Agir Yuk, Ucamaz!" << endl;
        return 0;
    }

    if (pil < 30) {
        cout << "Pil Seviyesi Duşuk, Ucus guvensiz!" << endl;
        return 0;
    }

    if (yukseklik > 200) {
        cout << "Radar Disi,Ucus Guvensiz!" << endl;
        return 0;
    }

    if (yukseklik < 20) {
        cout << "Yukseklik cok dusuk, guvensiz!" << endl;
        return 0;
    }

    cout << "Guvenli Ucus! " << pil << endl;

    return 0;
}
