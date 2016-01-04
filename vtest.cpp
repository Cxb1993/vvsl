// Standard Template Library example

#include <iostream>
#include <vector>
using namespace std;


int main()
{


	double j;
   	vector<double> V;
 
	for(j=0;j<1000000;j++) {	
    		V.push_back(0);              // Insert a new element at the end
	}

   	vector<double>::iterator i;

	FILE *fp;
	fp = fopen("data","w");

   	for(i=V.begin(); i != V.end(); ++i) 
		fprintf(fp,"%lf\n",*i);
   
	fclose(fp);
	
	return 0;
}
      
