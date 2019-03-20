#pragma once

namespace Monk {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for SettingsUI
	/// </summary>
	public ref class SettingsUI : public System::Windows::Forms::Form
	{

	public:
		SettingsUI(System::Windows::Forms::Form^ menu, System::Media::SoundPlayer^ music)
		{
			otherform = menu;
			titleMusic = music;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SettingsUI()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



	private: System::Windows::Forms::Form^ otherform;
	private: System::Windows::Forms::CheckBox^  checkBoxMusic;
	private: System::Media::SoundPlayer^ titleMusic;
	private: System::Windows::Forms::Button^  buttonBack;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(SettingsUI::typeid));
			this->checkBoxMusic = (gcnew System::Windows::Forms::CheckBox());
			this->buttonBack = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// checkBoxMusic
			// 
			this->checkBoxMusic->AutoSize = true;
			this->checkBoxMusic->Checked = true;
			this->checkBoxMusic->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBoxMusic->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBoxMusic->Location = System::Drawing::Point(95, 93);
			this->checkBoxMusic->Name = L"checkBoxMusic";
			this->checkBoxMusic->Size = System::Drawing::Size(69, 24);
			this->checkBoxMusic->TabIndex = 1;
			this->checkBoxMusic->Text = L"Music";
			this->checkBoxMusic->UseVisualStyleBackColor = true;
			this->checkBoxMusic->CheckedChanged += gcnew System::EventHandler(this, &SettingsUI::checkBoxMusic_CheckedChanged);
			// 
			// buttonBack
			// 
			this->buttonBack->BackColor = System::Drawing::Color::DarkOrchid;
			this->buttonBack->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonBack->FlatAppearance->BorderColor = System::Drawing::Color::Indigo;
			this->buttonBack->FlatAppearance->MouseDownBackColor = System::Drawing::Color::BlueViolet;
			this->buttonBack->FlatAppearance->MouseOverBackColor = System::Drawing::Color::BlueViolet;
			this->buttonBack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonBack->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonBack->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->buttonBack->Location = System::Drawing::Point(95, 245);
			this->buttonBack->Name = L"buttonBack";
			this->buttonBack->Size = System::Drawing::Size(115, 44);
			this->buttonBack->TabIndex = 9;
			this->buttonBack->Text = L"Back";
			this->buttonBack->UseVisualStyleBackColor = false;
			this->buttonBack->Click += gcnew System::EventHandler(this, &SettingsUI::buttonBack_Click);
			// 
			// SettingsUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkViolet;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(308, 345);
			this->Controls->Add(this->buttonBack);
			this->Controls->Add(this->checkBoxMusic);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"SettingsUI";
			this->Text = L"Settings";
			this->TransparencyKey = System::Drawing::Color::Purple;
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		public: void startTitleMusic()
		{
			try
			{
				stopTitleMusic();
				titleMusic->Load();
				titleMusic->PlayLooping();
			}
			catch (Win32Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}

		public: void stopTitleMusic()
		{
			try
			{
				titleMusic->Stop();
			}
			catch (Win32Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}

#pragma endregion


	private: System::Void buttonBack_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
	}
private: System::Void checkBoxMusic_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->checkBoxMusic->Checked)
	{
		startTitleMusic();
	}
	else
	{
		stopTitleMusic();
	}
}
};
}