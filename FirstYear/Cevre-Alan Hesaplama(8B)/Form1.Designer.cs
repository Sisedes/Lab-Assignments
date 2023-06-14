namespace odev8_B
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
            this.components = new System.ComponentModel.Container();
            this.contextMenuStrip1 = new System.Windows.Forms.ContextMenuStrip(this.components);
            this.kisa = new System.Windows.Forms.TextBox();
            this.uzun = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.cvrbtn = new System.Windows.Forms.Button();
            this.alanbtn = new System.Windows.Forms.Button();
            this.cevreson = new System.Windows.Forms.Label();
            this.alanson = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // contextMenuStrip1
            // 
            this.contextMenuStrip1.ImageScalingSize = new System.Drawing.Size(20, 20);
            this.contextMenuStrip1.Name = "contextMenuStrip1";
            this.contextMenuStrip1.Size = new System.Drawing.Size(61, 4);
            // 
            // kisa
            // 
            this.kisa.Location = new System.Drawing.Point(281, 118);
            this.kisa.Name = "kisa";
            this.kisa.Size = new System.Drawing.Size(172, 22);
            this.kisa.TabIndex = 2;
            this.kisa.TextChanged += new System.EventHandler(this.kisa_TextChanged);
            // 
            // uzun
            // 
            this.uzun.Location = new System.Drawing.Point(281, 179);
            this.uzun.Name = "uzun";
            this.uzun.Size = new System.Drawing.Size(172, 22);
            this.uzun.TabIndex = 3;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(126, 121);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(71, 16);
            this.label1.TabIndex = 4;
            this.label1.Text = "Kisa Kenar";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(126, 182);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(75, 16);
            this.label2.TabIndex = 5;
            this.label2.Text = "Uzun Kenar";
            this.label2.Click += new System.EventHandler(this.label2_Click);
            // 
            // cvrbtn
            // 
            this.cvrbtn.Location = new System.Drawing.Point(162, 263);
            this.cvrbtn.Name = "cvrbtn";
            this.cvrbtn.Size = new System.Drawing.Size(158, 88);
            this.cvrbtn.TabIndex = 6;
            this.cvrbtn.Text = "Cevre Hesaplama";
            this.cvrbtn.UseVisualStyleBackColor = true;
            this.cvrbtn.Click += new System.EventHandler(this.button1_Click);
            // 
            // alanbtn
            // 
            this.alanbtn.Location = new System.Drawing.Point(376, 263);
            this.alanbtn.Name = "alanbtn";
            this.alanbtn.Size = new System.Drawing.Size(158, 88);
            this.alanbtn.TabIndex = 7;
            this.alanbtn.Text = "Alan Hesaplama";
            this.alanbtn.UseVisualStyleBackColor = true;
            this.alanbtn.Click += new System.EventHandler(this.button1_Click_1);
            // 
            // cevreson
            // 
            this.cevreson.AutoSize = true;
            this.cevreson.Location = new System.Drawing.Point(584, 275);
            this.cevreson.Name = "cevreson";
            this.cevreson.Size = new System.Drawing.Size(90, 16);
            this.cevreson.TabIndex = 8;
            this.cevreson.Text = "Cevre Sonuc :";
            this.cevreson.Click += new System.EventHandler(this.cevreson_Click);
            // 
            // alanson
            // 
            this.alanson.AutoSize = true;
            this.alanson.Location = new System.Drawing.Point(584, 320);
            this.alanson.Name = "alanson";
            this.alanson.Size = new System.Drawing.Size(81, 16);
            this.alanson.TabIndex = 9;
            this.alanson.Text = "Alan Sonuc :";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.alanson);
            this.Controls.Add(this.cevreson);
            this.Controls.Add(this.alanbtn);
            this.Controls.Add(this.cvrbtn);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.uzun);
            this.Controls.Add(this.kisa);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.ContextMenuStrip contextMenuStrip1;
        private System.Windows.Forms.TextBox kisa;
        private System.Windows.Forms.TextBox uzun;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Button cvrbtn;
        private System.Windows.Forms.Button alanbtn;
        private System.Windows.Forms.Label cevreson;
        private System.Windows.Forms.Label alanson;
    }
}

