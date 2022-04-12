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
int t = sc.nextInt();
Outer:
while(t-- > 0){
int n = sc.nextInt();
int arr[] = new int[n];
for(int i=0;i<n;i++){
arr[i] = sc.nextInt();
}
Arrays.sort(arr);
int sum =0;
int i=0;
for(i=0;i<n;i++){
if(arr[i] <= i+1){
sum += Math.abs(arr[i]-(i+1));
}
else{
System.out.println("Second");
continue Outer;
}
}
if(sum%2==0)
System.out.println("Second");
else
System.out.println("First");
}
}
}