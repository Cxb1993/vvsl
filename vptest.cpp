// Standard Template Library example

#include <iostream>
#include <vector>
using namespace std;

class abc { public: double hi; };

int main()
{


	double j;
 	vector<abc*> V;
 
	for(j=0;j<1000000;j++) {
	
		abc *a = new abc;
		a->hi = (double)j;	
		V.push_back(a);	
	}

	vector<abc*>::iterator k;

	FILE *fp;
	fp = fopen("data","w");

   	for(k=V.begin(); k != V.end(); ++k) 
		fprintf(fp,"%lf\n",(*k)->hi);
   
	fclose(fp);
	
	return 0;
}
      
