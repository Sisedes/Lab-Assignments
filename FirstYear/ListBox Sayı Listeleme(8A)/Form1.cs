using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Odev_8A
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
           
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
           
            Random r = new Random();
            int rsayi = 0, x;
            for (x = 0; x < 100; x++)
            {

                rsayi = r.Next(0, 25);
                listBox1.Items.Add(rsayi);
               
            }
            
            
        }

        private void button2_Click(object sender, EventArgs e)
        {
            listBox1.Sorted = true;
        }
    }
}
