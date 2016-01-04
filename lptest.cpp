// Standard Template Library example

#include <iostream>
#include <list>
using namespace std;

class abc { public: double hi; };

int main()
{


	double j;
 	list<abc*> L;
 
	for(j=0;j<1000000;j++) {
	
		abc *a = new abc;
		a->hi = (double)j;	
		L.push_back(a);	
	}

	list<abc*>::iterator k;

	FILE *fp;
	fp = fopen("data","w");

   	for(k=L.begin(); k != L.end(); ++k) 
		fprintf(fp,"%lf\n",(*k)->hi);
   
	fclose(fp);
	
	return 0;
}
      
