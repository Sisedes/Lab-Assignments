using System;

namespace uy_nasi
{
    class Hesap
    {
        public double r;
        public Hesap()
        { }
        public double rr
        { get { return r; } set { r = value; } }

        public void Cevre(double x)
        {


            double cevre = 2 * x * r;
            Console.WriteLine("Cevre:" + cevre);
        }
        public void Cevre()
        {
            double cevre = 4 * r;
            Console.WriteLine("Cevre:" + cevre);
        }
        public void Alan()
        {
            double alan = r * r;
            Console.WriteLine("Alan:" + alan);
        }
        public void Alan(double x)
        {

            double alan = x * r * r;
            Console.WriteLine("Alan:" + alan);


        }

    }

    class anaprogram
    {
        static void Main(string[] args)
        {
            int sec = new int();
            double hee = 22 / 7;

            Hesap h1 = new Hesap();
            do
            {
                Console.WriteLine("Islem yapilacak sekil seciniz:");
                Console.WriteLine("1-Kare");
                Console.WriteLine("2-Daire");
                sec = Convert.ToInt32(Console.ReadLine());
            } while (sec != 1 && sec != 2);


            Console.WriteLine("Kare kosesi veya cember capi icin deger giriniz:");
            double gir = new double();
            gir = Convert.ToDouble(Console.ReadLine());
            h1.r = gir;

            if (sec == 1)
            {

                Console.WriteLine("--------KARE--------");

                h1.Cevre();
                h1.Alan();
            }
            else if (sec == 2)
            {
                Console.WriteLine("--------Cember--------");

                h1.Cevre(hee);
                h1.Alan(hee);

            }





        }
    }
}
