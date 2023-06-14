using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Odev_9B
{
    
    
    public partial class Form1 : Form
    {
        string[] adlar = { "Ali", "Veli", "Kaan", "Can", "Cansu", "Sude", "Sıla", "Omur" };
        int[] notlar = { 25, 60, 50, 80, 70, 35, 11, 89 };
        
        
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {for (int i = 0; i < 7; i++)
            {
                listBox1.Items.Add(adlar[i]+"     "+ notlar[i]);
               
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            int z = new int();
            int q = new int();
            z = notlar[0];
            for (int m = 0; m < 7; m++)
            {
                if (notlar[m] < z)
                {
                    z = notlar[m];
                    q = m;
                }
            }
            MessageBox.Show(adlar[q] + " " + z);
        }

        private void label1_Click(object sender, EventArgs e)
        {
            
        }

        private void listBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            
        }

        private void ara_Click(object sender, EventArgs e)
        {
            if (adlar.Contains(textBox1.Text))
            {
                MessageBox.Show(textBox1.Text + "   vardir.");
                
            }
            else
            {
                MessageBox.Show("Aranan Ogrenci Yoktur!!!");
            }
            
        }

        private void enyuk_Click(object sender, EventArgs e)
        {

            int h = new int();
            int y = new int();
            y=notlar[0];
                for (int m = 0; m < 7; m++)
                {if (notlar[m] > y)
                {
                    y = notlar[m];
                    h = m;
                }
                }
            MessageBox.Show(adlar[h] + " " + y);
            label1.Text = "En Yuksek Not Alan:" + y;




        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }
    }
}
