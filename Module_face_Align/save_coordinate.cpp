#include "save_coordinate.h"

using namespace std;
int saveCoordinate(string name , int pos[10])
{
	ofstream fp1;

	fp1.open("../зјБъ/coordinate.txt",ios::app);

	if(fp1)
	{
		fp1<<name<<endl;

		fp1<<pos[0]<<" "<<pos[1]<<" "<<pos[2]<<" "<<pos[3]
		<<" "<<pos[5]<<" "<<pos[6]<<" "<<pos[7]<<" "<<pos[8]
		<<" "<<pos[9]<<endl;

		fp1<<endl;

		fp1.close();
	}


	return 0;
}