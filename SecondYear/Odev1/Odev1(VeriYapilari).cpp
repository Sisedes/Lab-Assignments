// 211307078/Kaan Toraman


#include <iostream>
using namespace std;
#include <set>



    int main()
    {
        // 1- Sıralı verilen iki diziyi birleştiren program kodunu yazınız.
        cout << "1- Sirali verilen iki diziyi birlestiren program kodunu yaziniz" << endl;

        int dizi_1[] = { 1, 3, 4, 5 };
        cout << "Birinci dizi:" << endl;
        int boyut1 = sizeof(dizi_1) / sizeof(*dizi_1);

        for (size_t i = 0;i < boyut1;i++)
        {

            cout << dizi_1[i] << " ";
        }
        cout << endl;

        int dizi_2[] = { 2, 4, 6, 8 };
        int boyut2 = sizeof(dizi_2) / sizeof(*dizi_2);
        cout << "Ikinci dizi:" << endl;
        for (size_t i = 0;i < boyut2;i++)
        {

            cout << dizi_2[i] << " ";
        }
        cout << endl;

        int diziBirlesim[8];
        cout << "Dizilerin birlesimi:" << endl;
        copy(dizi_1, dizi_1 + boyut1, diziBirlesim);
        copy(dizi_2, dizi_2 + boyut2, diziBirlesim + boyut1);
        for (int& i : diziBirlesim)
        {
            cout << i << " ";
        }
        cout << endl;


        // 2- Sıralanmış bir diziden yinelenmiş olan sayıları kaldıran program kodunu yazınız.
        cout << endl;
        cout << "2- Siralanmis bir diziden yinelenmis olan sayilari kaldiran program kodunu yaziniz." << endl;

        cout << "Ayni degerleri temizlenecek dizi:" << endl;
        int diziA[] = { 0,0,1,1,1,2,2,3,3,4 };
        cout << "diziA: ";
        for (int& i : diziA)
        {
            cout << i << " ";
        }
        cout << endl;

        int boyutA = sizeof(diziA) / sizeof(*diziA);
        set<int>s;
        for (int i = 0; i < boyutA; i++)
        {
            s.insert(diziA[i]);

        }
        cout << "Dizinin son hali :";
        for (auto it = s.begin(); it != s.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
        cout << endl;



        // 3-  Klavyeden -1 giriline kadar, girilen sayıların ortalamalarını gösteren programı yazınız.
        cout << "3- Klavyeden -1 giriline kadar, girilen sayilarin ortalamalarini gosteren programi yaziniz." << endl;
        cout << endl;


        int i = 0;
        int toplam = 0;
        int sayac = 0;
        cout << "Ortlama hesaplamak icin sayi giriniz. Bu islem -1 girilene kadar devam edecektir:" << endl;
        while (i >= 0)
        {
            cin >> i;
            if (i >= 0)
            {
                sayac++;
                toplam += i;
            }

        }
        if (sayac >> 0)
        {
            cout << (toplam / sayac) << endl;
        }

        cout << endl;


        // 4-Fonksiyon kullanarak Vize ve Final notu girilen öğrencinin ortalamasını hesaplayınız.

        cout << "Ortalamanin hesaplanmasi icin vize ve final notlarini giriniz:" << endl;
        cout << "Vize :";
        double vize;
        cin >> vize;
        cout << "Final :";
        double fin;
        cin >> fin;
        double sonuc;
        sonuc=nothesaplama(vize, fin);
    }

    double nothesaplama(double vize, double fin)
    {
        return vize * 0.4 + fin * 0.6;
       
    }

    
    




