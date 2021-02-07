#include "Window.h"
#include "Cryptor.h"


#include <Windows.h>
#include <string>
#include <stdio.h>
#include <msclr\marshal_cppstd.h>


std::string Word_TextBox_text;
std::string Key_TextBox_text;
std::string Result_TextBox_text;


using namespace VijenerCryptorGUI;
using namespace msclr::interop;


int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{

    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew Window);
    return 0;

}

System::Void VijenerCryptorGUI::Window::exit_ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{

    Application::Exit();
    return System::Void();

}

System::Void VijenerCryptorGUI::Window::aboutApp_ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{

    MessageBox::Show("version 0.1","Vijener Cryptor GUI");
    return System::Void();

}

System::Void VijenerCryptorGUI::Window::encrypt_button_Click(System::Object^ sender, System::EventArgs^ e)
{

    Window::result_textBox->Text = marshal_as<System::String ^>(
        Functions::Encryptor(
            marshal_as<std::string>(Window::word_textBox->Text), 
            marshal_as<std::string>(Window::key_textBox->Text)
        ));
    return System::Void();

}

System::Void VijenerCryptorGUI::Window::decrypt_button_Click(System::Object^ sender, System::EventArgs^ e)
{

    Window::result_textBox->Text = marshal_as<System::String^>(
        Functions::Decryptor(
            marshal_as<std::string>(Window::word_textBox->Text),
            marshal_as<std::string>(Window::key_textBox->Text)
        ));
    return System::Void();

}
