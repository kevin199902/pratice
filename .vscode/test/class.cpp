#include <iostream>  

class T {  
  int val;  //因為沒有指定存取修飾符，所以預設是private

public:
//初始化法(一)
  T():val{1}{
    std::cout << "Initialization successful\n";
  }

// 初始化法(二)
// T(){
//   val = 10;
// }

  void set_other_val(T &other) { other.val = 100; };  
  int get_val() { return val; }  
};  

int main()  
{  
  T t1, t2;  
  t1.set_other_val(t2);  
  std::cout << "t1.val = " << t1.get_val() << "\n";
  std::cout << "t2.val = " << t2.get_val() << "\n";  
}  