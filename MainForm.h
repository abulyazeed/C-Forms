#pragma once
//#include <WinUser.h>
#include <Windows.h>
#include <winnt.h>
#include <winnt.rh>
#include<iostream>
using namespace std;

//#define _AMD64_
//#define _X86_
//#define _WIN64

namespace EmptytOne {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Security::Permissions;

	enum   MyOperation
	{
		plus = 1,
		minus = 2,
		multiply = 3,
		devide = 4
	 };
  MyOperation resolveOperation(String^ input);

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	private:

		// Constant value was found in the "windows.h" header file.
	//static const Int32 WM_ACTIVATEAPP = 0x001C;
	Boolean appActive;

	 double value_1;
	 double value_2;
	 double result;
	 String^ equal;
	 MyOperation operation;

	 

	public:
		MainForm(void)
		{
			appActive = true;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button0;
	private: System::Windows::Forms::Button^ buttonPlus;
	private: System::Windows::Forms::Button^ buttonMinuse;
	private: System::Windows::Forms::Button^ buttonMultiple;
	private: System::Windows::Forms::Button^ buttonDivide;
	private: System::Windows::Forms::Button^ buttonEqual;
	private: System::Windows::Forms::Button^ buttonClear;








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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->buttonPlus = (gcnew System::Windows::Forms::Button());
			this->buttonMinuse = (gcnew System::Windows::Forms::Button());
			this->buttonMultiple = (gcnew System::Windows::Forms::Button());
			this->buttonDivide = (gcnew System::Windows::Forms::Button());
			this->buttonEqual = (gcnew System::Windows::Forms::Button());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 21);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(168, 20);
			this->textBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 50);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(52, 46);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(70, 50);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(52, 46);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(128, 50);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(52, 46);
			this->button3->TabIndex = 1;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 102);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(52, 46);
			this->button4->TabIndex = 1;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(70, 102);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(52, 46);
			this->button5->TabIndex = 1;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(128, 102);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(52, 46);
			this->button6->TabIndex = 1;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MainForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(12, 154);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(52, 46);
			this->button7->TabIndex = 1;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MainForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(70, 154);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(52, 46);
			this->button8->TabIndex = 1;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MainForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(128, 154);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(52, 46);
			this->button9->TabIndex = 1;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MainForm::button9_Click);
			// 
			// button0
			// 
			this->button0->Location = System::Drawing::Point(12, 206);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(52, 46);
			this->button0->TabIndex = 1;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &MainForm::button0_Click);
			// 
			// buttonPlus
			// 
			this->buttonPlus->Location = System::Drawing::Point(70, 206);
			this->buttonPlus->Name = L"buttonPlus";
			this->buttonPlus->Size = System::Drawing::Size(52, 46);
			this->buttonPlus->TabIndex = 1;
			this->buttonPlus->Text = L"+";
			this->buttonPlus->UseVisualStyleBackColor = true;
			this->buttonPlus->Click += gcnew System::EventHandler(this, &MainForm::buttonPlus_Click);
			// 
			// buttonMinuse
			// 
			this->buttonMinuse->Location = System::Drawing::Point(128, 206);
			this->buttonMinuse->Name = L"buttonMinuse";
			this->buttonMinuse->Size = System::Drawing::Size(52, 46);
			this->buttonMinuse->TabIndex = 1;
			this->buttonMinuse->Text = L"-";
			this->buttonMinuse->UseVisualStyleBackColor = true;
			this->buttonMinuse->Click += gcnew System::EventHandler(this, &MainForm::buttonMinuse_Click);
			// 
			// buttonMultiple
			// 
			this->buttonMultiple->Location = System::Drawing::Point(12, 258);
			this->buttonMultiple->Name = L"buttonMultiple";
			this->buttonMultiple->Size = System::Drawing::Size(52, 46);
			this->buttonMultiple->TabIndex = 1;
			this->buttonMultiple->Text = L"*";
			this->buttonMultiple->UseVisualStyleBackColor = true;
			this->buttonMultiple->Click += gcnew System::EventHandler(this, &MainForm::buttonMultiple_Click);
			// 
			// buttonDivide
			// 
			this->buttonDivide->Location = System::Drawing::Point(70, 258);
			this->buttonDivide->Name = L"buttonDivide";
			this->buttonDivide->Size = System::Drawing::Size(52, 46);
			this->buttonDivide->TabIndex = 1;
			this->buttonDivide->Text = L"/";
			this->buttonDivide->UseVisualStyleBackColor = true;
			this->buttonDivide->Click += gcnew System::EventHandler(this, &MainForm::buttonDivide_Click);
			// 
			// buttonEqual
			// 
			this->buttonEqual->Location = System::Drawing::Point(128, 258);
			this->buttonEqual->Name = L"buttonEqual";
			this->buttonEqual->Size = System::Drawing::Size(52, 46);
			this->buttonEqual->TabIndex = 1;
			this->buttonEqual->Text = L"=";
			this->buttonEqual->UseVisualStyleBackColor = true;
			this->buttonEqual->Click += gcnew System::EventHandler(this, &MainForm::buttonEqual_Click);
			// 
			// buttonClear
			// 
			this->buttonClear->Location = System::Drawing::Point(12, 310);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(168, 31);
			this->buttonClear->TabIndex = 1;
			this->buttonClear->Text = L"Clear";
			this->buttonClear->UseVisualStyleBackColor = true;
			this->buttonClear->Click += gcnew System::EventHandler(this, &MainForm::buttonClear_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(192, 346);
			this->Controls->Add(this->buttonClear);
			this->Controls->Add(this->buttonEqual);
			this->Controls->Add(this->buttonDivide);
			this->Controls->Add(this->buttonMultiple);
			this->Controls->Add(this->buttonMinuse);
			this->Controls->Add(this->buttonPlus);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + button1->Text;
	}
