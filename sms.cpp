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

class sms : public KirimPesan{
    private:
    string nope;

    public:
    Sms(string nope, string teks):KirimPesan(teks){
        this->nope = nope;
        this->teks = teks;
    }

     int area(){
        cout << "ini class tr" << endl;
        return (alas * heigh) / 2;
    }
};

     void pesan(){
        cout << "pesan Sms"<<endl;
		cout << "Nomor Tujuan\t: "<<nope<<endl;
        cout << "Pesan\t\t: "tesk<<endl;
    }
};
