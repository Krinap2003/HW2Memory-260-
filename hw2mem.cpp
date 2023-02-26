//Krina Patel
#include <iostream>
using namespace std;
int main() {
  struct foo_t {
    int x[100];
    int var1;
    int y[10];
    } foo;
  int var2;    
  long i;     //0x16cf819d0
  int *p, *q;  // 0x16cf819c8
  short int *s;
  long int *l;
  struct foo_t bar[50];

  for (i=0; i<100; i++) foo.x[i]=500+i;
  for (i=0; i<10; i++)  foo.y[i]=700+i;
  foo.var1 = 640;

  //Question 1
  cout << "Size of short: "<<sizeof(*s) * 8<< " bits.\n"; 
  cout << "Size of int: "<< sizeof(*p) * 8<< " bits.\n"; 
  cout << "Size of long: "<<sizeof(*l) * 8<< " bits.\n\n"; 

  //Question 2 
  cout << "Size of short pointer: "<<sizeof(s) * 8<< " bits.\n"; //MOD
  cout << "Size of int pointer: "<< sizeof(p) * 8<< " bits.\n";  //MOD
  cout << "Size of long pointer: "<<sizeof(l) * 8<< " bits.\n\n"; //MOD

  q = (int *) &foo;    cout << q << "\n";
  p=&(foo.x[5]);       cout << *p << " \n";

  //Question 3
  cout<<"s value: " << s << "\n";
  cout<<"s address: " << &s << "\n";
  cout<<"p value: " << p << "\n";
  cout<<"p address: " << &p << "\n";
  cout<<"l value: " << l << "\n";
  cout<<"l address: " << &l << "\n";
  cout<<"i value: " << i << "\n";
  cout<<"i address: " << &i << "\n";
  cout<<"q value: " << q << "\n";
  cout<<"q address: " << &q << "\n";
  cout<<"var2 value: " << var2 << "\n";
  cout<<"var2 address: " << &var2 << "\n";
  cout<<"bar[0] address: " << &bar[0] << "\n";
  cout<<"bar[49] address: " << &bar[49] << "\n";
  cout<<"foo.x[0] value: " << foo.x[0] << "\n";
  cout<<"foo.x[0] address: " << &foo.x[0] << "\n";
  cout<<"foo.x[99] value: " << foo.x[99] << "\n";
  cout<<"foo.x[99] address: " << &foo.x[99] << "\n";
  cout<<"foo.var1 value: "<< foo.var1 <<"\n";
  cout<<"foo.var1 address: "<< &foo.var1 <<"\n";
  cout<<"foo.y[0] value: " << foo.y[0] << "\n";
  cout<<"foo.y[0] address: " << &foo.y[0] << "\n";
  cout<<"foo.y[9] value: " << foo.y[9] << "\n";
  cout<<"foo.y[9] address: " << &foo.y[9] << "\n";

  // POINT 1
  q = (int *) &var2;   cout << "\n" <<q << "\n";
  q = p+16;            cout << *q << "\n";
  i = ((long) p) + 16; 
  q = (int *) i;       cout << *q << "\n";
  s = (short *) i;     cout << *s << "\n";
  l = (long *) i;      cout << *l << "\n";
  //Question 5
  q = p+95;            cout << *q << " \n";  // EXPLAIN
  q = p+98;            cout << *q << "\n";
  i = ((long) p) + 17;
  q = (int *) i;       cout << *q << "\n";
  
  //Question 6
  q = p + 100;     cout << *q << "\n"; //MOD
  q = (int *) (((long) p) + 400);  cout << *q << "\n"; //MOD

  //Question 7
  p = (int *) bar;
  *(p + 877) = 847; cout << bar[7].var1 << "\n"; //MOD
}

