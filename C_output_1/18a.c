/*fun1() adds its previous value because of 'static variable'. 
Therefore, it prints 55. [sourcecode language=C] #include int fun1(int n); 
int fun2(int n); int fun1(int n) { static int i= 0; if (n > 0) { ++i; fun1(n-1); }
return (i); } int fun2(int n) { static int i= 0; if (n>0) { i = i+ fun1 (n) ; fun2(n-1) ; } 
return (i); } int main() { printf("%d", fun2(5)); return 0; }

The return value of fun2(5) is ________ . Note - This question was Numerical Type. ans is 55;
*/
int fun1(int n) {
    static int i= 0;
    if (n > 0) {
       ++i;
      fun1(n-1);
   }
  return (i);
}
int fun2(int n) {
   static int i= 0;
   if (n>0) {
      i = i+ fun1 (n) ;
      fun2(n-1) ;
  }
return (i);
}