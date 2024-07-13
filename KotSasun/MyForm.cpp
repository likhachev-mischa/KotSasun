#include "MyForm.h"

#include <Windows.h>

#include <iostream>
#include <string>

#include "BST.h"

using namespace KotSasun;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

  int marks[5] = {2, 3, 4, 5, 5};
  StudentData vasya("Vasya", marks);

  int marks2[5] = {2, 2, 2, 3, 4};
  StudentData dima("Dima", marks2);

  BST<StudentData> bst;
  bst.insert(vasya);
  bst.insert(vasya);
  bst.insert(dima);



  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);
  Application::Run(gcnew MyForm);
  return 0;
}