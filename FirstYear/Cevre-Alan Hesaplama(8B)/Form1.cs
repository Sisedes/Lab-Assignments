using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace odev8_B
{
    public partial class Form1 : Form
    {
        public int ki;
        public int uzu;
        public int alan;
        public int cevre;
        public Form1()
        {
            InitializeComponent();
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            ki = Convert.ToInt32(kisa.Text);
            uzu = Convert.ToInt32(uzun.Text);
            cevre = (ki * 2) + (uzu * 2);
            cevreson.Text = "Cevre Sonuc :" + cevre;
        }

        private void button1_Click_1(object sender, EventArgs e)
        {
            ki = Convert.ToInt32(kisa.Text);
            uzu = Convert.ToInt32(uzun.Text);
            alan = ki * uzu;
            alanson.Text = "Alan Sonuc :" + alan;
        }

        private void kisa_TextChanged(object sender, EventArgs e)
        {

        }

        private void cevreson_Click(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
    }
}
