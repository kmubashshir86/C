// learning from here if you are typing something number like 4 455 3555 woh int hi hoga not same for float yaar
#include <stdio.h>

int main(){
  long long int long_ ;
  long_ =2147483647 *2; //int_max=2147483647;
  printf("%lld\n",long_);
  return 0;
}

/* soln is

#include <stdio.h>

int main(){
  long long int long_ ;
  long_ = (long long int)2147483647 *2; //int_max=2147483647;
  printf("%lld\n",long_);
  return 0;
}*/