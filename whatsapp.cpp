#include <iostream>
using namespace std;

class KirimPesan{
    protected:
    string teks;

    public:
    KirimPesan
        this->teks = teks;
    }

    virtual int area() = 0; 

};

class Whatsapp : public KirimPesan{
    private:
    string nope;

    public:
    Whatsapp(string nope, string teks):KirimPesan(teks){
        this->nope = nope;
        this->teks = teks;
    }

     int area(){
        cout << "ini class tr" << endl;
        return (alas * heigh) / 2;
    }
};

     void pesan(){
        cout << "pesan Whatsapp"<<endl;
		cout << "Kontak Tujuan\t: "<<nope<<endl;
        cout << "Pesan\t\t: "tesk<<endl;
    }
};
