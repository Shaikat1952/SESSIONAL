#include<iostream>
#include<iomanip>
#include<math.h>

#define f(x) pow(x,3) - 2*x-5

using namespace std;

int main()
{

	 float x0, x1, x, f0, f1, f, e;
	 int step = 1;

  cout<< setprecision(6)<< fixed;

	   up:
	   cout<<"Enter first guess: ";
     cin>>x0;
     cout<<"Enter second guess: ";
     cin>>x1;
     cout<<"Enter tolerable error: ";
     cin>>e;

	 f0 = f(x0);
	 f1 = f(x1);

	 if( f0 * f1 > 0.0)
	 {
		  cout<<"Incorrect Initial Guesses."<< endl;
		  goto up;
	 }
	 cout<<"False Position Method"<< endl;
	 cout<<"*********************"<< endl;
	 do
	 {

		  x = x0 - (x0-x1) * f0/ (f0-f1);
		  f = f(x);

		  cout<<"Iteration-"<< step<<":\t x = "<<x<<" and f(x) = "<<f(x)<< endl;

		  if( f0 * f < 0)
		  {
			   x1 = x;
			   f1 = f;
		  }
		  else
		  {
			   x0 = x;
			   f0 = f;
		  }
		  step = step + 1;
	 }while(fabs(f)>e);

	 cout<< endl<<"Root is: "<< x<< endl;

	 return 0;
}
