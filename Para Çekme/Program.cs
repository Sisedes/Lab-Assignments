using System;

namespace sadasdas
{
    class Kart
    {
        int kartno;
        int bakiye;
        string adı;

        public Kart(int kartno,int bakiye, string adı)
        {
            this.kartno = kartno;
            this.bakiye = bakiye;
            this.adı = adı;
        }

        public void ParaCek(int x)
        { if(x<=bakiye)
            {
                bakiye = bakiye - x;
                Console.WriteLine("Yeni Bakiye:"+bakiye);
            }
           else
            { 
                Console.WriteLine("Bakiyeniz yetmiyor"   );
                
            }
            
        }
        
        void Yazdır()
        {
            
            Console.WriteLine("Bakiye:" + bakiye);
            Console.WriteLine("KartNo:"+kartno);
            Console.WriteLine("Musteri:"+adı);
            
        }



        static void Main(string[] args)
        {
            Console.WriteLine("Kart Numarasını Giriniz:");
            int kartno = Convert.ToInt16(Console.ReadLine());
            int bakiye = new int();
            Console.WriteLine("Bakiye Giriniz:");
            bakiye = Convert.ToInt16(Console.ReadLine());
            Console.WriteLine("Musteri Adini Giriniz:");
            string adı = Console.ReadLine();
            Kart a1 = new Kart(kartno,bakiye, adı);
            Console.WriteLine("Çekilcek miktar gir");
            int x = new int();
            x=Convert.ToInt16(Console.ReadLine());
            a1.Yazdır();
            a1.ParaCek(x);
            
        }

    }
}
