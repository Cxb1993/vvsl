// Standard Template Library example

#include <iostream>
#include <list>
using namespace std;


int main()
{


	double j;
   	list<double> L;
 
	for(j=0;j<1000000;j++) {	
    		L.push_back(0);              // Insert a new element at the end
	}

   	list<double>::iterator i;

	FILE *fp;
	fp = fopen("data","w");

   	for(i=L.begin(); i != L.end(); ++i) 
		fprintf(fp,"%lf\n",*i);
   
	fclose(fp);
	
	return 0;
}
      
