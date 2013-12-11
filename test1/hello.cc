#include <node.h>
#include <v8.h>

using namespace v8;

float forfunc(){
  float i,j=0;
  for(i=0;i<10000000;i++){
 	j += i/2;
  };
  return j;
}
void init(Handle<Object> target) {
	float j;
  j = forfunc();
  target->Set(String::NewSymbol("hello"),Number::New(j));
}
NODE_MODULE(hello, init)