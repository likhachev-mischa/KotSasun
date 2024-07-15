#include "MyForm.h"

#include <Windows.h>

#include <iostream>
#include <string>

#include "AVL.h"
#include "BST.h"

using namespace KotSasun;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
  // //--debug--

  /*int marks[5] = {2, 3, 4, 5, 5};
  StudentData vasya("1_Vasya", marks);
  StudentData vasya2("2_Vasya", marks);

  int marks2[5] = {2, 2, 2, 3, 4};
  StudentData dima("1_Dima", marks2);
  StudentData dima2("2_Dima", marks2);

  int marks3[5] = {3, 2, 2, 2, 2};
  StudentData lena("1_Lena", marks3);
  StudentData lena2("2_Lena", marks3);

  BST<StudentData> bst;
  bst.insert(vasya);
  bst.insert(vasya2);
  bst.insert(dima);
  bst.insert(dima2);

  AVL<StudentData> AVL;
  AVL.insert(vasya);
  AVL.insert(vasya2);
  AVL.insert(dima);
  AVL.insert(dima2);
  AVL.insert(lena);
  AVL.insert(lena2);*/

  ////-- end debug --

  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);
  Application::Run(gcnew MyForm);
  return 0;
}