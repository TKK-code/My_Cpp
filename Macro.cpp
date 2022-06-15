#include <iostream>
//directive
#define name "T Kiran"
#define test

int main(int argc, char const *argv[]) {
  //macro
  #ifndef output
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif
  #ifdef test
    std::cout << "cout this message. this will work because the macro has been declared." << '\n';
  #endif
  #if 0
  // from this point to
    std::cout << "cout this message" << '\n';
  #endif // this point no compile

    std::cout << "The name is " << name;
  return 0;
}

/*
The conditional compilation preprocessor directives allow you to specify under what conditions something will or won’t compile. There are quite a few different conditional compilation directives, but we’ll only cover the three that are used by far the most here: #ifdef, #ifndef, and #endif.

The #ifdef preprocessor directive allows the preprocessor to check whether an identifier has been previously #defined. If so, the code between the #ifdef and matching #endif is compiled. If not, the code is ignored.

In place of #ifdef PRINT_BOB and #ifndef PRINT_BOB, you’ll also see #if defined(PRINT_BOB) and #if !defined(PRINT_BOB). These do the same, but use a slightly more C++-style syntax.

#if 0
====

One more common use of conditional compilation involves using #if 0 to exclude a block of code from being compiled (as if it were inside a comment block)
*/
