#pragma once

namespace Monk {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for BattleUI
	/// </summary>
	public ref class BattleUI : public System::Windows::Forms::Form
	{

	public:
		BattleUI(System::Windows::Forms::Form^ menu)
		{
			otherform = menu;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~BattleUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  buttonDefend;
	protected:
	private: System::Windows::Forms::Button^  buttonAttack;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txt_EnemyHP;
	private: System::Windows::Forms::TextBox^  txt_PlayerHP;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ListBox^  lbo_BattleLog;
	private: System::Windows::Forms::Form ^ otherform;



	protected:
	
	protected:

	protected:

	private:


		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(BattleUI::typeid));
			this->buttonDefend = (gcnew System::Windows::Forms::Button());
			this->buttonAttack = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_EnemyHP = (gcnew System::Windows::Forms::TextBox());
			this->txt_PlayerHP = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbo_BattleLog = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// buttonDefend
			// 
			this->buttonDefend->BackColor = System::Drawing::Color::Black;
			this->buttonDefend->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonDefend->FlatAppearance->BorderColor = System::Drawing::Color::Indigo;
			this->buttonDefend->FlatAppearance->MouseDownBackColor = System::Drawing::Color::BlueViolet;
			this->buttonDefend->FlatAppearance->MouseOverBackColor = System::Drawing::Color::BlueViolet;
			this->buttonDefend->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDefend->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDefend->ForeColor = System::Drawing::Color::Orchid;
			this->buttonDefend->Location = System::Drawing::Point(298, 101);
			this->buttonDefend->Name = L"buttonDefend";
			this->buttonDefend->Size = System::Drawing::Size(111, 42);
			this->buttonDefend->TabIndex = 23;
			this->buttonDefend->Text = L"Defend";
			this->buttonDefend->UseVisualStyleBackColor = false;
			// 
			// buttonAttack
			// 
			this->buttonAttack->BackColor = System::Drawing::Color::Black;
			this->buttonAttack->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonAttack->FlatAppearance->BorderColor = System::Drawing::Color::Indigo;
			this->buttonAttack->FlatAppearance->MouseDownBackColor = System::Drawing::Color::BlueViolet;
			this->buttonAttack->FlatAppearance->MouseOverBackColor = System::Drawing::Color::BlueViolet;
			this->buttonAttack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAttack->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAttack->ForeColor = System::Drawing::Color::Orchid;
			this->buttonAttack->Location = System::Drawing::Point(298, 49);
			this->buttonAttack->Name = L"buttonAttack";
			this->buttonAttack->Size = System::Drawing::Size(111, 42);
			this->buttonAttack->TabIndex = 22;
			this->buttonAttack->Text = L"Attack";
			this->buttonAttack->UseVisualStyleBackColor = false;
			this->buttonAttack->Click += gcnew System::EventHandler(this, &BattleUI::buttonAttack_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(506, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Your HP";
			// 
			// txt_EnemyHP
			// 
			this->txt_EnemyHP->BackColor = System::Drawing::Color::Red;
			this->txt_EnemyHP->Location = System::Drawing::Point(104, 71);
			this->txt_EnemyHP->Name = L"txt_EnemyHP";
			this->txt_EnemyHP->Size = System::Drawing::Size(100, 20);
			this->txt_EnemyHP->TabIndex = 20;
			// 
			// txt_PlayerHP
			// 
			this->txt_PlayerHP->BackColor = System::Drawing::Color::Lime;
			this->txt_PlayerHP->Location = System::Drawing::Point(509, 71);
			this->txt_PlayerHP->Name = L"txt_PlayerHP";
			this->txt_PlayerHP->Size = System::Drawing::Size(100, 20);
			this->txt_PlayerHP->TabIndex = 19;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::DarkGray;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 177);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 20);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Battle Log";
			// 
			// lbo_BattleLog
			// 
			this->lbo_BattleLog->BackColor = System::Drawing::Color::Black;
			this->lbo_BattleLog->ForeColor = System::Drawing::Color::Red;
			this->lbo_BattleLog->FormattingEnabled = true;
			this->lbo_BattleLog->Location = System::Drawing::Point(12, 200);
			this->lbo_BattleLog->Name = L"lbo_BattleLog";
			this->lbo_BattleLog->Size = System::Drawing::Size(318, 225);
			this->lbo_BattleLog->TabIndex = 17;
			// 
			// BattleUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkViolet;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(732, 435);
			this->Controls->Add(this->buttonDefend);
			this->Controls->Add(this->buttonAttack);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_EnemyHP);
			this->Controls->Add(this->txt_PlayerHP);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbo_BattleLog);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(748, 473);
			this->MinimumSize = System::Drawing::Size(748, 473);
			this->Name = L"BattleUI";
			this->Text = L"Battle";
			this->TransparencyKey = System::Drawing::Color::Purple;
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion


private: 
	System::Void buttonAttack_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
		otherform->Show();
	}
};
}