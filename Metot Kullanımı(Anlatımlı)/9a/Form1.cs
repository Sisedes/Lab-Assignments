using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _9a
{
    public partial class Form1 : Form
    {
        bool SayiMi(string text)
        {
            foreach (char chr in text)
            {
                if (!Char.IsNumber(chr)) return false;
            }
            return true;
        }

        public Form1()
        {
            InitializeComponent();
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void label4_Click(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
           

            
            if (textBox1.Text == "")
                ekle.Enabled = false;
            else
                ekle.Enabled = true;

        }

        private void ekle_Click(object sender, EventArgs e)
        {
            if (SayiMi(textBox1.Text) == true)
            {
                comboBox1.Items.Add(textBox1.Text);
                label1.Text = comboBox1.Items.Count.ToString();
                textBox1.Text = "";
                
            }
            else
            {
                MessageBox.Show("Sayı Değildir."); 
            }
            
        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void sil_Click(object sender, EventArgs e)
        {
            if (comboBox1.SelectedIndex < 0)
            {
                MessageBox.Show("Secim yapiniz");



            }
            else
            {
                comboBox1.Items.Remove(comboBox1.SelectedItem);
                label1.Text = comboBox1.Items.Count.ToString();
                sil.Enabled = false;
            }
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
    }
}
