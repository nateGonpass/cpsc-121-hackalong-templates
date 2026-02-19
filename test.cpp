//Nathan Verduzco
//876414053
// : == after this initizaliation 
// ; == 
#include <iostream>
#include <string>

template <typename T> class box{
 private:
  T item_;
 
public:
  box(T item):item_(item) {}

  void SetValue(T item) { item_ = item; }
 T GetValue()
{ return item_;};

int main() {
    std::cout << "test here" << "\n";
  box b_int(5);
  box b_double(5.0);
  std::cout << "the int box is " << b_int.GetValue()
            << " the double box is "
            << b_double.GetValue();
  return 0;
}
//all code goes in here
