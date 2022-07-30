namespace Odev_9B
{
    partial class Form1
    {
        /// <summary>
        ///Gerekli tasarımcı değişkeni.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///Kullanılan tüm kaynakları temizleyin.
        /// </summary>
        ///<param name="disposing">yönetilen kaynaklar dispose edilmeliyse doğru; aksi halde yanlış.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer üretilen kod

        /// <summary>
        /// Tasarımcı desteği için gerekli metot - bu metodun 
        ///içeriğini kod düzenleyici ile değiştirmeyin.
        /// </summary>
        private void InitializeComponent()
        {
            this.olustur = new System.Windows.Forms.Button();
            this.enyuk = new System.Windows.Forms.Button();
            this.endus = new System.Windows.Forms.Button();
            this.listBox1 = new System.Windows.Forms.ListBox();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.ara = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // olustur
            // 
            this.olustur.Location = new System.Drawing.Point(72, 37);
            this.olustur.Name = "olustur";
            this.olustur.Size = new System.Drawing.Size(142, 23);
            this.olustur.TabIndex = 0;
            this.olustur.Text = "Olustur ve Listeli";
            this.olustur.UseVisualStyleBackColor = true;
            this.olustur.Click += new System.EventHandler(this.button1_Click);
            // 
            // enyuk
            // 
            this.enyuk.Location = new System.Drawing.Point(272, 79);
            this.enyuk.Name = "enyuk";
            this.enyuk.Size = new System.Drawing.Size(139, 74);
            this.enyuk.TabIndex = 1;
            this.enyuk.Text = "Notu En Yuksek Olan Ogrenci\r\n";
            this.enyuk.UseVisualStyleBackColor = true;
            this.enyuk.Click += new System.EventHandler(this.enyuk_Click);
            // 
            // endus
            // 
            this.endus.Location = new System.Drawing.Point(272, 203);
            this.endus.Name = "endus";
            this.endus.Size = new System.Drawing.Size(139, 74);
            this.endus.TabIndex = 2;
            this.endus.Text = "Notu En Dusuk Olan Ogrenci";
            this.endus.UseVisualStyleBackColor = true;
            this.endus.Click += new System.EventHandler(this.button2_Click);
            // 
            // listBox1
            // 
            this.listBox1.FormattingEnabled = true;
            this.listBox1.ItemHeight = 16;
            this.listBox1.Location = new System.Drawing.Point(72, 81);
            this.listBox1.Name = "listBox1";
            this.listBox1.Size = new System.Drawing.Size(160, 196);
            this.listBox1.TabIndex = 3;
            this.listBox1.SelectedIndexChanged += new System.EventHandler(this.listBox1_SelectedIndexChanged);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(283, 308);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(128, 16);
            this.label1.TabIndex = 4;
            this.label1.Text = "En Yuksek Not Alan:";
            this.label1.Click += new System.EventHandler(this.label1_Click);
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(72, 308);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(54, 16);
            this.label2.TabIndex = 5;
            this.label2.Text = "Ogrenci";
            // 
            // textBox1
            // 
            this.textBox1.Location = new System.Drawing.Point(132, 308);
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(100, 22);
            this.textBox1.TabIndex = 6;
            this.textBox1.TextChanged += new System.EventHandler(this.textBox1_TextChanged);
            // 
            // ara
            // 
            this.ara.Location = new System.Drawing.Point(132, 350);
            this.ara.Name = "ara";
            this.ara.Size = new System.Drawing.Size(100, 33);
            this.ara.TabIndex = 7;
            this.ara.Text = "Ogrenci Ara";
            this.ara.UseVisualStyleBackColor = true;
            this.ara.Click += new System.EventHandler(this.ara_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(831, 510);
            this.Controls.Add(this.ara);
            this.Controls.Add(this.textBox1);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.listBox1);
            this.Controls.Add(this.endus);
            this.Controls.Add(this.enyuk);
            this.Controls.Add(this.olustur);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button olustur;
        private System.Windows.Forms.Button enyuk;
        private System.Windows.Forms.Button endus;
        private System.Windows.Forms.ListBox listBox1;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox textBox1;
        private System.Windows.Forms.Button ara;
    }
}

