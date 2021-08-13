#include <stdio.h> 

// A normal function with an int parameter 
// and void return type 
void fun(int a) { 
    printf("Value of a is %d\n", a); 
} 
  
int main() { 
    // // fun_ptr is a pointer to function fun()  
    // void (*fun_ptr)(int) = &fun; 
  
    // /* The above line is equivalent of following two 
    //    void (*fun_ptr)(int); 
    //    fun_ptr = &fun;  
    // */
  
    // // Invoking fun() using fun_ptr 
    // (*fun_ptr)(10); 

   // Define a type-alias names fun_pointer_type
   // This type-alias is defined as a pointer (with the asterisk *) to a function,
   // the function takes one int argument and returns no value (void)
   typedef void (*fun_pointer_type)(int);

   // Use the type-alias to define a variable, and initialize the variable
   // This defines the variable fun_ptr being the type fun_pointer_type
   // I.e. fun_ptr is a pointer to a function
   // Initialize it to make it point to the function fun
   fun_pointer_type fun_ptr = &fun;

   // Now *call* the function using the function pointer
   // First dereference the pointer, to get the function it points to
   // Then call the function, passing the single argument 10
   (*fun_ptr)(10);

    return 0;
}