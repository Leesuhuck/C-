#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

using namespace std;

 void TestFunc(int &rParam) {
  rParam = 100;
}

int main() {
  int nData = 0;
  TestFunc(nData);
  cout<< nData << endl;
  return 0;

}

int end() {
  int aList[5] = {10,20,30,40,50,} ;
  for(auto n : aList)
    cout << n << ' ';
cout << endl;

  for(auto &n : aList)
    cout << n << ' ';
cout << endl;

return 0;
}


int main() {
  int R[10] ;
  int Temp;
  for (int i=0; i<10; i++) {
    cin >> R[i];
  }
  for (int i=0; i<10; i++) {
    Temp=Temp+R[i];

  }
  cout << Temp << endl;
  cout << Temp/(double)10 << endl;
  return 0;
}


struct CUSTOMER {
  char name[10];
  int age;
  char sex;
  
};


int main() {
  CUSTOMER customer[10];
  //위 매개상속
  int num = 0;
  char menu;
  for (int i=0; true;) {
    cin >> i;
  switch(i) {
    case 1:
    if(num<10) {
    cout << "이름" << endl;
    cin >> customer[num].name;
    cout << "나이" << endl;
    cin >> customer[num].age;
    cout << "성별" << endl;
    cin >> customer[num].sex;
      num=num+1;
    break;
    }else {
      cout<< "Error" <<endl;
    }

    case 2:
    for (int i=0; i<num; i++) {
      cout << customer[i].name << endl;
      cout << customer[i].age << endl;
      cout << customer[i].sex << endl;
    }

    case 3:
    cout << "종료";
    break;
  }
}
}


int TestFunc(int nParam = 10 ) {
  return nParam;
}
int main() {
  std::cout << TestFunc() << std::endl;
  std::cout << TestFunc(20) << std::endl;
  return 0;
}

int TestFunc(int nParam1, int nParam2 =2) {
  return nParam1 * nParam2;
}
int main(){
  std::cout << TestFunc(10) << std::endl;
  std::cout << TestFunc(10,5) << std::endl;
  return 0;
}


int Add(int a, int b, int c) {
  std::cout << "Add(int, int, int): ";
  return a+b+c;
}
int Bdd(int a, int b) {
  std::cout << "Bdd(int, int): ";
  return a+b;
}
double Cdd(double a, double b){
  std::cout << "Cdd(double, double): ";
  return a+b;
}

int main() {
  std::cout << Add(1,2,3) << std::endl;
  std::cout << Bdd(4,5) << std::endl;
  std::cout << Cdd(6.8,7.5) << std::endl;
  return 0;
}

namespace Test{
  int Data=100;
  namespace DEV{
    int Data=200;
    namespace WIN{
      int Data=300;
    }
  }
}
int main(){
  std::cout << Test::Data << std::endl;
  std::cout << Test::DEV::Data << std::endl;
  std::cout << Test::DEV::WIN::Data <<
  std::endl;
  return 0;
}


using namespace std;
unsigned long int perimete(unsigned short int a, unsigned short int b) {
scanf("%d",&a);
scanf("%d",&b);
return (a+b)*2;
}

int main() {
  std::cout << perimete <<std::endl;
  return 0;
}



int myFunc(unsigned short int x);

int main()
{
int myFunc(unsigned short int y);
int y=50;
std::cout<<"x :";
  std::cout<< myFunc(10) << std::endl;
std::cout<<"y :";
  std::cout<< y << std::endl;
return 0;
}
int myFunc(unsigned short int x)
{

return (x*4);
}



int Fack(unsigned short int a, unsigned short int b) {

 if (b>0) std::cout << a/b << "\n";
 else if(b==0)
 int b=-1;
 std::cout << "에러";

 return 0;
}


int main(){
  int a,b;
  std::cin >> a;
  std::cin >> b;
  Fack(a,b);
}


class CMyData
{
private:
  int m_nData;
public:
  int GetData(void) { return m_nData; }
  void SetData(int nParam) { m_nData = nParam; }
};

int main()
{
CMyData data;
data.m_nData = 10;
data.SetData(10);
std::cout << data.GetData() << std::endl;
return 0;
}



class cref_Test
{
  public:
    cref_Test(int &rParam) : m_nData(rParam) {};
    int GetData(void) {return m_nData;}
  private:
    int &m_nData;
};

int main()
{
  int a = 10;
  cref_Test t(a);
}


class cal {
  private:
  int a;
  int b;
  int value;
  public:
  void setValue(int a,int b);
  void add();
  void sub();
  void mul();
  void dive();
  int getValue();
};

void cal :: setValue(int x, int y){
  a = x;
  b = y;
}

void cal ::add(){
  value=a+b;
}

void cal :: sub(){
  value = a-b;
}

void cal :: mul(){
  value = a*b;
}

void cal :: dive(){
  value = a/b;
}

int cal :: getValue(){
return value;
}

int main() {
  int a,b;
  cout << "숫자입력" << endl;
  std :: cin >> a;
  std :: cin >> b;
  cal Step;
  Step.setValue(a,b);

  Step.add();
  cout << "+ " << Step.getValue()<< endl;
  Step.sub();
  cout << "- " << Step.getValue()<< endl;
  Step.mul();
  cout << "* " << Step.getValue()<< endl;
  Step.dive();
  cout << "/ " << Step.getValue() << endl;

}


class Cricle {
  private:
    double radius;
  public:
    Cricle(double Ra);
    Cricle();
    ~Cricle();
    Cricle(const Cricle& cricle);
    void setRadius(double radius);
    double getRadius() const;
    double getArea() const;
    double getPerimeter() const;
};

Circle :: Cricle(double rds)
: radius(rds)
{
  cout << "Parameter was called." <<endl;
}
Circle :: Circle ()
: redius(0.0)
{
  cout << "The defalut construcor was cadded." << endl;
}


class RandomInteger{
  private:
    int low, high, value;
    public:
      RandomInteger(int low, int high);
      ~RandomInteger();
      RandomInteger (const RandomInteger& random) = delete;
      void print() const;
      void chrn();
};
RandomInteger :: RandomInteger(int lw, int hh) :  low(lw), high(hh) {
  srand (time (0));
  int temp = rand ();
  value = temp % (high(hh) − low(lw) + 1) + low;
}

RandomInteger :: ~RandomInteger () {

}

void RandomInteger :: print () const
{
  cout << value << endl;
}

int main() {
  RandomInteger r1 (100,200);
  cout << "Random number between 100 and 200: ";
  r1.print();
  RandomInteger r2 (400,600);
  cout << "Random number between 400 and 600: ";
  r2.print ();
  RandomInteger r3 (1500, 2000);
  cout << "Random number between 1500 and 2000: ";
  r3.print ();
  return 0;
}



class random_sot{
  private:
  int value;
  public:
  void random_end();
  int get_value();

};

void random_sot :: random_end(){
  
  value = rand() %6 +1 ;
}

int random_sot :: get_value(){
  return value;
}

int main() {
  random_sot step;
  for (int i=0; i<10; i++){
    step.random_end();
    cout << step.get_value() << endl;
  }
}
