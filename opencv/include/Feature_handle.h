int NewFeature_handle(unsigned int *pHandle,int s_length);        
//   s_length 软量化测量度，请置为0

void FreeFeature_handle(unsigned int handle);

void Feature_handle(unsigned int handle,int *features, char *person_id, int belongsto);
//   features提取的特征，无软量化的形式为 int a[175] 
//   person_id  人物数字标识 唯一!
//   belongsto  人物所属类别 例如普通人为类别1 关注人物为类别3,etc.
