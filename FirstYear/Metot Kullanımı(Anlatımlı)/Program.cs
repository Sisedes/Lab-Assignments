using System;

namespace Odev_6._1
{//static methodlar class'a ait oldukları için nesne ile çağırmak yerine class ismi ile çağırılır. Sürekli kullanmış olduğumuz Console.WriteLine() static metotların en büyük örneğidir.Noktadan önce olan "Console" kısmı sınıfın adını , "WriteLine" kısmı ise metodu temsil eder.
    class Program
    {//Zar Atalım
        class Zar
        { static public void ZarAT()
            {
                int deger;
                Random r1 = new Random();
                deger = r1.Next(1, 7);
                Console.WriteLine("Zar "+deger+" geldi.");
                Console.WriteLine("----------");

            }
            //Simdi ise dnd gibi oyunlarda kullanılan 20 yüzlü zarı olusturmayı deneyelim(türetelim)
            static public void dndZarAT()
            {
                int deger;
                Random r1 = new Random();
                deger = r1.Next(1, 21);
                Console.WriteLine( "Yirmi yuzlu zar " + deger + " geldi.");
                Console.WriteLine("----------");


            }
            //Standart zarın üstüne değer ekleterek attıralım 
            static public void ekZarAT()
            { Console.WriteLine("Zara kac eklemek istersiniz?");
                Random r1 = new Random();
                int m = r1.Next(1 , 7);
                int artı = Convert.ToInt32(Console.ReadLine());
                int s =m + artı;
                Console.WriteLine("Zar " + s + " geldi.");
                Console.WriteLine("----------");


            }
        }


       
            static void Main(string[] args)
        {//oluşturduğumuz zarı atalım.
            Zar.ZarAT();//1-6 arasındaki normal zarı atar.
            Zar.dndZarAT();//1-20 arasındaki klasik dnd zarını atar.
            Zar.ekZarAT();//Özelleştirlmiş zarı atar.
            }
        }
    }

