#include <iostream>
#include<cmath>
using namespace std;

void
isprime (int n)
{
  bool flag = true;
  if (n < 0)
    {
      cout << "Negative number";
      return;
    }
  if (n == 1)
    {
      cout << "Neither prime nor composite";
      return;
    }
  for (int i = 2; i <= sqrt (n); i++)
    {
      if (n % i == 0)
	{

	  flag = false;
	  break;
	}

    }
  if (flag == true)
    {
      cout << "Prime number";
    }
  else
    {
      cout << "Not a prime number";
    }

}

void
issquare (int n)
{
  double num = (double) n;
  double root = sqrt (n);
  if (root * root == n)
    {
      cout << "Square number";
    }
  else
    {
      cout << "Not a square number";
    }
}

void
iscube (int n)
{
  int cbroot;
  cbroot = (int) round (pow (n, 1 / 3));
  if (cbroot * cbroot * cbroot == n)
    {
      cout << "Cube number";
    }
  else
    {
      cout << "Not a cube number";
    }
}

void
isfact (int n)
{
  int res = 1, i;
  for (i = 2; i <= n; i++)
    res *= i;
  cout << "Factorial of number " << n << " is " << res;

}

void
ispalindrome (int n)
{
  int temp, r, rev = 0;
  temp = n;
  while (n != 0)
    {
      r = n % 10;
      rev = rev * 10 + r;
      n /= 10;
    }
  if (rev == temp)
    {
      cout << "Palindrome number";
    }
  else
    {
      cout << "Not a palindrome number";
    }

}

void
isneon (int n)
{
  int square = n * n;
  int sum = 0;
  while (square != 0)
    {
      sum = sum + square % 10;
      square = square / 10;
    }
  if (sum == n)
    {
      cout << "Neon number";
    }
  else
    {
      cout << "Not a neon number";
    }
}

void
printfib (int n)
{
  int f1 = 0, f2 = 1, nextterm = 0;
  nextterm = f1 + f2;
  cout << "Fibonacci series" << f1 << ", " << f2 << ", ";

  while (nextterm <= n)
    {
      cout << nextterm << ",";
      f1 = f2;
      f2 = nextterm;
      nextterm = f1 + f2;

    }
}

void
isarmstrong (int n)
{
  int sum = 0, num, temp;
  temp = n;
  while (temp != 0)
    {
      num = temp % 10;
      sum = sum + (num * num * num);
      temp = temp / 10;
    }
  if (sum == n)
    {
      cout << "Armstrong number";
    }
  else
    {
      cout << "Not an armstrong number";
    }
}

int
noofdigits (int n)
{
  int digits = 0;
  int temp = n;
  while (temp)
    {
      temp = temp / 10;
      digits++;
    }
  return digits;
}

bool
isdisarium (int n)
{
  int digits = noofdigits (n);
  int sum = 0;
  int temp = n;
  while (temp)
    {
      int rightDigit = temp % 10;
      sum = sum + pow (rightDigit, digits--);
      temp = temp / 10;
    }

  if (sum == n)
    {
      cout << n << " is a Disarium Number";
    }
  else
    {
      cout << n << " is not a Disarium Number";
    }
}


void
isharshad (int n)
{
  int temp, res, sum = 0;
  temp = n;
  while (temp)
    {
      sum = sum + temp % 10;
      temp = temp / 10;
      res = n % sum;
    }
  if (res == 0)
    {
      cout << "Harshad number";
    }
  else
    {
      cout << "Not a harshad number";
    }
}

int
main ()
{
  int n, menu;
  cout << "Chosse a input number:";
  cin >> n;

  if (n <= 0)
    {
      cout << "Choose a positive number";
    }
  else
    {
      cout <<
	"Choose a number for the corresponding function\n 1. Find if number is Prime number\n2. Find if the number is square number\n3. Find if the number is cube number\n4. Find the Factorial of that number\n5. Find if the number is Palindrome number\n6. Find if the number is neon number\n7. Print Fibonacci series till that number\n8.  Find if the number is Armstrong number\n9. Find if the number is Disarium number\n10. Find if the number is Harshad Number";
      cin >> menu;
      switch (menu)
	{
	case 1:
	  isprime (n);
	  break;
	case 2:
	  issquare (n);
	  break;
	case 3:
	  iscube (n);
	  break;
	case 4:
	  isfact (n);
	  break;
	case 5:
	  ispalindrome (n);
	  break;
	case 6:
	  isneon (n);
	  break;
	case 7:
	  printfib (n);
	  break;
	case 8:
	  isarmstrong (n);
	  break;
	case 9:
	  isdisarium (n);
	  break;
	case 10:
	  isharshad (n);
	  break;

	}
    }

  return 0;
}
