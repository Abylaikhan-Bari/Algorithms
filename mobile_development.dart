class MixinExample {
  void method1() {
    print("method1");
  }
}

class MyClass with MixinExample {
  void method2() {
    print("method2");
  }
}

void main() {
  MyClass myObject = new MyClass();
  myObject.method1(); // prints "method1"
  myObject.method2(); // prints "method2"
}
