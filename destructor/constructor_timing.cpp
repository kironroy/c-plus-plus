#include <iostream>
using namespace std;

class Simple
{
private:
  int m_nID;
  
public:
  Simple(int nID)
  {
    cout << "Constructing Simple " << nID << '\n'; 
    m_nID = nID;
  }

  ~Simple()
  {
    cout << "Destructing Simple" << m_nID << '\n'; 
  }
  
  int getID() { return m_nID; }
}; 

int main()
{
  // allocate a Simple on the stack
  Simple simple(1);
  cout << simple.getID() << '\n'; 

  // allocate a Simple dynamically
  Simple *pSimple = new Simple(2);
  cout << pSimple->getID() << '\n'; 
  delete pSimple; 

  return 0;
} // simple goes out of scope here
