#pragma once
#include <iostream>
#include <math.h>
#include <string>
#include <atlstr.h>
#include <Windows.h>
//#include <msclr/marshal_cppstd.h>

#using <system.dll>

namespace IPandSUBNETcalc {

	using namespace System;
	using namespace System::Text::RegularExpressions;
	using namespace System::Threading::Tasks;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::ComboBox^ comboBox1;

	protected:
	protected:
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoEllipsis = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(26, 19);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label1->Size = System::Drawing::Size(248, 40);
			this->label1->TabIndex = 0;
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(26, 121);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(40, 40);
			this->button1->TabIndex = 4;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(78, 121);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(40, 40);
			this->button2->TabIndex = 5;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(130, 121);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(40, 40);
			this->button3->TabIndex = 7;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(182, 121);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(40, 40);
			this->button4->TabIndex = 6;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(234, 121);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(40, 40);
			this->button5->TabIndex = 11;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(26, 173);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(40, 40);
			this->button6->TabIndex = 10;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(78, 173);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(40, 40);
			this->button7->TabIndex = 9;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(130, 173);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(40, 40);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(182, 173);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(40, 40);
			this->button9->TabIndex = 12;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(234, 173);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(40, 40);
			this->button10->TabIndex = 13;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(26, 226);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(120, 28);
			this->button11->TabIndex = 14;
			this->button11->Text = L"Calculate";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(158, 226);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(116, 28);
			this->button12->TabIndex = 15;
			this->button12->Text = L"Reset";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(26, 81);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 21);
			this->label2->TabIndex = 16;
			this->label2->Text = L"CIDR Notation:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->IntegralHeight = false;
			this->comboBox1->ItemHeight = 13;
			this->comboBox1->Location = System::Drawing::Point(158, 81);
			this->comboBox1->MaxDropDownItems = 5;
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(116, 21);
			this->comboBox1->TabIndex = 17;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(304, 281);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"IP Subnet Calculator";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}

