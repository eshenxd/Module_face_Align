int NewFeature_handle(unsigned int *pHandle,int s_length);        
//   s_length �����������ȣ�����Ϊ0

void FreeFeature_handle(unsigned int handle);

void Feature_handle(unsigned int handle,int *features, char *person_id, int belongsto);
//   features��ȡ��������������������ʽΪ int a[175] 
//   person_id  �������ֱ�ʶ Ψһ!
//   belongsto  ����������� ������ͨ��Ϊ���1 ��ע����Ϊ���3,etc.
