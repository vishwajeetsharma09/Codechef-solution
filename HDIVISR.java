import java.util.*;
import java.lang.*;
import java.io.*;
/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
public static void main (String[] args) throws java.lang.Exception
{
// your code goes here
       Scanner sc = new Scanner(System.in);
       int num =sc.nextInt();
       int max=0;
       for(int i=10;i>0;i--){
           if(num%i == 0){
              System.out.println(i);
              break;
          }
          else{
            continue;
          }
       }
}
}