#pragma endregion

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		comboBox1->Items->Add("Select one...");
		comboBox1->Items->Add("/32");
		comboBox1->Items->Add("/31");
		comboBox1->Items->Add("/30");
		comboBox1->Items->Add("/29");
		comboBox1->Items->Add("/28");
		comboBox1->Items->Add("/27");
		comboBox1->Items->Add("/26");
		comboBox1->Items->Add("/25");
		comboBox1->Items->Add("/24");
		comboBox1->Items->Add("/23");
		comboBox1->Items->Add("/22");
		comboBox1->Items->Add("/21");
		comboBox1->Items->Add("/20");
		comboBox1->Items->Add("/19");
		comboBox1->Items->Add("/18");
		comboBox1->Items->Add("/17");
		comboBox1->Items->Add("/16");
		comboBox1->Items->Add("/15");
		comboBox1->Items->Add("/14");
		comboBox1->Items->Add("/13");
		comboBox1->Items->Add("/12");
		comboBox1->Items->Add("/11");
		comboBox1->Items->Add("/10");
		comboBox1->Items->Add(" /9");
		comboBox1->Items->Add(" /8");
		comboBox1->Items->Add(" /7");
		comboBox1->Items->Add(" /6");
		comboBox1->Items->Add(" /5");
		comboBox1->Items->Add(" /4");
		comboBox1->Items->Add(" /3");
		comboBox1->Items->Add(" /2");
		comboBox1->Items->Add(" /1");
	
		comboBox1->DisplayMember = "key";
		comboBox1->ValueMember = "value";

		comboBox1->SelectedItem = "Select one...";
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label1->Text == "") {
			label1->Text = "1";
		}
		else {
			if (label1->Text->Length == 3 || label1->Text->Length == 7 || label1->Text->Length == 11) {
				label1->Text = label1->Text + ".";
			}
			label1->Text = label1->Text + "1";
			if (label1->Text->Length >= 15) {
				button1->Enabled = false;
				button2->Enabled = false;
				button3->Enabled = false;
				button4->Enabled = false;
				button5->Enabled = false;
				button6->Enabled = false;
				button7->Enabled = false;
				button8->Enabled = false;
				button9->Enabled = false;
				button10->Enabled = false;
			}
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label1->Text == "") {
			label1->Text = "2";
		}
		else {
			if (label1->Text->Length == 3 || label1->Text->Length == 7 || label1->Text->Length == 11) {
				label1->Text = label1->Text + ".";
			}
			label1->Text = label1->Text + "2";
			if (label1->Text->Length >= 15) {
				button1->Enabled = false;
				button2->Enabled = false;
				button3->Enabled = false;
				button4->Enabled = false;
				button5->Enabled = false;
				button6->Enabled = false;
				button7->Enabled = false;
				button8->Enabled = false;
				button9->Enabled = false;
				button10->Enabled = false;
			}
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label1->Text == "") {
			label1->Text = "3";
		}
		else {
			if (label1->Text->Length == 3 || label1->Text->Length == 7 || label1->Text->Length == 11) {
				label1->Text = label1->Text + ".";
			}
			label1->Text = label1->Text + "3";
			if (label1->Text->Length >= 15) {
				button1->Enabled = false;
				button2->Enabled = false;
				button3->Enabled = false;
				button4->Enabled = false;
				button5->Enabled = false;
				button6->Enabled = false;
				button7->Enabled = false;
				button8->Enabled = false;
				button9->Enabled = false;
				button10->Enabled = false;
			}
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label1->Text == "") {
			label1->Text = "4";
		}
		else {
			if (label1->Text->Length == 3 || label1->Text->Length == 7 || label1->Text->Length == 11) {
				label1->Text = label1->Text + ".";
			}
			label1->Text = label1->Text + "4";
			if (label1->Text->Length >= 15) {
				button1->Enabled = false;
				button2->Enabled = false;
				button3->Enabled = false;
				button4->Enabled = false;
				button5->Enabled = false;
				button6->Enabled = false;
				button7->Enabled = false;
				button8->Enabled = false;
				button9->Enabled = false;
				button10->Enabled = false;
			}
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label1->Text == "") {
			label1->Text = "5";
		}
		else {
			if (label1->Text->Length == 3 || label1->Text->Length == 7 || label1->Text->Length == 11) {
				label1->Text = label1->Text + ".";
			}
			label1->Text = label1->Text + "5";
			if (label1->Text->Length >= 15) {
				button1->Enabled = false;
				button2->Enabled = false;
				button3->Enabled = false;
				button4->Enabled = false;
				button5->Enabled = false;
				button6->Enabled = false;
				button7->Enabled = false;
				button8->Enabled = false;
				button9->Enabled = false;
				button10->Enabled = false;
			}
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label1->Text == "") {
			label1->Text = "6";
		}
		else {
			if (label1->Text->Length == 3 || label1->Text->Length == 7 || label1->Text->Length == 11) {
				label1->Text = label1->Text + ".";
			}
			label1->Text = label1->Text + "6";
			if (label1->Text->Length >= 15) {
				button1->Enabled = false;
				button2->Enabled = false;
				button3->Enabled = false;
				button4->Enabled = false;
				button5->Enabled = false;
				button6->Enabled = false;
				button7->Enabled = false;
				button8->Enabled = false;
				button9->Enabled = false;
				button10->Enabled = false;
			}
		}
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label1->Text == "") {
			label1->Text = "7";
		}
		else {
			if (label1->Text->Length == 3 || label1->Text->Length == 7 || label1->Text->Length == 11) {
				label1->Text = label1->Text + ".";
			}
			label1->Text = label1->Text + "7";
			if (label1->Text->Length >= 15) {
				button1->Enabled = false;
				button2->Enabled = false;
				button3->Enabled = false;
				button4->Enabled = false;
				button5->Enabled = false;
				button6->Enabled = false;
				button7->Enabled = false;
				button8->Enabled = false;
				button9->Enabled = false;
				button10->Enabled = false;
			}
		}
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label1->Text == "") {
			label1->Text = "8";
		}
		else {
			if (label1->Text->Length == 3 || label1->Text->Length == 7 || label1->Text->Length == 11) {
				label1->Text = label1->Text + ".";
			}
			label1->Text = label1->Text + "8";
			if (label1->Text->Length >= 15) {
				button1->Enabled = false;
				button2->Enabled = false;
				button3->Enabled = false;
				button4->Enabled = false;
				button5->Enabled = false;
				button6->Enabled = false;
				button7->Enabled = false;
				button8->Enabled = false;
				button9->Enabled = false;
				button10->Enabled = false;
			}
		}
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label1->Text == "") {
			label1->Text = "9";
		}
		else {
			if (label1->Text->Length == 3 || label1->Text->Length == 7 || label1->Text->Length == 11) {
				label1->Text = label1->Text + ".";
			}
			label1->Text = label1->Text + "9";
			if (label1->Text->Length >= 15) {
				button1->Enabled = false;
				button2->Enabled = false;
				button3->Enabled = false;
				button4->Enabled = false;
				button5->Enabled = false;
				button6->Enabled = false;
				button7->Enabled = false;
				button8->Enabled = false;
				button9->Enabled = false;
				button10->Enabled = false;
			}
		}
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label1->Text == "") {
			label1->Text = "0";
		}
		else {
			if (label1->Text->Length == 3 || label1->Text->Length == 7 || label1->Text->Length == 11) {
				label1->Text = label1->Text + ".";
			}
			label1->Text = label1->Text + "0";
			if (label1->Text->Length >= 15) {
				button1->Enabled = false;
				button2->Enabled = false;
				button3->Enabled = false;
				button4->Enabled = false;
				button5->Enabled = false;
				button6->Enabled = false;
				button7->Enabled = false;
				button8->Enabled = false;
				button9->Enabled = false;
				button10->Enabled = false;
			}
		}
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ cidr = comboBox1->SelectedItem->ToString(); //catching the CIDR value
		String^ cidrNoSlash = cidr->Remove(0, 1); //removing the "/" symbol, cidrNoSlash still remains string

		String^ str = label1->Text; //changing the IP Address data type to String^


		//giving output from user input
		//

		String^ msg = String::Concat("Your Input\t\t: ", str);
		msg = String::Concat(msg, "/");
		msg = String::Concat(msg, cidrNoSlash);
		//Int64^ strlen = str->Length;

		//
		//end of giving output from user input

		Int64 OctetOneInt, OctetTwoInt, OctetThreeInt, OctetFourInt, maxcidr, incr, cidrNoSlashNum,
			SubnetBinaryInt, anotherIncr, dotsVarIncr = 0, SubnetB1Int, SubnetB2Int, SubnetB3Int, SubnetB4Int,
			ZeroAdd, OctOneBinLen, OctTwoBinLen, OctThreeBinLen, OctFourBinLen, OctetOneBin_Int, OctetTwoBin_Int,
			OctetThreeBin_Int, OctetFourBin_Int, IPBinaryInt, NetAddressBinOneInt, NetAddressBinTwoInt,
			NetAddressBinThreeInt, NetAddressBinFourInt, BCAddrOneInt, BCAddrTwoInt, BCAddrThreeInt, BCAddrFourInt,
			TotalPcsOfIPs, TotalPcsOfUsableHosts, Subnets;

		String ^IpNoFullstop, ^IpNoFullstop_second, ^IpNoFullstop_final, ^OctetOne, ^OctetTwo, ^OctetThree,
			^OctetFour, ^SubnetBinary, ^SubnetBinarywithDots, ^SubnetBinOne, ^SubnetBinTwo, ^SubnetBinThree,
			^SubnetBinFour, ^OctetOneBinary, ^OctetTwoBinary, ^OctetThreeBinary, ^OctetFourBinary, ^IPBinarywithDots,
			^IPBinaryNoDots, ^IPBinaryStr, ^NetAddrOctetOne, ^NetAddrOctetTwo, ^NetAddrOctetThree, ^NetAddrOctetFour,
			^BCAddrOne, ^BCAddrTwo, ^BCAddrThree, ^BCAddrFour, ^TotalIPsSTR, ^UsablesSTR, ^PublicityStatus, ^IPClass;

		if (str != "" && str->Length == 15 && comboBox1->SelectedItem != "Select one...") {
			//removing fullstops therefore only the numbers remain
//

			IpNoFullstop = str->Remove(3, 1); //removes first dot
			IpNoFullstop_second = IpNoFullstop->Remove(6, 1); //removes second dot
			IpNoFullstop_final = IpNoFullstop_second->Remove(9, 1); //removes last dot

			//
			//end of removing fullstops therefore only the numbers remain


			//MessageBox::Show(msg + " " + IpNoFullstop_final);

			OctetOne = str->Remove(3, 12);
			OctetTwo = str->Remove(0, 4)->Remove(3, 8);
			OctetThree = str->Remove(0, 8)->Remove(3, 4);
			OctetFour = str->Remove(0, 12);

			OctetOneInt = Convert::ToInt64(OctetOne);
			OctetTwoInt = Convert::ToInt64(OctetTwo);
			OctetThreeInt = Convert::ToInt64(OctetThree);
			OctetFourInt = Convert::ToInt64(OctetFour);

			if (OctetOneInt > 255 || OctetTwoInt > 255 || OctetThreeInt > 255 || OctetFourInt > 255) {
				goto ERRORALERT;
			}

			maxcidr = 32;
			incr = 0;
			SubnetBinary = "";
			cidrNoSlashNum = Convert::ToInt64(cidrNoSlash);

			CString strchar(str);


			//producing binary digits of Subnet Mask
			//

			for (incr = 0; incr < maxcidr; incr++) {
				if (incr < cidrNoSlashNum)
				{
					SubnetBinary += "1";
				}
				else
				{
					SubnetBinary += "0";
				}
			}

			//
			//end of producing binary digits of Subnet Mask

			SubnetBinaryInt = Convert::ToInt64(SubnetBinary, 2);

			SubnetBinarywithDots = SubnetBinary; //adding dots to the Subnet Mask

			for (anotherIncr = 0; anotherIncr < 3; anotherIncr++) {
				dotsVarIncr = 8 * (anotherIncr + 1) + anotherIncr;
				SubnetBinarywithDots = SubnetBinarywithDots->Insert((int)dotsVarIncr, ".");
				dotsVarIncr = 0;
			}

			SubnetBinOne = SubnetBinary->Remove(8, 24);
			SubnetB1Int = Convert::ToInt64(SubnetBinOne, 2);
			SubnetBinTwo = SubnetBinary->Remove(0, 8)->Remove(8, 16);
			SubnetB2Int = Convert::ToInt64(SubnetBinTwo, 2);
			SubnetBinThree = SubnetBinary->Remove(0, 16)->Remove(8, 8);
			SubnetB3Int = Convert::ToInt64(SubnetBinThree, 2);
			SubnetBinFour = SubnetBinary->Remove(0, 24);
			SubnetB4Int = Convert::ToInt64(SubnetBinFour, 2);

			OctetOneBinary = Convert::ToString(OctetOneInt, 2);
			OctOneBinLen = OctetOneBinary->Length;
			if (OctOneBinLen < 8) {
				ZeroAdd = 0;
				while (ZeroAdd < (8 - OctOneBinLen)) {
					OctetOneBinary = "0" + OctetOneBinary;
					ZeroAdd++;
				}
			}
			OctetOneBin_Int = Convert::ToInt64(OctetOneBinary, 2);

			OctetTwoBinary = Convert::ToString(OctetTwoInt, 2);
			OctTwoBinLen = OctetTwoBinary->Length;
			if (OctTwoBinLen < 8) {
				ZeroAdd = 0;
				while (ZeroAdd < (8 - OctTwoBinLen)) {
					OctetTwoBinary = "0" + OctetTwoBinary;
					ZeroAdd++;
				}
			}
			OctetTwoBin_Int = Convert::ToInt64(OctetTwoBinary, 2);

			OctetThreeBinary = Convert::ToString(OctetThreeInt, 2);
			OctThreeBinLen = OctetThreeBinary->Length;
			if (OctThreeBinLen < 8) {
				ZeroAdd = 0;
				while (ZeroAdd < (8 - OctThreeBinLen)) {
					OctetThreeBinary = "0" + OctetThreeBinary;
					ZeroAdd++;
				}
			}
			OctetThreeBin_Int = Convert::ToInt64(OctetThreeBinary, 2);

			OctetFourBinary = Convert::ToString(OctetFourInt, 2);
			OctFourBinLen = OctetFourBinary->Length;
			if (OctFourBinLen < 8) {
				ZeroAdd = 0;
				while (ZeroAdd < (8 - OctFourBinLen)) {
					OctetFourBinary = "0" + OctetFourBinary;
					ZeroAdd++;
				}
			}
			OctetFourBin_Int = Convert::ToInt64(OctetFourBinary, 2);

			ZeroAdd = 0;

			IPBinarywithDots = OctetOneBinary + "." + OctetTwoBinary + "." + OctetThreeBinary + "." + OctetFourBinary;

			IPBinaryNoDots = OctetOneBinary + OctetTwoBinary + OctetThreeBinary + OctetFourBinary;

			IPBinaryInt = Convert::ToInt64(IPBinaryNoDots, 2);

			IPBinaryStr = Convert::ToString(IPBinaryInt, 2);

			NetAddressBinOneInt = (SubnetB1Int & OctetOneBin_Int); NetAddrOctetOne = Convert::ToString(NetAddressBinOneInt);
			NetAddressBinTwoInt = (SubnetB2Int & OctetTwoBin_Int); NetAddrOctetTwo = Convert::ToString(NetAddressBinTwoInt);
			NetAddressBinThreeInt = (SubnetB3Int & OctetThreeBin_Int); NetAddrOctetThree = Convert::ToString(NetAddressBinThreeInt);
			NetAddressBinFourInt = (SubnetB4Int & OctetFourBin_Int); NetAddrOctetFour = Convert::ToString(NetAddressBinFourInt);

			TotalPcsOfIPs = (__int64)pow((__int64)2, (__int64)(32 - cidrNoSlashNum)); TotalIPsSTR = Convert::ToString(TotalPcsOfIPs);
			TotalPcsOfUsableHosts = TotalPcsOfIPs - 2; UsablesSTR = Convert::ToString(TotalPcsOfUsableHosts);

			if (cidrNoSlashNum > 23 && cidrNoSlashNum <= 32) {
				BCAddrOneInt = NetAddressBinOneInt; BCAddrTwoInt = NetAddressBinTwoInt; BCAddrThreeInt = NetAddressBinThreeInt;
				BCAddrFourInt = (255 - SubnetB4Int) + NetAddressBinFourInt;
				Subnets = (__int64)pow((__int64)2, (__int64)(cidrNoSlashNum - 24));
				IPClass = "Class\t\t\t: C";
			}
			else if (cidrNoSlashNum > 15 && cidrNoSlashNum < 24) {
				BCAddrOneInt = NetAddressBinOneInt; BCAddrTwoInt = NetAddressBinTwoInt;
				BCAddrThreeInt = (255 - SubnetB3Int) + NetAddressBinThreeInt;
				BCAddrFourInt = 255;
				Subnets = (__int64)pow((__int64)2, (__int64)(cidrNoSlashNum - 16));
				IPClass = "Class\t\t\t: B";
			}
			else if (cidrNoSlashNum > 7 && cidrNoSlashNum < 16) {
				BCAddrOneInt = NetAddressBinOneInt;
				BCAddrTwoInt = (255 - SubnetB2Int) + NetAddressBinTwoInt;
				BCAddrThreeInt = 255; BCAddrFourInt = 255;
				Subnets = (__int64)pow((__int64)2, (__int64)(cidrNoSlashNum - 8));
				IPClass = "Class\t\t\t: A";
			}
			else if (cidrNoSlashNum >= 1 && cidrNoSlashNum < 8) {
				BCAddrOneInt = (255 - SubnetB1Int) + NetAddressBinOneInt;
				BCAddrTwoInt = 255; BCAddrThreeInt = 255; BCAddrFourInt = 255;
				Subnets = (__int64)pow((__int64)2, (__int64)(cidrNoSlashNum));
			}
			else {
				goto ERRORALERT;
			}

			BCAddrOne = Convert::ToString(BCAddrOneInt);
			BCAddrTwo = Convert::ToString(BCAddrTwoInt);
			BCAddrThree = Convert::ToString(BCAddrThreeInt);
			BCAddrFour = Convert::ToString(BCAddrFourInt);

			if ((OctetOneInt == 10) || (OctetOneInt == 172 && OctetTwoInt > 15 && OctetTwoInt < 32) || (OctetOneInt == 192 && OctetTwoInt == 168) || (OctetOneInt == 100 && OctetTwoInt > 63 && OctetTwoInt < 128)) {
				PublicityStatus = "Private";
			}
			else {
				PublicityStatus = "Public";
			}

			MessageBox::Show(
				msg + "\n" +
				//"IP without dots: " + IpNoFullstop_final + "\n" +
				"IP Address\t\t: " + OctetOne + "." + OctetTwo + "." + OctetThree + "." + OctetFour + "\n" +
				"CIDR Notation\t\t: /" + cidrNoSlash + "\n" +
				"Subnet Mask\t\t: " + SubnetB1Int + "." + SubnetB2Int + "." + SubnetB3Int + "." + SubnetB4Int + "\n" +
				//"Subnet  Mask (Binary) combined: " + SubnetBinary + "\n" +
				//"Subnet Binary as Int: " + SubnetBinaryInt + "\n" +
				//"Subnet Binary: " + SubnetBinarywithDots + "\n" +
				"Subnet Mask (Binary)\t: " + SubnetBinOne + "." + SubnetBinTwo + "." + SubnetBinThree + "." + SubnetBinFour + "\n" +
				"IP Binary\t\t\t: " + OctetOneBinary + "." + OctetTwoBinary + "." + OctetThreeBinary + "." + OctetFourBinary + "\n" +
				//"IP Binary: " + IPBinarywithDots + "\n" +
				//"IP Binary as Int: " + IPBinaryInt + "\n" +
				//"IP Binary combined              : " + IPBinaryStr + "\n" +
				//"Subnet Binary (a solid string): " + SubnetBinaryStr + "\n" +
				//"Network Address (a solid string): " + NetAddrStr + "\n" +
				"Network Address\t\t: " + NetAddrOctetOne + "." + NetAddrOctetTwo + "." + NetAddrOctetThree + "." + NetAddrOctetFour + "\n" +
				"Broadcast Address\t\t: " + BCAddrOne + "." + BCAddrTwo + "." + BCAddrThree + "." + BCAddrFour + "\n" +
				"IPs per Subnet\t\t: " + /*TotalPcsOfIPs*/ TotalIPsSTR + " pcs" + "\n" +
				"Usable Hosts per Subnet\t: " + /*TotalPcsOfUsableHosts*/ UsablesSTR + " pcs" + "\n" +
				"Subnets\t\t\t: " + Subnets + "\n" +
				IPClass + "\n" +
				"Private/Public?\t\t: " + PublicityStatus, "Results", MessageBoxButtons::OK
			);
		}
		else {
			goto ERRORALERT;
		}

		ERRORALERT:
		if (OctetOneInt > 255 || OctetTwoInt > 255 || OctetThreeInt > 255 || OctetFourInt > 255 || comboBox1->SelectedItem == "Select one..." || label1->Text == "") {
			MessageBox::Show("An error occurred. Plese re-enter a valid address or choose a correct CIDR value, then try again.", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			//ignore error alert
		}
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) { 
		label1->Text = "";
		button1->Enabled = true;
		button2->Enabled = true;
		button3->Enabled = true;
		button4->Enabled = true;
		button5->Enabled = true;
		button6->Enabled = true;
		button7->Enabled = true;
		button8->Enabled = true;
		button9->Enabled = true;
		button10->Enabled = true;
		comboBox1->SelectedItem = "Select one...";
	}
	private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		/*
		if (MessageBox::Show("Are you sure you want to exit?", "Exit", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			Application::Exit(); break;
		}
		else {
			e->Cancel = true;
		}
		*/
	}

};

}
