#include "MyForm.h"

#include <Windows.h>

#include <iostream>
#include <string>

#include "AVL.h"
#include "BST.h"

using namespace KotSasun;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
  
  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);
  Application::Run(gcnew MyForm);
  return 0;
}