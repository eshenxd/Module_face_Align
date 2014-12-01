int NewDictionary_Load(unsigned int *pHandle, char * DicPath);
void FreeDictionary_Load(unsigned int handle);
int Dictionary_Load(unsigned int handle,int Pos);
unsigned int GetDictionary(unsigned int handle,float *feature,int *length);