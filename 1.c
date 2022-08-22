///bubble

import java.util.*; 

class bubble{ 

 

static void sort(int[] a) 

{ 

int x=a.length; 

int t; 

for(int i=0;i<x-1;i++) 

{ 

for(int j=0;j<x-1;j++) 

{ 

if(a[j+1]>a[j]) 

{ 

t=a[j]; 

a[j]=a[j+1]; 

a[j+1]=t; 

} 

} 

} 

System.out.println("descending"); 

for(int i=0;i<x;i++) 

{ 

System.out.print(a[i]+" ");    

} 

 

for(int i=0;i<x-1;i++) 

{ 

for(int j=0;j<x-1;j++) 

{ 

if(a[j+1]<a[j]) 

{ 

t=a[j]; 

a[j]=a[j+1]; 

a[j+1]=t; 

} 

} 

} 

System.out.println(); 

System.out.println("ascending"); 

for(int i=0;i<x;i++) 

{ 

System.out.print(a[i]+" "); 

} 

} 

 

public static void main(String[] args) 

{ 

Scanner sc=new Scanner(System.in); 

System.out.println("enter array length"); 

int n=sc.nextInt();          

int arr[]=new int[n];      

for(int i=0;i<n;i++) 

{ 

System.out.println("enter the "+(i+1)+"th element"); 

arr[i]=sc.nextInt(); 

 

} 

sort(arr); 

} 

} 




////prime 

import java.util.*;                     

class prime 

{ 

private static boolean isPrime(int n)   

{ 

int c=0; 

for(int i=2;i<=n/2;i++) 

{ 

if(n%i==0) 

c++; 

} 

if(c>0) 

return false; 

return true; 

} 

public static void main(String args[]) 

{ 

Scanner sc = new Scanner(System.in);   

System.out.println("Enter N"); 

int N = sc.nextInt(); 

int count = 0; 

int i = 2; 

while(count<N) 

{ 

if(isPrime(i)) 

{ 

System.out.println(i);

count++; 

} 

i++; 

} 

} 

} 


//matrix add
 

import java.util.Scanner; 

class matrix{ 

public static void main(String[] args) 

{ 

Scanner sc=new Scanner(System.in); 

System.out.println("Enter rows"); 

int r=sc.nextInt(); 

System.out.println("Enter cols"); 

int c=sc.nextInt(); 

int A[][]=new int[r][c]; 

int B[][]=new int[r][c]; 

int C[][]=new int[r][c]; 

 

for(int i=0;i<r;i++) 

{ 

for(int j=0;j<c;j++) 

{ 

 System.out.println("matrix A:enter row "+(i+1)+" column "+(j+1)+ "element"); 

A[i][j]=sc.nextInt(); 

} 

} 

for(int i=0;i<r;i++) 

{ 

for(int j=0;j<c;j++) 

{ 

 System.out.println("matric B: enter row "+(i+1)+" column "+(j+1)+ "element"); 

 B[i][j]=sc.nextInt(); 

} 

} 

 

for(int i=0;i<r;i++) 

{ 

for(int j=0;j<c;j++) 

{ 

C[i][j]=A[i][j]+B[i][j]; 

} 

} 

 

for(int i=0;i<r;i++) 

{ 

for(int j=0;j<c;j++) 

{ 

System.out.print(C[i][j]+" "); 

} 

System.out.println(); 

} 

 

} 

} 
