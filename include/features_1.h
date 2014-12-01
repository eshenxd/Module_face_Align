int NewFeatureExtract(unsigned int *pHandle,int width,int heigth);
void FreeFeatureExtract(unsigned int handle);
void feature_extract(unsigned int handle,unsigned char *FaceFrameData);
unsigned int getoutput(unsigned int handle ,float output[5]);