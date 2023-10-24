Runtime polymorphism is achieved only through a pointer (or reference) of the base class type.................................
Also, a base class pointer can point to the objects of the base class as well as to the objects of the derived class,, 
but we can only access base class members using the base class pointer,, The base class pointer can't acess the derived class memebers
even the base pointer is pointing to derive class object........................................

VIRTUAL keyword allow to execute the derive class function with the same name instead of using base class function to do run-time polymorphism.
****************************************************************************************************************************************

basically the abstract function is the function that need to be redefined or overwrite later in the derived classes. like it imposes that you have to have make the overwritten copy later on. and abstract class is basically those class that don't have any use or object but it'll be used later for derivation and it must contain atleast one abstract function.
