// Copyright 2018 Your Name <your_email>

#include <header.hpp>
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
  //1.1
  int x;
  int y;
  cin >> x;
  cin >> y;
  cout << "Enter x:" << x << endl;
  cout << "Enter y:" << y << endl;
  if (x % 2 == 1 && y % 2 == 1) {
    cout << "condition is true" << endl;
  } else {
    cout << "condition is false" << endl;
  }
  //1.2
  cin >> x;
  cin >> y;
  cout << "Enter x:" << x << endl;
  cout << "Enter y:" << y << endl;
  if ((x >= 20 && y < 20) || (y >= 20 && x < 20)) {
    cout << "condition is true" << endl;
  } else {
    cout << "condition is false" << endl;
  }
  //1.3
  cin >> x;
  cin >> y;
  cout << "Enter x:" << x << endl;
  cout << "Enter y:" << y << endl;
  if ((x == 0 && y == 0) || (x != 0 && y == 0) || (x == 0 && y != 0)) {
    cout << "condition is true" << endl;
  } else {
    cout << "condition is false" << endl;
  }
  //1.4
  int z;
  cin >> x;
  cin >> y;
  cin >> z;
  cout << "Enter x:" << x << endl;
  cout << "Enter y:" << y << endl;
  cout << "Enter z:" << z << endl;
  if ((z < 0) && (y < 0) && (z < 0)) {
    cout << "condition is true" << endl;
  } else {
    cout << "condition is false" << endl;
  }
  //1.5
  cin >> x;
  cin >> y;
  cin >> z;
  cout << "Enter x:" << x << endl;
  cout << "Enter y:" << y << endl;
  cout << "Enter z:" << z << endl;
  if (((x % 5 == 0) && !(y % 5 == 0) && !(z % 5 == 0)) || ((z % 5 == 0) && !(x % 5 == 0) && !(y % 5 == 0)) ||
      ((y % 5 == 0) && !(z % 5 == 0) && !(x % 5 == 0))) {
    cout << "condition is true" << endl;
  } else {
    cout << "condition is false" << endl;
  }
  //1.6
  cin >> x;
  cin >> y;
  cin >> z;
  cout << "Enter x:" << x << endl;
  cout << "Enter y:" << y << endl;
  cout << "Enter z:" << z << endl;
  if ((x > 100) || (y > 100) || (z > 100)) {
    cout << "condition is true" << endl;
  } else {
    cout << "condition is false" << endl;
  }
  //2.1
  pair<char, char> positionA;
  cin >> positionA.first >> positionA.second;
  pair<char, char> positionB;
  cin >> positionB.first >> positionB.second;
  if ((positionA.first == positionB.first) || (positionA.second == positionB.second)) {
    cout << " Good" << endl;
  } else {
    cout << "not Good" << endl;
    //2.2
    cin >> positionA.first >> positionA.second;
    cin >> positionB.first >> positionB.second;
    if (abs(positionA.first - positionB.first) && abs(positionA.second - positionB.second)) {
      cout << " Good" << endl;
    } else {
      cout << "not Good" << endl;
    }
    //2.3
    cin >> positionA.first >> positionA.second;
    cin >> positionB.first >> positionB.second;
    if (((abs(positionA.first - positionB.first) == 1) || (abs(positionA.second - positionB.second) == 1))) {
      cout << " Good" << endl;
    } else {
      cout << "not Good" << endl;
    }
    //2.4
    cin >> positionA.first >> positionA.second;
    cin >> positionB.first >> positionB.second;
    if (abs(positionA.first - positionB.first) == abs(positionA.second - positionB.second) ||
        (positionA.first == positionB.first) || (positionA.second == positionB.second)) {
      cout << " Good" << endl;
    } else {
      cout << "not Good" << endl;
    }
  }
  //2.5 Белая пешка
  cin >> positionA.first >> positionA.second;
  cin >> positionB.first >> positionB.second;
  if (((positionB.first - positionA.first) ==0) && ((positionB.second - positionA.second)== 1))
  {
    cout << " Good" << endl;
  }
  if (((positionB.first - positionA.first) ==1) && ((positionB.second - positionA.second)== 1))
  {
    cout << "not Good" << endl;
  }
  //2.5
  cin >> positionA.first >> positionA.second;
  cin >> positionB.first >> positionB.second;
  if (((positionB.first==positionA.first) && (positionA.second - positionB.second)== 1))
  {
    cout << " Good" << endl;
  }
  if ( ((positionA.first - positionB.first) ==1) && ((positionA.second - positionB.second)== 1))
  {
    cout << "not Good" << endl;
  }
  //Задание 3 таблица умножения
  //3.1 Умножение на 7

  int a=7;
  cout<<endl;
  cout<<"Введите число:  ";
  cout<<endl;
  for (int j=1; j<=9; j++)
  {
    cout<<j<<" * "<<a<<" = "<<j*a<<endl;

  }
  cout<<endl;

  //3.2 Умножение на N
  int N;
  cout<<endl;
  cout<<"Введите число:  ";
  cin>>N;
  cout<<endl;
  for (int j=1; j<=9; j++)
  {
    cout<<j<<" * "<<N<<" = "<<j*N<<endl;

  }
  cout<<endl;
  //4.Произведение чисел.
  //4.1 произведение всех целых чисел от 8 до 15
  int m;
  m=1;
  for (int j=9; j<=15; j++)
    m=m*j;
  cout<<m<<endl;
  //4.2 произведение всех целых чисел от a до 20.
  int  i;
  cin>>a;
  if(a <= 1 || a >= 20)
    cout<<"А больше нормы";
  else{z = a;
    for(i = a + 1; i <= 20; ++i)
      z= z * i;
    cout<<z;
  };
  //4.3 произведение всех целых чисел от a до b
  int b;
  cin>>a;
  cin>>b;
  z=1;
  if(b<a)
    cout<<"Условие не выполняется";
  else
  {
    for(i = a; i <= b; ++i)
      z=z*i;
    cout<<z;
  }

  return 0;
}