private: System::Void buttonClear_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + button2->Text;
}
	   protected:
		   virtual bool ProcessCmdKey(Message% msg,Keys keyData) override
		   {
		   if (keyData == Keys::Escape)
		   {
			   this->Close();
			   return true;
		   }
		  /* return base::ProcessCmdKey(ref msg, keyData);*/
		  return Form::ProcessCmdKey(msg, keyData);
	   }

		   protected:
			   virtual void OnPaint(PaintEventArgs^ e) override
			   {

				   // Paint a string in different styles depending on whether the
				   // application is active.
				   if (appActive)
				   {
					   e->Graphics->FillRectangle(SystemBrushes::ActiveCaption, 20, 20, 260, 50);
					   e->Graphics->DrawString("Application is active", this->Font, SystemBrushes::ActiveCaptionText, 20, 20);
				   }
				   else
				   {
					   e->Graphics->FillRectangle(SystemBrushes::InactiveCaption, 20, 20, 260, 50);
					   e->Graphics->DrawString("Application is Inactive", this->Font, SystemBrushes::ActiveCaptionText, 20, 20);
				   }
			   }

		   [SecurityPermission(SecurityAction::Demand, Flags = SecurityPermissionFlag::UnmanagedCode)]
		   virtual void WndProc(Message% m) override
		   {

			   // Listen for operating system messages.
			   switch (m.Msg)
			   {
			   case WM_ACTIVATEAPP:

				   // The WParam value identifies what is occurring.
				   appActive = (int)m.WParam != 0;

				   // Invalidate to get new text painted.
				   this->Invalidate();
				   break;
			   }
			   Form::WndProc(m);
		   }


private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + button3->Text;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + button4->Text;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + button5->Text;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + button6->Text;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + button7->Text;
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + button8->Text;
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + button9->Text;
}
private: System::Void button0_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + button0->Text;
}
private: System::Void buttonPlus_Click(System::Object^ sender, System::EventArgs^ e) {
	double::TryParse(textBox1->Text, value_1);
	textBox1->Text = "";
	equal =  "+";
	operation = MyOperation::plus;
}
private: System::Void buttonMinuse_Click(System::Object^ sender, System::EventArgs^ e) {
	double::TryParse(textBox1->Text,  value_1);
	textBox1->Text = "";
	equal = "-";
	operation = MyOperation::minus;
}
private: System::Void buttonMultiple_Click(System::Object^ sender, System::EventArgs^ e) {
	double::TryParse(textBox1->Text,  value_1);
	textBox1->Text = "";
	equal = "*";
	operation = MyOperation::multiply;
}
private: System::Void buttonDivide_Click(System::Object^ sender, System::EventArgs^ e) {
	double::TryParse(textBox1->Text, value_1);
	textBox1->Text = "";
	equal = "/";
	operation = MyOperation::devide;
}
	

private: System::Void buttonEqual_Click(System::Object^ sender, System::EventArgs^ e) {

	MyOperation op = resolveOperation(equal);
	
	switch (operation)
	{
	case (MyOperation::plus):
		double::TryParse(textBox1->Text,  value_2);
		result = value_1 + value_2;
		textBox1->Text = result.ToString();
		break;

	case (MyOperation::minus):
		double::TryParse(textBox1->Text,  value_2);
		result = value_1 - value_2;
		textBox1->Text = result.ToString();
		break;

	case (MyOperation::multiply):
		double::TryParse(textBox1->Text, value_2);
		result = value_1 * value_2;
		textBox1->Text = result.ToString();
		break;

	case (MyOperation::devide):
		double::TryParse(textBox1->Text, value_2);
		result = value_1 / value_2;
		textBox1->Text = result.ToString();
		break;
	}
}
};
}
